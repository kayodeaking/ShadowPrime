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

// Character
struct Character_t3568163593;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t1722545191;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void Character::.ctor()
extern "C"  void Character__ctor_m90739842 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Character::get_Attack()
extern "C"  bool Character_get_Attack_m4220907935 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::set_Attack(System.Boolean)
extern "C"  void Character_set_Attack_m790157438 (Character_t3568163593 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Character::get_TakingDamage()
extern "C"  bool Character_get_TakingDamage_m517649450 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::set_TakingDamage(System.Boolean)
extern "C"  void Character_set_TakingDamage_m987327945 (Character_t3568163593 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator Character::get_MyAni()
extern "C"  Animator_t2776330603 * Character_get_MyAni_m3047458150 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::set_MyAni(UnityEngine.Animator)
extern "C"  void Character_set_MyAni_m1795268981 (Character_t3568163593 * __this, Animator_t2776330603 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Character::get_StartPos()
extern "C"  Vector2_t4282066565  Character_get_StartPos_m4129870114 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::set_StartPos(UnityEngine.Vector2)
extern "C"  void Character_set_StartPos_m2029940361 (Character_t3568163593 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EdgeCollider2D Character::get_FistCollider()
extern "C"  EdgeCollider2D_t1722545191 * Character_get_FistCollider_m982941056 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Character::get_Respawn()
extern "C"  float Character_get_Respawn_m3835766955 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::Start()
extern "C"  void Character_Start_m3332844930 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::Update()
extern "C"  void Character_Update_m244829899 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::ChangeDirection()
extern "C"  void Character_ChangeDirection_m1857849551 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::ThrowRock(System.Int32)
extern "C"  void Character_ThrowRock_m2614097820 (Character_t3568163593 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::MeleeAttack()
extern "C"  void Character_MeleeAttack_m4131356732 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Character_OnTriggerEnter2D_m757113654 (Character_t3568163593 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
