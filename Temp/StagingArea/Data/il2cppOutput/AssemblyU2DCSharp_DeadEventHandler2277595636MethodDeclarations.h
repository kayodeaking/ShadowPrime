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

// DeadEventHandler
struct DeadEventHandler_t2277595636;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void DeadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DeadEventHandler__ctor_m2052201627 (DeadEventHandler_t2277595636 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadEventHandler::Invoke()
extern "C"  void DeadEventHandler_Invoke_m1459344565 (DeadEventHandler_t2277595636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DeadEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeadEventHandler_BeginInvoke_m1104361134 (DeadEventHandler_t2277595636 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DeadEventHandler_EndInvoke_m3779728427 (DeadEventHandler_t2277595636 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
