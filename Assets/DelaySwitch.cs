using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class DelaySwitch : MonoBehaviour {

	[SerializeField]
	private GameObject player;

	[SerializeField]
	private GameObject hud;

	[SerializeField]
	private GameObject cam;
	[SerializeField]
	private GameObject manager;

	private float countDown = 5;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void LateUpdate () {
		countDown -= .5f;
		if (countDown <= 0) {
			player.SetActive (true);
			hud.SetActive (true);
			cam.SetActive (true);
			manager.SetActive (true);
			SceneManager.LoadScene ("Dream_Space_1");
			Object.DontDestroyOnLoad (manager);
			Object.DontDestroyOnLoad (player);
			Object.DontDestroyOnLoad (hud);
			Object.DontDestroyOnLoad (cam);
		}
		
	}
}
