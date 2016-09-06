using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class StatusBars : MonoBehaviour {

	private float fillAmount = 1;

	private List<Image> bars = new List<Image>();

	[SerializeField]
	private Transform status;

	private float att;
	private float mag;
	private float def;

	public float Att {
		get {
			return att;
		}
	}

	public float Mag {
		get {
			return mag;
		}
	}

	public float Def {
		get {
			return def;
		}
	}
	private Image currBar;

	[SerializeField]
	private Image amount;

	[SerializeField]
	private List<Sprite> txt = new List<Sprite>();

	void Awake() {
		PopulateList ();
		currBar = bars [0];
		amount.sprite = txt [0];
	}

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void LateUpdate() {
		CheckBar ();
		CheckNum ();
	}

	void PopulateList() {
		int count = transform.childCount;
		for (int i = 0; i < count; i++) {
			bars.Add(status.GetChild (i).transform.GetChild(0).GetComponent<Image>());
		}
	}

	private void CheckBar() {
		for (int i = 0; i < bars.Count; i++) {
			if (bars [i].fillAmount != fillAmount) {
				currBar = bars [i];
				return;
			}
		}
	}

	private void CheckNum() {
		for (int i = 0; i < att; i++) {
			amount.sprite = txt [i + 1];
		}

		for (int i = 0; i < mag; i++) {
			amount.sprite = txt [i + 1];
		}


		for (int i = 0; i < def; i++) {
			amount.sprite = txt [i + 1];
		}
	}
		
	public void AttackIncrease () {
		if (att < 9 && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			att += 1;
			Points.PlayerPoints.CurrPoints -= 1;
			Debug.Log (Points.PlayerPoints.CurrPoints);
		}
	}

	public void MagicIncrease() {
		if (mag < 9  && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			mag += 1;
			Points.PlayerPoints.CurrPoints -= 1;
			Debug.Log (Points.PlayerPoints.CurrPoints);
		}
	}

	public void DefenseIncrease() {
		if (def < 9  && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			def += 1;
			Points.PlayerPoints.CurrPoints -= 1;
			Debug.Log (Points.PlayerPoints.CurrPoints);
		}
	}
}
