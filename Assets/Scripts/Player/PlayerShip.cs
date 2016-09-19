using UnityEngine;
using System.Collections;

public class PlayerShip : Ships {

	[SerializeField]
	private Stat mp;

	[SerializeField]
	private Stat shield;

	public event DeadEventHandler Dead;

	private static PlayerShip gameShip;
	public static PlayerShip GameShip {
		get {
			if (gameShip == null) {
				gameShip = GameObject.FindObjectOfType<PlayerShip> ();
			}
			return gameShip;
		}
	}

	private bool immortal = false;
	[SerializeField]
	private float immortalTime;
	private SpriteRenderer spriteRenderer;

	public Rigidbody2D MyRigi { get; set;}


	#region implemented abstract members of Ships
	public override bool IsDead {
		get {
			if (hp.CurrVal <= 0) {
				OnDead ();
			}
			return hp.CurrVal <= 0;
		}
	}
	#endregion

	public static float Horizontal { get; set; }
	public static float Vertical { get; set;}

	private float manaRestoreTimer = 5;
	private float manaTimer = 0;

	// Use this for initialization
	public override void Start () {
		base.Start ();
		mp.Initialize ();
		shield.Initialize ();
		MyRigi = GetComponent<Rigidbody2D> ();
		spriteRenderer = GetComponent<SpriteRenderer> ();
		facingDown = false;
	}
	
	// Update is called once per frame
	void Update () {
	
		if (!TakingDamage && !IsDead) {
			HandleInput ();
		} 

		RestoreMana ();
	}

	// Update is called once per frame
	void FixedUpdate () {

		if (!TakingDamage && !IsDead ) {

			float horizontal = Input.GetAxis ("Horizontal");
			float vertical = Input.GetAxis ("Vertical");
			Horizontal = horizontal;
			Vertical = vertical;

			HandleMovement (horizontal, vertical);
			Flip (vertical);
		}
	}

	public void OnDead() {
		if (Dead != null) {
			Dead();
		}
	}

	private void HandleMovement (float horiz, float verti) {
		MyRigi.velocity = new Vector2 (horiz * speed, verti * speed);
	}

	private void HandleInput() {

		if (Input.GetButtonDown("Fire1") && mp.CurrVal > 0) {
			Blaster1 ();
		}
		if (Input.GetButtonDown("Fire2") && mp.CurrVal > 0) {
			Blaster2 ();
			mp.CurrVal -= 10;
		}

	}

	private void Flip(float verti) {
		if (verti < 0 && !facingDown || verti > 0 && facingDown) {
			ChangeDirection ();
		}
	}

	private IEnumerator IndicateImmortalDamage () {

		while (immortal) {
			spriteRenderer.enabled = false;
			yield return new WaitForSeconds (.1f);
			spriteRenderer.enabled = true;
			yield return new WaitForSeconds (.1f);
		}

	}

	#region implemented abstract members of Ships
	public override IEnumerator TakeDamage ()
	{
		if (!immortal) {

			hp.CurrVal -= 10;
			if (!IsDead) {
				immortal = true;
				StartCoroutine (IndicateImmortalDamage ());
				yield return new WaitForSeconds (immortalTime);
				immortal = false;
			}
		}
	}
	#endregion

	#region implemented abstract members of Ships
	public override void Death ()
	{
		hp.CurrVal  = hp.MaxVal;
		transform.position = startPos;
	}
	#endregion

	private void RestoreMana() {

		manaTimer += Time.deltaTime;
		if (manaTimer >= manaRestoreTimer) {
			if (mp.CurrVal < mp.MaxVal) {
				mp.CurrVal += 10;
			}
			manaTimer = 0;
		}
	}
}
