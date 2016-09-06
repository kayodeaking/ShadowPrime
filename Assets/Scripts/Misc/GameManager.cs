using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {

	private static GameManager instance;

	[SerializeField]
	private GameObject coinPrefab;
	[SerializeField]
	private GameObject hpPotPrefab;

	[SerializeField]
	private Text coinTxt;

	private int collectedCoins;

	public static GameManager Instance {
		get {
			if (instance == null) {
				instance = FindObjectOfType<GameManager> ();
			}
			return instance;
		}
	}

	public GameObject CoinPrefab {
		get {
			return coinPrefab;
		}
	}

	public GameObject HpPotPrefab {
		get {
			return hpPotPrefab;
		}
	}

	public int CollectedCoins {
		get {
			return collectedCoins;
		}
		set {
			coinTxt.text = value.ToString ();
			this.collectedCoins = value;
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void RestoreHealth () {
	}
}
