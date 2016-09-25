#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameManager::coinPrefab
	GameObject_t3674682005 * ___coinPrefab_3;
	// UnityEngine.GameObject GameManager::hpPotPrefab
	GameObject_t3674682005 * ___hpPotPrefab_4;
	// UnityEngine.UI.Text GameManager::coinTxt
	Text_t9039225 * ___coinTxt_5;
	// System.Int32 GameManager::collectedCoins
	int32_t ___collectedCoins_6;
	// System.Collections.Generic.List`1<System.String> GameManager::doorNames
	List_1_t1375417109 * ___doorNames_7;
	// UnityEngine.GameObject GameManager::player
	GameObject_t3674682005 * ___player_8;
	// UnityEngine.GameObject GameManager::hud
	GameObject_t3674682005 * ___hud_9;
	// UnityEngine.GameObject GameManager::cam
	GameObject_t3674682005 * ___cam_10;
	// UnityEngine.GameObject GameManager::manager
	GameObject_t3674682005 * ___manager_11;

public:
	inline static int32_t get_offset_of_coinPrefab_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___coinPrefab_3)); }
	inline GameObject_t3674682005 * get_coinPrefab_3() const { return ___coinPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_coinPrefab_3() { return &___coinPrefab_3; }
	inline void set_coinPrefab_3(GameObject_t3674682005 * value)
	{
		___coinPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___coinPrefab_3, value);
	}

	inline static int32_t get_offset_of_hpPotPrefab_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___hpPotPrefab_4)); }
	inline GameObject_t3674682005 * get_hpPotPrefab_4() const { return ___hpPotPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_hpPotPrefab_4() { return &___hpPotPrefab_4; }
	inline void set_hpPotPrefab_4(GameObject_t3674682005 * value)
	{
		___hpPotPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___hpPotPrefab_4, value);
	}

	inline static int32_t get_offset_of_coinTxt_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___coinTxt_5)); }
	inline Text_t9039225 * get_coinTxt_5() const { return ___coinTxt_5; }
	inline Text_t9039225 ** get_address_of_coinTxt_5() { return &___coinTxt_5; }
	inline void set_coinTxt_5(Text_t9039225 * value)
	{
		___coinTxt_5 = value;
		Il2CppCodeGenWriteBarrier(&___coinTxt_5, value);
	}

	inline static int32_t get_offset_of_collectedCoins_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___collectedCoins_6)); }
	inline int32_t get_collectedCoins_6() const { return ___collectedCoins_6; }
	inline int32_t* get_address_of_collectedCoins_6() { return &___collectedCoins_6; }
	inline void set_collectedCoins_6(int32_t value)
	{
		___collectedCoins_6 = value;
	}

	inline static int32_t get_offset_of_doorNames_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___doorNames_7)); }
	inline List_1_t1375417109 * get_doorNames_7() const { return ___doorNames_7; }
	inline List_1_t1375417109 ** get_address_of_doorNames_7() { return &___doorNames_7; }
	inline void set_doorNames_7(List_1_t1375417109 * value)
	{
		___doorNames_7 = value;
		Il2CppCodeGenWriteBarrier(&___doorNames_7, value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___player_8)); }
	inline GameObject_t3674682005 * get_player_8() const { return ___player_8; }
	inline GameObject_t3674682005 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t3674682005 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_hud_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___hud_9)); }
	inline GameObject_t3674682005 * get_hud_9() const { return ___hud_9; }
	inline GameObject_t3674682005 ** get_address_of_hud_9() { return &___hud_9; }
	inline void set_hud_9(GameObject_t3674682005 * value)
	{
		___hud_9 = value;
		Il2CppCodeGenWriteBarrier(&___hud_9, value);
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___cam_10)); }
	inline GameObject_t3674682005 * get_cam_10() const { return ___cam_10; }
	inline GameObject_t3674682005 ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(GameObject_t3674682005 * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier(&___cam_10, value);
	}

	inline static int32_t get_offset_of_manager_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___manager_11)); }
	inline GameObject_t3674682005 * get_manager_11() const { return ___manager_11; }
	inline GameObject_t3674682005 ** get_address_of_manager_11() { return &___manager_11; }
	inline void set_manager_11(GameObject_t3674682005 * value)
	{
		___manager_11 = value;
		Il2CppCodeGenWriteBarrier(&___manager_11, value);
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2369589051 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___instance_2)); }
	inline GameManager_t2369589051 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t2369589051 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t2369589051 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
