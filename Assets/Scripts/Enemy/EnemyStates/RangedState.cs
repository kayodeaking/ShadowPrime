using UnityEngine;
using System.Collections;

public class RangedState : IEnemyState {

	#region IEnemyState implementation
	private Enemy enemy;
	private float throwTimer;
	private float throwCoolDown = 3f;
	private bool canThrow = true;

	public void Execute () {

		ThrowRock ();
		if (enemy.InMeleeRange) {
			enemy.ChangeState(new MeleeState());
		}
		if (enemy.Target != null) {
			enemy.Move ();
		} else {
			enemy.ChangeState (new IdleState ());
		}
	}

	public void Enter (Enemy enemy) {
		this.enemy = enemy;
	}

	public void Exit () {

	}

	public void OnTriggerEnter (Collider2D other) {

	}

	private void ThrowRock () {
		
		throwTimer += Time.deltaTime;

		if (throwTimer > throwCoolDown) {
			canThrow = true;
			throwTimer = 0;
		}

		if (canThrow) {
			canThrow = false;
			enemy.MyAni.SetTrigger ("Throw");
		}
	}

	#endregion

}
