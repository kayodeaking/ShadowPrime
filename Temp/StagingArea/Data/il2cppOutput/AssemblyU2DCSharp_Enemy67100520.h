#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IEnemyState
struct IEnemyState_t1468682002;
// UnityEngine.Transform
struct Transform_t1659122786;
// Enemy
struct Enemy_t67100520;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "AssemblyU2DCSharp_Character3568163593.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public Character_t3568163593
{
public:
	// IEnemyState Enemy::currState
	Il2CppObject * ___currState_14;
	// System.Single Enemy::meleeRange
	float ___meleeRange_15;
	// System.Single Enemy::inThrowRange
	float ___inThrowRange_16;
	// UnityEngine.Transform Enemy::leftEdge
	Transform_t1659122786 * ___leftEdge_17;
	// UnityEngine.Transform Enemy::rightEdge
	Transform_t1659122786 * ___rightEdge_18;
	// System.Boolean Enemy::dropItem
	bool ___dropItem_19;
	// UnityEngine.GameObject Enemy::<Target>k__BackingField
	GameObject_t3674682005 * ___U3CTargetU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_currState_14() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___currState_14)); }
	inline Il2CppObject * get_currState_14() const { return ___currState_14; }
	inline Il2CppObject ** get_address_of_currState_14() { return &___currState_14; }
	inline void set_currState_14(Il2CppObject * value)
	{
		___currState_14 = value;
		Il2CppCodeGenWriteBarrier(&___currState_14, value);
	}

	inline static int32_t get_offset_of_meleeRange_15() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___meleeRange_15)); }
	inline float get_meleeRange_15() const { return ___meleeRange_15; }
	inline float* get_address_of_meleeRange_15() { return &___meleeRange_15; }
	inline void set_meleeRange_15(float value)
	{
		___meleeRange_15 = value;
	}

	inline static int32_t get_offset_of_inThrowRange_16() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___inThrowRange_16)); }
	inline float get_inThrowRange_16() const { return ___inThrowRange_16; }
	inline float* get_address_of_inThrowRange_16() { return &___inThrowRange_16; }
	inline void set_inThrowRange_16(float value)
	{
		___inThrowRange_16 = value;
	}

	inline static int32_t get_offset_of_leftEdge_17() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___leftEdge_17)); }
	inline Transform_t1659122786 * get_leftEdge_17() const { return ___leftEdge_17; }
	inline Transform_t1659122786 ** get_address_of_leftEdge_17() { return &___leftEdge_17; }
	inline void set_leftEdge_17(Transform_t1659122786 * value)
	{
		___leftEdge_17 = value;
		Il2CppCodeGenWriteBarrier(&___leftEdge_17, value);
	}

	inline static int32_t get_offset_of_rightEdge_18() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___rightEdge_18)); }
	inline Transform_t1659122786 * get_rightEdge_18() const { return ___rightEdge_18; }
	inline Transform_t1659122786 ** get_address_of_rightEdge_18() { return &___rightEdge_18; }
	inline void set_rightEdge_18(Transform_t1659122786 * value)
	{
		___rightEdge_18 = value;
		Il2CppCodeGenWriteBarrier(&___rightEdge_18, value);
	}

	inline static int32_t get_offset_of_dropItem_19() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___dropItem_19)); }
	inline bool get_dropItem_19() const { return ___dropItem_19; }
	inline bool* get_address_of_dropItem_19() { return &___dropItem_19; }
	inline void set_dropItem_19(bool value)
	{
		___dropItem_19 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___U3CTargetU3Ek__BackingField_21)); }
	inline GameObject_t3674682005 * get_U3CTargetU3Ek__BackingField_21() const { return ___U3CTargetU3Ek__BackingField_21; }
	inline GameObject_t3674682005 ** get_address_of_U3CTargetU3Ek__BackingField_21() { return &___U3CTargetU3Ek__BackingField_21; }
	inline void set_U3CTargetU3Ek__BackingField_21(GameObject_t3674682005 * value)
	{
		___U3CTargetU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_21, value);
	}
};

struct Enemy_t67100520_StaticFields
{
public:
	// Enemy Enemy::instance
	Enemy_t67100520 * ___instance_20;

public:
	inline static int32_t get_offset_of_instance_20() { return static_cast<int32_t>(offsetof(Enemy_t67100520_StaticFields, ___instance_20)); }
	inline Enemy_t67100520 * get_instance_20() const { return ___instance_20; }
	inline Enemy_t67100520 ** get_address_of_instance_20() { return &___instance_20; }
	inline void set_instance_20(Enemy_t67100520 * value)
	{
		___instance_20 = value;
		Il2CppCodeGenWriteBarrier(&___instance_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
