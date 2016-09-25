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

// PlayerShip
struct PlayerShip_t4089277661;
// DeadEventHandler
struct DeadEventHandler_t2277595636;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DeadEventHandler2277595636.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"

// System.Void PlayerShip::.ctor()
extern "C"  void PlayerShip__ctor_m1808684126 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::add_Dead(DeadEventHandler)
extern "C"  void PlayerShip_add_Dead_m3658777076 (PlayerShip_t4089277661 * __this, DeadEventHandler_t2277595636 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::remove_Dead(DeadEventHandler)
extern "C"  void PlayerShip_remove_Dead_m83593607 (PlayerShip_t4089277661 * __this, DeadEventHandler_t2277595636 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerShip PlayerShip::get_GameShip()
extern "C"  PlayerShip_t4089277661 * PlayerShip_get_GameShip_m1050958013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D PlayerShip::get_MyRigi()
extern "C"  Rigidbody2D_t1743771669 * PlayerShip_get_MyRigi_m1863243615 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::set_MyRigi(UnityEngine.Rigidbody2D)
extern "C"  void PlayerShip_set_MyRigi_m2193314338 (PlayerShip_t4089277661 * __this, Rigidbody2D_t1743771669 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerShip::get_IsDead()
extern "C"  bool PlayerShip_get_IsDead_m183431185 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerShip::get_Horizontal()
extern "C"  float PlayerShip_get_Horizontal_m817592095 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::set_Horizontal(System.Single)
extern "C"  void PlayerShip_set_Horizontal_m123490884 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerShip::get_Vertical()
extern "C"  float PlayerShip_get_Vertical_m1477983345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::set_Vertical(System.Single)
extern "C"  void PlayerShip_set_Vertical_m2428614706 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::Start()
extern "C"  void PlayerShip_Start_m755821918 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::Update()
extern "C"  void PlayerShip_Update_m1961495151 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::FixedUpdate()
extern "C"  void PlayerShip_FixedUpdate_m2807231321 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::OnDead()
extern "C"  void PlayerShip_OnDead_m1701521929 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::HandleMovement(System.Single,System.Single)
extern "C"  void PlayerShip_HandleMovement_m3648497427 (PlayerShip_t4089277661 * __this, float ___horiz0, float ___verti1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::HandleInput()
extern "C"  void PlayerShip_HandleInput_m2761632574 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::Flip(System.Single)
extern "C"  void PlayerShip_Flip_m3443798584 (PlayerShip_t4089277661 * __this, float ___verti0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerShip::IndicateImmortalDamage()
extern "C"  Il2CppObject * PlayerShip_IndicateImmortalDamage_m2430913161 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerShip::TakeDamage()
extern "C"  Il2CppObject * PlayerShip_TakeDamage_m3383204100 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::Death()
extern "C"  void PlayerShip_Death_m4193746672 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShip::RestoreMana()
extern "C"  void PlayerShip_RestoreMana_m3570589169 (PlayerShip_t4089277661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
