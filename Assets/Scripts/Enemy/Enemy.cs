using UnityEngine;
using System.Collections;

public class Enemy : Character {
	
	private IEnemyState currState;

	public GameObject Target{ get; set;}

	[SerializeField]
	private float meleeRange;

	[SerializeField]
	private float inThrowRange;

	[SerializeField]
	private Transform leftEdge;
	[SerializeField]
	private Transform rightEdge;

	public bool InMeleeRange {
		get {
			if (Target != null) {
				return Vector2.Distance (transform.position, Target.transform.position) <= meleeRange;
			}
			return false;
		}
	}

	public bool InThrowRange {
		get {
			if (Target != null) {
				return Vector2.Distance (transform.position, Target.transform.position) <= inThrowRange;
			}
			return false;
		}
	}

	#region implemented abstract members of Character

	public override bool IsDead {
		get {
			return hp.CurrVal <= 0;
		}
	}

	#endregion

	// Use this for initialization
	public override void Start () {
		base.Start ();
		Player.GamePlayer.Dead += new DeadEventHandler (RemoveTarget);
		ChangeState (new IdleState ());
	}

	// Update is called once per frame
	void Update () {
		if (!IsDead) {
			if (!TakingDamage) {
				currState.Execute ();
			}
			LookAtTarget ();
		}
	}

	public void RemoveTarget () {
		Target = null;
		ChangeState (new PatrolState ());
	}


	private void LookAtTarget () {
		if (Target != null) {
			float xDir = Target.transform.position.x - transform.position.x;
			if (xDir < 0 && facingRight || xDir > 0 && !facingRight) {
				ChangeDirection ();
			}
		}
	}


	public void ChangeState(IEnemyState newState) {
		if (currState != null) {
			currState.Exit ();
		}
		currState = newState;
		currState.Enter (this);
	}

	public void Move() {
		if (!Attack) {
			if ((GetDirection ().x > 0 && transform.position.x < rightEdge.position.x) || (GetDirection ().x < 0 && transform.position.x > leftEdge.position.x)) {
				MyAni.SetFloat ("Speed", 1);
				transform.Translate (GetDirection () * (speed * Time.deltaTime));
			} else if (currState is PatrolState) {
				ChangeDirection ();
			}
		}
	}

	public Vector2 GetDirection() {
		return facingRight ? Vector2.right : Vector2.left;		
	}

	public override void ChangeDirection () {
		Transform tmp = transform.FindChild ("EnemyHealthCanvas").transform;
		Vector3 pos = tmp.position;
		tmp.SetParent (null);
		base.ChangeDirection ();
		tmp.SetParent (transform);
		tmp.position = pos;
	}

	public override void OnTriggerEnter2D(Collider2D other) {
		base.OnTriggerEnter2D (other);
		currState.OnTriggerEnter (other);
	}

	#region implemented abstract members of Character

	public override IEnumerator TakeDamage ()
	{
		hp.CurrVal -= 10;
		if (!IsDead) {
			MyAni.SetTrigger ("Damage");
		} else {
			GameObject coin = (GameObject)Instantiate (GameManager.Instance.CoinPrefab, new Vector2 (transform.position.x, transform.position.y +.2f), Quaternion.identity);
			Physics2D.IgnoreCollision (coin.GetComponent<Collider2D> (), GetComponent<Collider2D>());
			MyAni.SetTrigger ("Die");
			yield return null;
		}

	}

	#endregion

	#region implemented abstract members of Character

	public override void Death ()
	{
		MyAni.ResetTrigger ("Die");
		MyAni.SetTrigger ("Idle");
		hp.CurrVal = hp.MaxVal;
		transform.position = startPos;
	}

	#endregion





}
