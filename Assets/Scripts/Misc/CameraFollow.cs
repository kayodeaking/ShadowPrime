﻿using UnityEngine;
using System.Collections;

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

	// Use this for initialization
	void Start () {
		
		target = GameObject.Find ("Player").transform;
	}

	void LateUpdate () {
	
		transform.position = new Vector3 (Mathf.Clamp (target.position.x, xMin, xMax), Mathf.Clamp (target.position.y, yMin, yMax), transform.position.z);
	}
}