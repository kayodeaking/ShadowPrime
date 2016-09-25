using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CameraFollow : MonoBehaviour {

	private static CameraFollow cam;

	public static CameraFollow Cam {
		get {
			if (cam == null) {
				cam = GameObject.FindObjectOfType<CameraFollow> ();
			}
			return cam;
		}
	}

	[SerializeField]
	private float xMax;
	[SerializeField]
	private float yMax;

	[SerializeField]
	private float xMin;
	[SerializeField]
	private float yMin;

	private Transform target;

	[SerializeField]
	GameObject player;

	// Use this for initialization
	void Start () {
		target = player.transform;
		transform.position = new Vector3 (Mathf.Clamp (target.position.x, xMin, xMax), Mathf.Clamp (target.position.y, yMin, yMax), transform.position.z);

	}

	void LateUpdate () {
	
		transform.position = new Vector3 (Mathf.Clamp (target.position.x, xMin, xMax), Mathf.Clamp (target.position.y, yMin, yMax), transform.position.z);
	}
}
