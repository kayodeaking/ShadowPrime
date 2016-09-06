using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public abstract class Character : MonoBehaviour {


	[SerializeField]
	protected Transform rockPos;

	[SerializeField]
	protected float speed;

	protected bool facingRight;

	[SerializeField]
	protected GameObject rockPrefab;


	[SerializeField]
	protected Stat hp;

	[SerializeField]
	private EdgeCollider2D fistCollider;

	[SerializeField]
	private List<string> damageSources;

	public abstract bool IsDead{ get;}


	public bool Attack { get; set;}
	public bool TakingDamage{ get; set;}
	public Animator MyAni{ get; private set;}

	protected Vector2 startPos;
	public EdgeCollider2D FistCollider {
		get {
			return fistCollider;
		}
	}

	[SerializeField]
	protected float respawnTimer;
	public float Respawn { 
		get { 
			return respawnTimer;
		}
	}
	// Use this for initialization
	public virtual void Start () {
	
		hp.Initialize ();

		startPos = transform.position;
		facingRight = true;
		MyAni = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public abstract IEnumerator TakeDamage ();
	public abstract void Death ();

	public virtual void ChangeDirection() {
		
		facingRight = !facingRight;
		transform.localScale = new Vector3 (transform.localScale.x * -1, 1, 1);
	}

	public virtual void ThrowRock(int value) {

		if (facingRight) {
			GameObject temp = (GameObject)Instantiate (rockPrefab, rockPos.position, Quaternion.Euler (new Vector3 (0, 0, -90)));
			temp.GetComponent<Rock> ().Initialize (Vector2.right);
		} else {
			GameObject temp = (GameObject)Instantiate (rockPrefab, rockPos.position, Quaternion.Euler (new Vector3 (0, 0, -90)));
			temp.GetComponent<Rock> ().Initialize (Vector2.left);
		}

	}

	public void MeleeAttack () {
		FistCollider.enabled = true;
	}
		
	public virtual void OnTriggerEnter2D(Collider2D other) {
		if (damageSources.Contains(other.tag)) {
			StartCoroutine (TakeDamage ());
		}
	}

}
