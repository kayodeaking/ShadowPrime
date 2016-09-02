using UnityEngine;
using System.Collections;

public class IdleState : IEnemyState {
	
	#region IEnemyState implementation

	private Enemy enemy;
	private float idleTimer;
	private float idleDuration;

	public void Execute () {
		Idle ();

		if (enemy.Target != null) {
			enemy.ChangeState (new PatrolState ());
		}
	}

	public void Enter (Enemy enemy) {
		
		idleDuration = Random.Range (1, 10);
		this.enemy = enemy;
	}

	public void Exit () {

	}

	public void OnTriggerEnter (Collider2D other) {
	
		if (other.tag == "Rock") {
			enemy.Target = Player.GamePlayer.gameObject;
		}
	}

	private void Idle() {
		enemy.MyAni.SetFloat ("Speed", 0);

		idleTimer += Time.deltaTime;

		if (idleTimer >= idleDuration) {
			enemy.ChangeState (new PatrolState ());
		}
	}

	#endregion

}
