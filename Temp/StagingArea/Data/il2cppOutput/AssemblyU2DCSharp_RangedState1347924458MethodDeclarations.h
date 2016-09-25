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

// RangedState
struct RangedState_t1347924458;
// Enemy
struct Enemy_t67100520;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void RangedState::.ctor()
extern "C"  void RangedState__ctor_m2265731265 (RangedState_t1347924458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedState::Execute()
extern "C"  void RangedState_Execute_m2670716052 (RangedState_t1347924458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedState::Enter(Enemy)
extern "C"  void RangedState_Enter_m1335857139 (RangedState_t1347924458 * __this, Enemy_t67100520 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedState::Exit()
extern "C"  void RangedState_Exit_m750627329 (RangedState_t1347924458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedState::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void RangedState_OnTriggerEnter_m2249780933 (RangedState_t1347924458 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RangedState::ThrowRock()
extern "C"  void RangedState_ThrowRock_m2651889546 (RangedState_t1347924458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
