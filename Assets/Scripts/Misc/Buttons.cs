using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class Buttons : MonoBehaviour {

	[SerializeField]
	private GameObject errorPanel;

	[SerializeField]
	private Text errorText;

	private string errorMess = "It seems this button isn't implemented yet. Try a different button.";
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void NGButtonClick () {
		SceneManager.LoadScene ("DreamSpace");
	}

	public void ContiButtonClick () {
		errorPanel.SetActive (true);
		errorText.text = errorMess;
	}

	public void CFButtonClick () {
		errorPanel.SetActive (true);
		errorText.text = errorMess;
	}

	public void MultiButtonClick () {
		errorPanel.SetActive (true);
		errorText.text = errorMess;
	}

	public void HOButtonClick () {
		errorPanel.SetActive (true);
		errorText.text = errorMess;
	}

	public void QuitButtonClick () {
		errorPanel.SetActive (true);
		errorText.text = errorMess;
	}

	public void CloseErrorButtonClick () {
		errorPanel.SetActive (false);
	}
}
