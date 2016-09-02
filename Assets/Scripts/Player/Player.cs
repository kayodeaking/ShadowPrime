﻿using UnityEngine;
using System.Collections;

public delegate void DeadEventHandler();

public class Player : Character {

	private static Player gamePlayer;

	public event DeadEventHandler Dead;


	[SerializeField]
	private Stat mp;


	public static Player GamePlayer {
		get {
			if (gamePlayer == null) {
				gamePlayer = GameObject.FindObjectOfType<Player> ();
			}
			return gamePlayer;
		}
	}
		
	[SerializeField]
	private Transform[] groundPoints;

	[SerializeField]
	private float groundRadius;

	[SerializeField]
	private LayerMask whatIsGround;

	[SerializeField]
	private bool airControl;

	[SerializeField]
	private float jumpForce;

	private bool immortal = false;

	private SpriteRenderer spriteRenderer;

	[SerializeField]
	private float immortalTime;


	[SerializeField]
	private static float dodgeSpeed;

	public static float DodgeSpeed {
		get {
			dodgeSpeed = 100;
			return dodgeSpeed;
		}
	}

	public Rigidbody2D MyRigi { get; set;}

	public bool Roll { get; set;}
	public bool Jump { get; set;}
	public bool OnGround { get; set;}


	#region implemented abstract members of Character
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


	public override void Start () {
		
		base.Start ();
		mp.Initialize ();
		MyRigi = GetComponent<Rigidbody2D> ();
		spriteRenderer = GetComponent<SpriteRenderer> ();
	}


	void Update () {

		if (!TakingDamage && !IsDead) {

			if (transform.position.y <= -14f) {
				Death ();
			}
			HandleInput ();
		} 


	}

	// Update is called once per frame
	void FixedUpdate () {

		if (!TakingDamage && !IsDead ) {
			
			float horizontal = Input.GetAxis ("Horizontal");
			float vertical = Input.GetAxis ("Vertical");
			Horizontal = horizontal;
			Vertical = vertical;

			OnGround = IsGrounded ();


			HandleMovement (horizontal, vertical);
			Flip (horizontal);
			HandleLayers ();
		}
	}

	public void OnDead() {
		if (Dead != null) {
			Dead();
		}
	}

	private void HandleMovement(float horiz, float verti) {

		//Falling from the sky
		if (MyRigi.velocity.y < 0) {
			MyAni.SetBool ("Land", true);
		}

		//Dodge on the ground
		if (!Attack && !Roll && (OnGround || airControl)) {
			dodgeSpeed = 100;
			MyRigi.velocity = new Vector2 (horiz * speed, MyRigi.velocity.y);
		}

		//Dodge in the sky
		if (Jump && MyRigi.velocity.y == 0) {
			dodgeSpeed = .0005f;
			MyRigi.AddForce(new Vector2(0, jumpForce));
		}
			
		if (verti == 1 && OnGround) {
			MyAni.SetBool ("LookUp", true);
		} else if (verti == 0 && OnGround) {
			MyAni.SetBool ("LookUp", false);
			MyAni.SetFloat ("Speed", Mathf.Abs(horiz));
			MyAni.SetBool ("LookDown", false);
		} else if (verti == -1 && OnGround) {
			MyAni.SetBool ("LookDown", true);
		}
			
	}

	private void HandleInput() {
		
//		if (vertical == 0) {
			if (Input.GetKeyDown (KeyCode.Z)) {
				MyAni.SetTrigger ("Attack");
			}

			if (Input.GetKeyDown (KeyCode.X)) {
				MyAni.SetTrigger ("Roll");
			}

			if (Input.GetKeyDown (KeyCode.C)) {
				MyAni.SetTrigger ("Jump");
			}

			if (Input.GetKeyDown (KeyCode.V)) {
				MyAni.SetTrigger ("Throw");
			}
		//}

	}

	private void Flip(float horiz) {
		if (horiz > 0 && !facingRight || horiz < 0 && facingRight) {
			ChangeDirection ();
		}
	}

	private bool IsGrounded() {
		
		if (MyRigi.velocity.y <= 0) {
			
			foreach (Transform point in groundPoints) {

				Collider2D[] colliders = Physics2D.OverlapCircleAll (point.position, groundRadius, whatIsGround);

				for (int i = 0; i < colliders.Length; i++) {
					if (colliders[i].gameObject  != gameObject) {
						return true;
					}
				}
			}
		}
		return false;
	}

	private void HandleLayers() {
		if (!OnGround) {
			MyAni.SetLayerWeight (1, 1);
		} else {
			MyAni.SetLayerWeight (1, 0);
		}
	}

	public override void ThrowRock(int value) {

		if (!OnGround && value == 1 || OnGround && value == 0) {
			base.ThrowRock (value);
		}

	}

	public override void OnTriggerEnter2D(Collider2D other) {
		if (!Roll) {
			base.OnTriggerEnter2D (other);
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
		
	#region implemented abstract members of Character

	public override IEnumerator TakeDamage ()
	{
		if (!immortal) {
			
			hp.CurrVal -= 10;

			if (!IsDead) {
				MyAni.SetTrigger ("Damage");
				immortal = true;
				StartCoroutine (IndicateImmortalDamage ());
				yield return new WaitForSeconds (immortalTime);
				immortal = false;
			} else {
				MyAni.SetLayerWeight (1, 0);
				MyAni.SetTrigger ("Die");
			}
		}

	}

	#endregion


	#region implemented abstract members of Character
	public override void Death ()
	{
		MyRigi.velocity = Vector2.zero;
		MyAni.ResetTrigger ("Die");
		MyAni.SetTrigger ("Idle");
		hp.CurrVal  = hp.MaxVal;
		transform.position = startPos;
	}
	#endregion
}