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

// IdleState
struct IdleState_t3720050941;
// Enemy
struct Enemy_t67100520;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void IdleState::.ctor()
extern "C"  void IdleState__ctor_m3143330062 (IdleState_t3720050941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IdleState::Execute()
extern "C"  void IdleState_Execute_m4229569953 (IdleState_t3720050941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IdleState::Enter(Enemy)
extern "C"  void IdleState_Enter_m3966017478 (IdleState_t3720050941 * __this, Enemy_t67100520 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IdleState::Exit()
extern "C"  void IdleState_Exit_m1194578964 (IdleState_t3720050941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IdleState::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void IdleState_OnTriggerEnter_m74058968 (IdleState_t3720050941 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IdleState::Idle()
extern "C"  void IdleState_Idle_m1290700106 (IdleState_t3720050941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
