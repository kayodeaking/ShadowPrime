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

// Player
struct Player_t2393081601;
// DeadEventHandler
struct DeadEventHandler_t2277595636;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DeadEventHandler2277595636.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::add_Dead(DeadEventHandler)
extern "C"  void Player_add_Dead_m4075057688 (Player_t2393081601 * __this, DeadEventHandler_t2277595636 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::remove_Dead(DeadEventHandler)
extern "C"  void Player_remove_Dead_m1928722147 (Player_t2393081601 * __this, DeadEventHandler_t2277595636 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player Player::get_GamePlayer()
extern "C"  Player_t2393081601 * Player_get_GamePlayer_m321573410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Player::get_DodgeSpeed()
extern "C"  float Player_get_DodgeSpeed_m1382875599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Player::get_MyRigi()
extern "C"  Rigidbody2D_t1743771669 * Player_get_MyRigi_m1450144771 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_MyRigi(UnityEngine.Rigidbody2D)
extern "C"  void Player_set_MyRigi_m388844158 (Player_t2393081601 * __this, Rigidbody2D_t1743771669 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_Roll()
extern "C"  bool Player_get_Roll_m3509887684 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_Roll(System.Boolean)
extern "C"  void Player_set_Roll_m2310915323 (Player_t2393081601 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_Jump()
extern "C"  bool Player_get_Jump_m3286429237 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_Jump(System.Boolean)
extern "C"  void Player_set_Jump_m635877036 (Player_t2393081601 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_OnGround()
extern "C"  bool Player_get_OnGround_m1394692429 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_OnGround(System.Boolean)
extern "C"  void Player_set_OnGround_m1700655044 (Player_t2393081601 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_IsDead()
extern "C"  bool Player_get_IsDead_m1052485941 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::get_IsFalling()
extern "C"  bool Player_get_IsFalling_m815015672 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Player::get_Horizontal()
extern "C"  float Player_get_Horizontal_m1104136771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_Horizontal(System.Single)
extern "C"  void Player_set_Horizontal_m1968619424 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Player::get_Vertical()
extern "C"  float Player_get_Vertical_m4088334485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::set_Vertical(System.Single)
extern "C"  void Player_set_Vertical_m2448411790 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m4113811386 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C"  void Player_FixedUpdate_m1277925557 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnDead()
extern "C"  void Player_OnDead_m2719980333 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::HandleMovement(System.Single,System.Single)
extern "C"  void Player_HandleMovement_m17400687 (Player_t2393081601 * __this, float ___horiz0, float ___verti1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::HandleInput()
extern "C"  void Player_HandleInput_m1232326810 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Flip(System.Single)
extern "C"  void Player_Flip_m3607782036 (Player_t2393081601 * __this, float ___horiz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::IsGrounded()
extern "C"  bool Player_IsGrounded_m2842676462 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::HandleLayers()
extern "C"  void Player_HandleLayers_m2071141716 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ThrowRock(System.Int32)
extern "C"  void Player_ThrowRock_m118563284 (Player_t2393081601 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerEnter2D_m2063740926 (Player_t2393081601 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerStay2D_m2585822815 (Player_t2393081601 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::IndicateImmortalDamage()
extern "C"  Il2CppObject * Player_IndicateImmortalDamage_m2422396845 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::TakeDamage()
extern "C"  Il2CppObject * Player_TakeDamage_m2366979112 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Death()
extern "C"  void Player_Death_m3256768844 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Player_OnCollisionEnter2D_m260326948 (Player_t2393081601 * __this, Collision2D_t2859305914 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::RestoreMana()
extern "C"  void Player_RestoreMana_m2041283405 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
