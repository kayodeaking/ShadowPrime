#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stat
struct Stat_t2587252;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ships
struct  Ships_t79854999  : public MonoBehaviour_t667441552
{
public:
	// Stat Ships::hp
	Stat_t2587252 * ___hp_2;
	// System.Single Ships::speed
	float ___speed_3;
	// System.Boolean Ships::facingDown
	bool ___facingDown_4;
	// UnityEngine.Transform Ships::blastPos
	Transform_t1659122786 * ___blastPos_5;
	// UnityEngine.GameObject Ships::blastPrefab1
	GameObject_t3674682005 * ___blastPrefab1_6;
	// UnityEngine.GameObject Ships::blastPrefab2
	GameObject_t3674682005 * ___blastPrefab2_7;
	// System.Collections.Generic.List`1<System.String> Ships::damageSources
	List_1_t1375417109 * ___damageSources_8;
	// UnityEngine.Vector2 Ships::startPos
	Vector2_t4282066565  ___startPos_9;
	// System.Single Ships::respawnTimer
	float ___respawnTimer_10;
	// System.Boolean Ships::<Attack>k__BackingField
	bool ___U3CAttackU3Ek__BackingField_11;
	// System.Boolean Ships::<TakingDamage>k__BackingField
	bool ___U3CTakingDamageU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_hp_2() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___hp_2)); }
	inline Stat_t2587252 * get_hp_2() const { return ___hp_2; }
	inline Stat_t2587252 ** get_address_of_hp_2() { return &___hp_2; }
	inline void set_hp_2(Stat_t2587252 * value)
	{
		___hp_2 = value;
		Il2CppCodeGenWriteBarrier(&___hp_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_facingDown_4() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___facingDown_4)); }
	inline bool get_facingDown_4() const { return ___facingDown_4; }
	inline bool* get_address_of_facingDown_4() { return &___facingDown_4; }
	inline void set_facingDown_4(bool value)
	{
		___facingDown_4 = value;
	}

	inline static int32_t get_offset_of_blastPos_5() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___blastPos_5)); }
	inline Transform_t1659122786 * get_blastPos_5() const { return ___blastPos_5; }
	inline Transform_t1659122786 ** get_address_of_blastPos_5() { return &___blastPos_5; }
	inline void set_blastPos_5(Transform_t1659122786 * value)
	{
		___blastPos_5 = value;
		Il2CppCodeGenWriteBarrier(&___blastPos_5, value);
	}

	inline static int32_t get_offset_of_blastPrefab1_6() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___blastPrefab1_6)); }
	inline GameObject_t3674682005 * get_blastPrefab1_6() const { return ___blastPrefab1_6; }
	inline GameObject_t3674682005 ** get_address_of_blastPrefab1_6() { return &___blastPrefab1_6; }
	inline void set_blastPrefab1_6(GameObject_t3674682005 * value)
	{
		___blastPrefab1_6 = value;
		Il2CppCodeGenWriteBarrier(&___blastPrefab1_6, value);
	}

	inline static int32_t get_offset_of_blastPrefab2_7() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___blastPrefab2_7)); }
	inline GameObject_t3674682005 * get_blastPrefab2_7() const { return ___blastPrefab2_7; }
	inline GameObject_t3674682005 ** get_address_of_blastPrefab2_7() { return &___blastPrefab2_7; }
	inline void set_blastPrefab2_7(GameObject_t3674682005 * value)
	{
		___blastPrefab2_7 = value;
		Il2CppCodeGenWriteBarrier(&___blastPrefab2_7, value);
	}

	inline static int32_t get_offset_of_damageSources_8() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___damageSources_8)); }
	inline List_1_t1375417109 * get_damageSources_8() const { return ___damageSources_8; }
	inline List_1_t1375417109 ** get_address_of_damageSources_8() { return &___damageSources_8; }
	inline void set_damageSources_8(List_1_t1375417109 * value)
	{
		___damageSources_8 = value;
		Il2CppCodeGenWriteBarrier(&___damageSources_8, value);
	}

	inline static int32_t get_offset_of_startPos_9() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___startPos_9)); }
	inline Vector2_t4282066565  get_startPos_9() const { return ___startPos_9; }
	inline Vector2_t4282066565 * get_address_of_startPos_9() { return &___startPos_9; }
	inline void set_startPos_9(Vector2_t4282066565  value)
	{
		___startPos_9 = value;
	}

	inline static int32_t get_offset_of_respawnTimer_10() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___respawnTimer_10)); }
	inline float get_respawnTimer_10() const { return ___respawnTimer_10; }
	inline float* get_address_of_respawnTimer_10() { return &___respawnTimer_10; }
	inline void set_respawnTimer_10(float value)
	{
		___respawnTimer_10 = value;
	}

	inline static int32_t get_offset_of_U3CAttackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___U3CAttackU3Ek__BackingField_11)); }
	inline bool get_U3CAttackU3Ek__BackingField_11() const { return ___U3CAttackU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CAttackU3Ek__BackingField_11() { return &___U3CAttackU3Ek__BackingField_11; }
	inline void set_U3CAttackU3Ek__BackingField_11(bool value)
	{
		___U3CAttackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTakingDamageU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Ships_t79854999, ___U3CTakingDamageU3Ek__BackingField_12)); }
	inline bool get_U3CTakingDamageU3Ek__BackingField_12() const { return ___U3CTakingDamageU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CTakingDamageU3Ek__BackingField_12() { return &___U3CTakingDamageU3Ek__BackingField_12; }
	inline void set_U3CTakingDamageU3Ek__BackingField_12(bool value)
	{
		___U3CTakingDamageU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
