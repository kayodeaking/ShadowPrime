using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BarScript : MonoBehaviour {

	private float fillAmount;


	[SerializeField]
	private Image bar;

	[SerializeField]
	private Text valueText;

	[SerializeField]
	private float lerpSpeed;

	[SerializeField]
	private Color fullColor;
	[SerializeField]
	private Color lowColor;

	[SerializeField]
	private bool isVisible;

	[SerializeField]
	private bool lerpColors;
	public float Value {
		set {
			string[] tmp = valueText.text.Split (':');
			valueText.text = tmp[0] + ": " + value;
			fillAmount = Map (value, MaxVal);
		}
	}

	public float MaxVal { get; set; }

	// Use this for initialization
	void Start () {
	
		if (lerpColors) {
			bar.color = fullColor;	
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (isVisible) {
			this.gameObject.transform.parent.gameObject.SetActive(true);
			HandleBar ();
		} else {
			this.gameObject.transform.parent.gameObject.SetActive(false);
		}
	}

	private void HandleBar() {
		if (fillAmount != bar.fillAmount) {
			bar.fillAmount = Mathf.Lerp(bar.fillAmount, fillAmount, Time.deltaTime * lerpSpeed);
		}
		if (lerpColors) {
			bar.color = Color.Lerp (lowColor, fullColor, fillAmount);
		}
	}

	private float Map(float currHealth, float maxHealth) {

		return currHealth / maxHealth;
	}
}
