using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Rigidbody2D))]
public class Rock : MonoBehaviour {

	[SerializeField]
	private float speed;

	private Rigidbody2D myRigi;

	private Vector2 direction;

	// Use this for initialization
	void Start () {
	
		myRigi = GetComponent<Rigidbody2D> ();
	}
	void FixedUpdate() {
		myRigi.velocity = direction * speed;

	}

	public void Initialize (Vector2 direction) {
		this.direction = direction;
	}

	void OnBecameInvisible() {
		Destroy (gameObject);
	}
}
