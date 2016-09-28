using UnityEngine;
using UnityEngine.SceneManagement;
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

	[SerializeField]
	private List<string> doorNames;

	[SerializeField]
	private GameObject player;

	[SerializeField]
	private GameObject hud;

	[SerializeField]
	private GameObject cam;
	[SerializeField]
	private GameObject manager;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}



	public void Switch(string name) {
		string roomLeft;
		if (doorNames.Contains (name)) {
			roomLeft = SceneManager.GetActiveScene ().name;
			SwitchDreamSapce (name, roomLeft);
			SwitchAngkor (name, roomLeft);
			SceneManager.LoadScene (name);
			Player.GamePlayer.StartPos = player.transform.localPosition;
			Object.DontDestroyOnLoad (manager);
			Object.DontDestroyOnLoad (player);
			Object.DontDestroyOnLoad (hud);
			Object.DontDestroyOnLoad (cam);

		}
	}

	public void SwitchDreamSapce (string name, string roomLeft){
		if ((roomLeft == "Dream_Space_1" && name == "Dream_Space_2") || (roomLeft == "Dream_Space_2" && name == "Dream_Space_3")
		    || (roomLeft == "Dream_Space_3" && name == "Dream_Space_4") || (roomLeft == "Dream_Space_4" && name == "Dream_Space_5")) {
			player.transform.localPosition = new Vector3 (-3.146f, -1.778f, 0);
		} else if ((roomLeft == "Dream_Space_5" && name == "Dream_Space_4") || (roomLeft == "Dream_Space_4" && name == "Dream_Space_3")
		    || (roomLeft == "Dream_Space_3" && name == "Dream_Space_2") || (roomLeft == "Dream_Space_2" && name == "Dream_Space_1")) {
			player.transform.localPosition = new Vector3 (3.146f, -1.778f, 0);
		}
	}

	public void SwitchAngkor(string name, string roomLeft) {
		//place user at the door of the room they left
		if ((roomLeft == "[Street Name]00" && name == "[Street Name]01") || (roomLeft == "[Street Name]01" && name == "[Street Name]02")
			|| (roomLeft == "[Street Name]02" && name == "[Street Name]03") || (roomLeft == "[Street Name]03" && name == "[Street Name]04")
			|| (roomLeft == "[Street Name]04" && name == "[Street Name]05") || (roomLeft == "[Street Name]05" && name == "[Street Name]06")
			|| (roomLeft == "[Street Name]06" && name == "[Street Name]07") || (roomLeft == "[Street Name]07" && name == "[Street Name]08")
			|| (roomLeft == "[Street Name]08" && name == "[Street Name]09") || (roomLeft == "[Street Name]09" && name == "[Street Name]00")) {
			//Puts user on the Left
			player.transform.localPosition = new Vector3 (-11.4f, -3.9f, 0);
		} else if ((roomLeft == "[Street Name]00" && name == "[Street Name]09") || (roomLeft == "[Street Name]09" && name == "[Street Name]08")
			|| (roomLeft == "[Street Name]08" && name == "[Street Name]07") || (roomLeft == "[Street Name]07" && name == "[Street Name]06")
			|| (roomLeft == "[Street Name]06" && name == "[Street Name]05") || (roomLeft == "[Street Name]05" && name == "[Street Name]04")
			|| (roomLeft == "[Street Name]04" && name == "[Street Name]03") || (roomLeft == "[Street Name]03" && name == "[Street Name]02")
			|| (roomLeft == "[Street Name]02" && name == "[Street Name]01") || (roomLeft == "[Street Name]01" && name == "[Street Name]00")) {
			//Puts user on the Right
			player.transform.localPosition = new Vector3 (27.6f, -3.9f, 0);
		} else if (roomLeft == "[Street Name]00" && name == "House") {
			player.transform.localPosition = new Vector3 (5.49f, .74f, 0);
		} else if (roomLeft == "House" && name == "[Street Name]00") {
			player.transform.localPosition = new Vector3 (-3.71f, 3.39f, 0);
		} else if (roomLeft == "Dream_Space_5" && name == "House") {
			player.transform.localPosition = new Vector3 (-4.64f, 0.74f, 0);
		} else if (roomLeft == "[Street Name]00" && name == "Market") {
			player.transform.localPosition = new Vector3 (-4.64f, 0.74f, 0);
		} else if (roomLeft == "Market" && name == "[Street Name]00") {
			player.transform.localPosition = new Vector3 (-15.8f, 3.38f, 0);
		}
	}
}
