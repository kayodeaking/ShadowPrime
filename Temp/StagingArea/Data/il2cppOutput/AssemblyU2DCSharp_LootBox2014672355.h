#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LootBox
struct LootBox_t2014672355;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LootBox
struct  LootBox_t2014672355  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean LootBox::dropItem
	bool ___dropItem_3;
	// UnityEngine.Animator LootBox::<ChestAni>k__BackingField
	Animator_t2776330603 * ___U3CChestAniU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_dropItem_3() { return static_cast<int32_t>(offsetof(LootBox_t2014672355, ___dropItem_3)); }
	inline bool get_dropItem_3() const { return ___dropItem_3; }
	inline bool* get_address_of_dropItem_3() { return &___dropItem_3; }
	inline void set_dropItem_3(bool value)
	{
		___dropItem_3 = value;
	}

	inline static int32_t get_offset_of_U3CChestAniU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LootBox_t2014672355, ___U3CChestAniU3Ek__BackingField_4)); }
	inline Animator_t2776330603 * get_U3CChestAniU3Ek__BackingField_4() const { return ___U3CChestAniU3Ek__BackingField_4; }
	inline Animator_t2776330603 ** get_address_of_U3CChestAniU3Ek__BackingField_4() { return &___U3CChestAniU3Ek__BackingField_4; }
	inline void set_U3CChestAniU3Ek__BackingField_4(Animator_t2776330603 * value)
	{
		___U3CChestAniU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CChestAniU3Ek__BackingField_4, value);
	}
};

struct LootBox_t2014672355_StaticFields
{
public:
	// LootBox LootBox::instance
	LootBox_t2014672355 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(LootBox_t2014672355_StaticFields, ___instance_2)); }
	inline LootBox_t2014672355 * get_instance_2() const { return ___instance_2; }
	inline LootBox_t2014672355 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(LootBox_t2014672355 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
