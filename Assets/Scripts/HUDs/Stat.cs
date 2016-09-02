using UnityEngine;
using System;
using System.Collections;

[Serializable]
public class Stat {

	[SerializeField]
	private BarScript bar;

	[SerializeField]
	private float maxVal;

	[SerializeField]
	private float currVal;

	public float CurrVal {
		get {
			return currVal;
		}
		set {
			this.currVal = Mathf.Clamp (value, 0, MaxVal);
			bar.Value = currVal;
		}
	}

	public float MaxVal {
		get{ 
			return maxVal;
		}
		set{ 
			this.maxVal = value;
			bar.MaxVal = maxVal;
		}
	}

	public void Initialize() {
		this.CurrVal = currVal;
		this.MaxVal = maxVal;
	}
}
