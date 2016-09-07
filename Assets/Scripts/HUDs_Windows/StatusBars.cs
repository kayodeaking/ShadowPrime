using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class StatusBars : MonoBehaviour {

	private float fillAmount = 1;
	private float revFillAmount = 0;

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

	private bool reset = false;

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

		if (!reset) {
			for (int i = 0; i < bars.Count; i++) {
				if (bars [i].fillAmount != fillAmount) {
					currBar = bars [i];
					return;
				}
			}
		} else {
			for (int i = 0; i < bars.Count; i++) {
				if (bars [i].fillAmount != revFillAmount) {
					currBar = bars [i];
					return;
				}
			}
		}
	}

	private void CheckNum() {
		if (!reset) {
			for (int i = 0; i < att; i++) {
				amount.sprite = txt [i + 1];
			}

			for (int i = 0; i < mag; i++) {
				amount.sprite = txt [i + 1];
			}


			for (int i = 0; i < def; i++) {
				amount.sprite = txt [i + 1];
			}
		} else {
			amount.sprite = txt [0];
		}
	}

	public void AttackIncrease () {
		if (att < 9 && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			att += 1;
			Points.PlayerPoints.CurrPoints -= 1;
		}
	}

	public void MagicIncrease() {
		if (mag < 9  && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			mag += 1;
			Points.PlayerPoints.CurrPoints -= 1;
		}
	}

	public void DefenseIncrease() {
		if (def < 9  && Points.PlayerPoints.CurrPoints > 0) {
			currBar.fillAmount = fillAmount;
			def += 1;
			Points.PlayerPoints.CurrPoints -= 1;
		}
	}

	public void AttackReset() {

		Debug.Log (Att);
		PointReset ();
		reset = true;
		if (att > 0) {
			for (int i = 0; i < Att; i++) {
				CheckBar ();
				currBar.fillAmount = revFillAmount;
				CheckNum ();
			}
		}
		att = att - att;
		reset = false;
	}

	public void MagicReset () {
		PointReset ();
		reset = true;
		if (mag > 0) {
			for (int i = 0; i < Mag; i++) {
				CheckBar ();
				currBar.fillAmount = revFillAmount;
				CheckNum ();
			}
		}
		mag = mag - mag;
		reset = false;
	}

	public void DefenseReset() {
		PointReset ();
		reset = true;
		if (def > 0) {
			for (int i = 0; i < Def; i++) {
				CheckBar ();
				currBar.fillAmount = revFillAmount;
				CheckNum ();
			}
		}
		def = def - def;
		reset = false;
	}

	private void PointReset() {
		if (Att != 0) {
			Points.PlayerPoints.CurrPoints = this.Att;
		} else if (Mag != 0) {
			Points.PlayerPoints.CurrPoints += this.Mag;
		} else if (Def != 0) {
			Points.PlayerPoints.CurrPoints += this.Def;
		}
	}
}
