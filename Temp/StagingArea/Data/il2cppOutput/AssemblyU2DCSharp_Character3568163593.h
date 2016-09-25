#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Stat
struct Stat_t2587252;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t1722545191;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Character
struct  Character_t3568163593  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Character::rockPos
	Transform_t1659122786 * ___rockPos_2;
	// System.Single Character::speed
	float ___speed_3;
	// System.Boolean Character::facingRight
	bool ___facingRight_4;
	// UnityEngine.GameObject Character::rockPrefab
	GameObject_t3674682005 * ___rockPrefab_5;
	// Stat Character::hp
	Stat_t2587252 * ___hp_6;
	// UnityEngine.EdgeCollider2D Character::fistCollider
	EdgeCollider2D_t1722545191 * ___fistCollider_7;
	// System.Collections.Generic.List`1<System.String> Character::damageSources
	List_1_t1375417109 * ___damageSources_8;
	// UnityEngine.Vector2 Character::startPos
	Vector2_t4282066565  ___startPos_9;
	// System.Single Character::respawnTimer
	float ___respawnTimer_10;
	// System.Boolean Character::<Attack>k__BackingField
	bool ___U3CAttackU3Ek__BackingField_11;
	// System.Boolean Character::<TakingDamage>k__BackingField
	bool ___U3CTakingDamageU3Ek__BackingField_12;
	// UnityEngine.Animator Character::<MyAni>k__BackingField
	Animator_t2776330603 * ___U3CMyAniU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_rockPos_2() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___rockPos_2)); }
	inline Transform_t1659122786 * get_rockPos_2() const { return ___rockPos_2; }
	inline Transform_t1659122786 ** get_address_of_rockPos_2() { return &___rockPos_2; }
	inline void set_rockPos_2(Transform_t1659122786 * value)
	{
		___rockPos_2 = value;
		Il2CppCodeGenWriteBarrier(&___rockPos_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_facingRight_4() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___facingRight_4)); }
	inline bool get_facingRight_4() const { return ___facingRight_4; }
	inline bool* get_address_of_facingRight_4() { return &___facingRight_4; }
	inline void set_facingRight_4(bool value)
	{
		___facingRight_4 = value;
	}

	inline static int32_t get_offset_of_rockPrefab_5() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___rockPrefab_5)); }
	inline GameObject_t3674682005 * get_rockPrefab_5() const { return ___rockPrefab_5; }
	inline GameObject_t3674682005 ** get_address_of_rockPrefab_5() { return &___rockPrefab_5; }
	inline void set_rockPrefab_5(GameObject_t3674682005 * value)
	{
		___rockPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___rockPrefab_5, value);
	}

	inline static int32_t get_offset_of_hp_6() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___hp_6)); }
	inline Stat_t2587252 * get_hp_6() const { return ___hp_6; }
	inline Stat_t2587252 ** get_address_of_hp_6() { return &___hp_6; }
	inline void set_hp_6(Stat_t2587252 * value)
	{
		___hp_6 = value;
		Il2CppCodeGenWriteBarrier(&___hp_6, value);
	}

	inline static int32_t get_offset_of_fistCollider_7() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___fistCollider_7)); }
	inline EdgeCollider2D_t1722545191 * get_fistCollider_7() const { return ___fistCollider_7; }
	inline EdgeCollider2D_t1722545191 ** get_address_of_fistCollider_7() { return &___fistCollider_7; }
	inline void set_fistCollider_7(EdgeCollider2D_t1722545191 * value)
	{
		___fistCollider_7 = value;
		Il2CppCodeGenWriteBarrier(&___fistCollider_7, value);
	}

	inline static int32_t get_offset_of_damageSources_8() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___damageSources_8)); }
	inline List_1_t1375417109 * get_damageSources_8() const { return ___damageSources_8; }
	inline List_1_t1375417109 ** get_address_of_damageSources_8() { return &___damageSources_8; }
	inline void set_damageSources_8(List_1_t1375417109 * value)
	{
		___damageSources_8 = value;
		Il2CppCodeGenWriteBarrier(&___damageSources_8, value);
	}

	inline static int32_t get_offset_of_startPos_9() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___startPos_9)); }
	inline Vector2_t4282066565  get_startPos_9() const { return ___startPos_9; }
	inline Vector2_t4282066565 * get_address_of_startPos_9() { return &___startPos_9; }
	inline void set_startPos_9(Vector2_t4282066565  value)
	{
		___startPos_9 = value;
	}

	inline static int32_t get_offset_of_respawnTimer_10() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___respawnTimer_10)); }
	inline float get_respawnTimer_10() const { return ___respawnTimer_10; }
	inline float* get_address_of_respawnTimer_10() { return &___respawnTimer_10; }
	inline void set_respawnTimer_10(float value)
	{
		___respawnTimer_10 = value;
	}

	inline static int32_t get_offset_of_U3CAttackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___U3CAttackU3Ek__BackingField_11)); }
	inline bool get_U3CAttackU3Ek__BackingField_11() const { return ___U3CAttackU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CAttackU3Ek__BackingField_11() { return &___U3CAttackU3Ek__BackingField_11; }
	inline void set_U3CAttackU3Ek__BackingField_11(bool value)
	{
		___U3CAttackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTakingDamageU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___U3CTakingDamageU3Ek__BackingField_12)); }
	inline bool get_U3CTakingDamageU3Ek__BackingField_12() const { return ___U3CTakingDamageU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CTakingDamageU3Ek__BackingField_12() { return &___U3CTakingDamageU3Ek__BackingField_12; }
	inline void set_U3CTakingDamageU3Ek__BackingField_12(bool value)
	{
		___U3CTakingDamageU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMyAniU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___U3CMyAniU3Ek__BackingField_13)); }
	inline Animator_t2776330603 * get_U3CMyAniU3Ek__BackingField_13() const { return ___U3CMyAniU3Ek__BackingField_13; }
	inline Animator_t2776330603 ** get_address_of_U3CMyAniU3Ek__BackingField_13() { return &___U3CMyAniU3Ek__BackingField_13; }
	inline void set_U3CMyAniU3Ek__BackingField_13(Animator_t2776330603 * value)
	{
		___U3CMyAniU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMyAniU3Ek__BackingField_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
