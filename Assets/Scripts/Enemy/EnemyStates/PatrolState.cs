using UnityEngine;
using System.Collections;

public class PatrolState : IEnemyState {

	#region IEnemyState implementation

	private Enemy enemy;
	private float patrolTimer;
	private float patrolDuration;

	public void Execute () {
		Patrol ();

		enemy.Move ();
		if (enemy.Target != null && enemy.InThrowRange) {
			enemy.ChangeState (new RangedState ());
		}
	}

	public void Enter (Enemy enemy) {
		patrolDuration = Random.Range (1, 10);
		this.enemy = enemy;
	}

	public void Exit () {
	
	}

	public void OnTriggerEnter (Collider2D other) {
	
		if (other.tag == "Rock") {
			enemy.Target = Player.GamePlayer.gameObject;
		}
	}

	private void Patrol() {

		patrolTimer += Time.deltaTime;

		if (patrolTimer >= patrolDuration) {
			enemy.ChangeState (new IdleState ());
		}
	}

	#endregion

}
