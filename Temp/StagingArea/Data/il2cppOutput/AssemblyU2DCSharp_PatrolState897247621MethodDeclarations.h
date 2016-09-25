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

// PatrolState
struct PatrolState_t897247621;
// Enemy
struct Enemy_t67100520;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void PatrolState::.ctor()
extern "C"  void PatrolState__ctor_m1762555782 (PatrolState_t897247621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatrolState::Execute()
extern "C"  void PatrolState_Execute_m155414041 (PatrolState_t897247621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatrolState::Enter(Enemy)
extern "C"  void PatrolState_Enter_m2268060750 (PatrolState_t897247621 * __this, Enemy_t67100520 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatrolState::Exit()
extern "C"  void PatrolState_Exit_m3089700508 (PatrolState_t897247621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatrolState::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void PatrolState_OnTriggerEnter_m3664981856 (PatrolState_t897247621 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PatrolState::Patrol()
extern "C"  void PatrolState_Patrol_m453370122 (PatrolState_t897247621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
