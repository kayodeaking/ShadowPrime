using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public abstract class Ships : MonoBehaviour {

	[SerializeField]
	protected Stat hp;

	[SerializeField]
	protected float speed;

	protected bool facingDown;

	[SerializeField]
	protected Transform blastPos;

	[SerializeField]
	protected GameObject blastPrefab1;
	[SerializeField]
	protected GameObject blastPrefab2;

	[SerializeField]
	private List<string> damageSources;

	public abstract bool IsDead{ get;}

	public bool Attack { get; set;}
	public bool TakingDamage{ get; set;}

	protected Vector2 startPos;

	[SerializeField]
	protected float respawnTimer;
	public float Respawn { 
		get { 
			return respawnTimer;
		}
	}
	// Use this for initialization
	public virtual void Start () {
		hp.Initialize ();
		facingDown = true;
		startPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public abstract IEnumerator TakeDamage ();
	public abstract void Death ();

	public virtual void ChangeDirection() {

		facingDown = !facingDown;
		transform.localScale = new Vector3 (1, transform.localScale.y * -1, 1);
	}

	public virtual void Blaster1() {

		if (facingDown) {
			GameObject temp = (GameObject)Instantiate (blastPrefab1, blastPos.position, Quaternion.identity);
			temp.GetComponent<Blast> ().Initialize (Vector2.down);
		} else {
			GameObject temp = (GameObject)Instantiate (blastPrefab1, blastPos.position, Quaternion.identity);
			temp.GetComponent<Blast> ().Initialize (Vector2.up);
		}
	}

	public virtual void Blaster2 () {

		if (facingDown) {
			GameObject temp = (GameObject)Instantiate (blastPrefab2, blastPos.position, Quaternion.identity);
			temp.GetComponent<Blast> ().Initialize (Vector2.down);
		} else {
			GameObject temp = (GameObject)Instantiate (blastPrefab2, blastPos.position, Quaternion.identity);
			temp.GetComponent<Blast> ().Initialize (Vector2.up);
		}
	}

	public virtual void OnTriggerEnter2D(Collider2D other) {
		if (damageSources.Contains(other.tag)) {
			StartCoroutine (TakeDamage ());
		}
	}
}
