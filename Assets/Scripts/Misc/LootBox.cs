using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LootBox : MonoBehaviour {

	public Animator ChestAni{ get; private set;}

	private static LootBox instance;

	public static LootBox Instance {
		get {
			if (instance == null) {
				instance = FindObjectOfType<LootBox> ();
			}
			return instance;
		}
	}

	private bool dropItem = true;

	// Use this for initialization
	void Start () {
	
		ChestAni = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void DropLoot() {
		if (dropItem) {
			GameObject hp = (GameObject)Instantiate (GameManager.Instance.HpPotPrefab, new Vector3 (transform.position.x, transform.position.y), Quaternion.identity);
			Physics2D.IgnoreCollision (hp.GetComponent<Collider2D> (), GetComponent<Collider2D> ());
			dropItem = false;
		}
	}
}
