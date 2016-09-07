using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Points : MonoBehaviour {


	private float currPoints;

	public float CurrPoints {
		get {
			return currPoints;
		}
		set { 
			currPoints = value;
		}
	}

	private static Points playerPoints;

	public static Points PlayerPoints {
		get {
			if (playerPoints == null) {
				playerPoints = GameObject.FindObjectOfType<Points> ();
			}
			return playerPoints;
		}
	}

	[SerializeField]
	private List<Sprite> txt = new List<Sprite>();

	[SerializeField]
	private Image digit1;

	[SerializeField]
	private Image digit2;

	// Use this for initialization
	void Start () {
		currPoints = 25;
	}
	
	// Update is called once per frame
	void LateUpdate () {
		CorrectDigits ();
	}

	private void CorrectDigits() {
		for (int i = 0; i < currPoints + 1; i++) {
			if (i == 1 && currPoints == i) {
				digit2.sprite = txt [i];
				digit1.sprite = txt [0];
			} else if (i % 10 != 0 && i < 10 && currPoints == i) {
				digit2.sprite = txt [i];
				digit1.sprite = txt [0];
			} else if (i == 10 && currPoints == i) {
				digit1.sprite = txt [1];
				digit2.sprite = txt [0];
			} else if (i % 10 != 0 && i < 20 && currPoints == i) {
				digit1.sprite = txt [1];
				int temp = i - 10;
				digit2.sprite = txt [temp];
			} else if (i == 20 && currPoints == i) {
				digit1.sprite = txt [2];
				digit2.sprite = txt [0];
			} else if (i % 10 != 0 && i > 20 && currPoints == i) {
				digit1.sprite = txt [2];
				int temp = i - 20;
				digit2.sprite = txt [temp];
			} else {
				digit1.sprite = txt [0];
				digit2.sprite = txt [0];
			}
		}
	}
}
