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

// MeleeState
struct MeleeState_t1544317853;
// Enemy
struct Enemy_t67100520;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void MeleeState::.ctor()
extern "C"  void MeleeState__ctor_m2425482654 (MeleeState_t1544317853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeleeState::Execute()
extern "C"  void MeleeState_Execute_m1572978225 (MeleeState_t1544317853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeleeState::Enter(Enemy)
extern "C"  void MeleeState_Enter_m509244726 (MeleeState_t1544317853 * __this, Enemy_t67100520 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeleeState::Exit()
extern "C"  void MeleeState_Exit_m1171422596 (MeleeState_t1544317853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeleeState::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void MeleeState_OnTriggerEnter_m2223437384 (MeleeState_t1544317853 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MeleeState::Attack()
extern "C"  void MeleeState_Attack_m3118525166 (MeleeState_t1544317853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
