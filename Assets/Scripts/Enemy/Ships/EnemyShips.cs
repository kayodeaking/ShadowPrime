using UnityEngine;
using System.Collections;

public class EnemyShips : Ships {

	// Use this for initialization
	public override void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	#region implemented abstract members of Ships

	public override IEnumerator TakeDamage ()
	{
		throw new System.NotImplementedException ();
	}

	public override void Death ()
	{
		throw new System.NotImplementedException ();
	}

	public override bool IsDead {
		get {
			throw new System.NotImplementedException ();
		}
	}

	#endregion
}
