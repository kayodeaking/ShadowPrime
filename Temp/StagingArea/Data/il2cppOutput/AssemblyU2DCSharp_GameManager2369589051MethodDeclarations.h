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

// GameManager
struct GameManager_t2369589051;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_Instance()
extern "C"  GameManager_t2369589051 * GameManager_get_Instance_m4109253338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameManager::get_CoinPrefab()
extern "C"  GameObject_t3674682005 * GameManager_get_CoinPrefab_m291557085 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameManager::get_HpPotPrefab()
extern "C"  GameObject_t3674682005 * GameManager_get_HpPotPrefab_m4041767435 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::get_CollectedCoins()
extern "C"  int32_t GameManager_get_CollectedCoins_m2430811368 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_CollectedCoins(System.Int32)
extern "C"  void GameManager_set_CollectedCoins_m1531049979 (GameManager_t2369589051 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Switch(System.String)
extern "C"  void GameManager_Switch_m794954202 (GameManager_t2369589051 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
