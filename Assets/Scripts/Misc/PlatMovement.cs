using UnityEngine;
using System.Collections;

public class PlatMovement : MonoBehaviour {

	private Vector3 posA;
	private Vector3 posB;

	private Vector3 nexPos;

	[SerializeField]
	private float speed;

	[SerializeField]
	private Transform child;

	[SerializeField]
	private Transform pointB;
	// Use this for initialization
	void Start () {
		posA = child.localPosition;
		posB = pointB.localPosition;
		nexPos = posB;
	}
	
	// Update is called once per frame
	void Update () {
		Move ();
	}

	private void Move() {
		child.localPosition = Vector3.MoveTowards (child.localPosition, nexPos, speed * Time.deltaTime);
		if (Vector3.Distance (child.localPosition, nexPos) <= 0.1) {
			ChangeDestination ();
		}
	}

	private void ChangeDestination() {
		nexPos = nexPos != posA ? posA : posB;
	}

	private void OnCollisionEnter2D(Collision2D other) {
		if (other.gameObject.tag == "Player") {
			other.gameObject.layer = 9;
			other.transform.SetParent (child);
		}
	}

	private void OnCollisionExit2D(Collision2D other) {
		other.transform.SetParent (null);
	}
}
