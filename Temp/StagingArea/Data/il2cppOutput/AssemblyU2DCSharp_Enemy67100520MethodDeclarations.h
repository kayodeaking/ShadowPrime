#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Enemy
struct Enemy_t67100520;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// IEnemyState
struct IEnemyState_t1468682002;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m1781972739 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Enemy::get_Target()
extern "C"  GameObject_t3674682005 * Enemy_get_Target_m251196710 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_Target(UnityEngine.GameObject)
extern "C"  void Enemy_set_Target_m877486247 (Enemy_t67100520 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_InMeleeRange()
extern "C"  bool Enemy_get_InMeleeRange_m1291287908 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_InThrowRange()
extern "C"  bool Enemy_get_InThrowRange_m331038642 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_IsDead()
extern "C"  bool Enemy_get_IsDead_m1179672228 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Enemy Enemy::get_Instance()
extern "C"  Enemy_t67100520 * Enemy_get_Instance_m602890548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m729110531 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1133442154 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::RemoveTarget()
extern "C"  void Enemy_RemoveTarget_m3681127382 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::LookAtTarget()
extern "C"  void Enemy_LookAtTarget_m3119753348 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::ChangeState(IEnemyState)
extern "C"  void Enemy_ChangeState_m3380531006 (Enemy_t67100520 * __this, Il2CppObject * ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Move()
extern "C"  void Enemy_Move_m679021938 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Enemy::GetDirection()
extern "C"  Vector2_t4282066565  Enemy_GetDirection_m2459667951 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::ChangeDirection()
extern "C"  void Enemy_ChangeDirection_m916211216 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Enemy_OnTriggerEnter2D_m490835157 (Enemy_t67100520 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Enemy::TakeDamage()
extern "C"  Il2CppObject * Enemy_TakeDamage_m1970533359 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Death()
extern "C"  void Enemy_Death_m4167035285 (Enemy_t67100520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
