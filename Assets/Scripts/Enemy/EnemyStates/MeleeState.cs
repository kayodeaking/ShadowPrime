﻿using UnityEngine;
using System.Collections;

public class MeleeState : IEnemyState {
	#region IEnemyState implementation


	private Enemy enemy;
	private float attackTimer;
	private float attackCoolDown = 3f;
	private bool canAttack = true;


	public void Execute () {
		Attack ();
		if (enemy.InThrowRange && !enemy.InMeleeRange) {
			enemy.ChangeState (new RangedState ());
		} else if (enemy.Target == null) {
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

	private void Attack() {

		attackTimer += Time.deltaTime;

		if (attackTimer > attackCoolDown) {
			canAttack = true;
			attackTimer = 0;
		}

		if (canAttack) {
			canAttack = false;
			enemy.MyAni.SetTrigger ("Attack");
		}
	}

	#endregion

}