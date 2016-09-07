using UnityEngine;
using System.Collections;

public class Shop : MonoBehaviour {

	private float x;
	private float y;

	[SerializeField]
	private GameObject player;

	[SerializeField]
	private GameObject leftPoint;
	[SerializeField]
	private GameObject rightPoint;

	private Animator myAni;

	public bool open = false;

	[SerializeField]
	private GameObject shopWindow;
	// Use this for initialization
	void Start () {
		myAni = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {


		Open_Close_Shop ();
	}

	private void Open_Close_Shop () {
		if (player.transform.localPosition.x >= leftPoint.transform.localPosition.x && player.transform.localPosition.x <= rightPoint.transform.localPosition.x) {
			if (Input.GetButtonDown ("Enter")) {
				open = true;
			}
			if (Input.GetButtonDown ("Cancel")) {
				open = false;
			}
			shopWindow.SetActive (open);
		} else { 
			open = false;
		}

		if (open) {
			myAni.SetBool ("OpenedShop", true);
		} else {
			myAni.SetBool ("OpenedShop", false);
		}
	}
}
