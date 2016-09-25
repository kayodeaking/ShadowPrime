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
// PlayerShip
struct PlayerShip_t4089277661;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// DeadEventHandler
struct DeadEventHandler_t2277595636;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "AssemblyU2DCSharp_Ships79854999.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShip
struct  PlayerShip_t4089277661  : public Ships_t79854999
{
public:
	// Stat PlayerShip::mp
	Stat_t2587252 * ___mp_13;
	// Stat PlayerShip::shield
	Stat_t2587252 * ___shield_14;
	// System.Boolean PlayerShip::immortal
	bool ___immortal_16;
	// System.Single PlayerShip::immortalTime
	float ___immortalTime_17;
	// UnityEngine.SpriteRenderer PlayerShip::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_18;
	// System.Single PlayerShip::manaRestoreTimer
	float ___manaRestoreTimer_19;
	// System.Single PlayerShip::manaTimer
	float ___manaTimer_20;
	// DeadEventHandler PlayerShip::Dead
	DeadEventHandler_t2277595636 * ___Dead_21;
	// UnityEngine.Rigidbody2D PlayerShip::<MyRigi>k__BackingField
	Rigidbody2D_t1743771669 * ___U3CMyRigiU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_mp_13() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___mp_13)); }
	inline Stat_t2587252 * get_mp_13() const { return ___mp_13; }
	inline Stat_t2587252 ** get_address_of_mp_13() { return &___mp_13; }
	inline void set_mp_13(Stat_t2587252 * value)
	{
		___mp_13 = value;
		Il2CppCodeGenWriteBarrier(&___mp_13, value);
	}

	inline static int32_t get_offset_of_shield_14() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___shield_14)); }
	inline Stat_t2587252 * get_shield_14() const { return ___shield_14; }
	inline Stat_t2587252 ** get_address_of_shield_14() { return &___shield_14; }
	inline void set_shield_14(Stat_t2587252 * value)
	{
		___shield_14 = value;
		Il2CppCodeGenWriteBarrier(&___shield_14, value);
	}

	inline static int32_t get_offset_of_immortal_16() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___immortal_16)); }
	inline bool get_immortal_16() const { return ___immortal_16; }
	inline bool* get_address_of_immortal_16() { return &___immortal_16; }
	inline void set_immortal_16(bool value)
	{
		___immortal_16 = value;
	}

	inline static int32_t get_offset_of_immortalTime_17() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___immortalTime_17)); }
	inline float get_immortalTime_17() const { return ___immortalTime_17; }
	inline float* get_address_of_immortalTime_17() { return &___immortalTime_17; }
	inline void set_immortalTime_17(float value)
	{
		___immortalTime_17 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_18() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___spriteRenderer_18)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_18() const { return ___spriteRenderer_18; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_18() { return &___spriteRenderer_18; }
	inline void set_spriteRenderer_18(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_18 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_18, value);
	}

	inline static int32_t get_offset_of_manaRestoreTimer_19() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___manaRestoreTimer_19)); }
	inline float get_manaRestoreTimer_19() const { return ___manaRestoreTimer_19; }
	inline float* get_address_of_manaRestoreTimer_19() { return &___manaRestoreTimer_19; }
	inline void set_manaRestoreTimer_19(float value)
	{
		___manaRestoreTimer_19 = value;
	}

	inline static int32_t get_offset_of_manaTimer_20() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___manaTimer_20)); }
	inline float get_manaTimer_20() const { return ___manaTimer_20; }
	inline float* get_address_of_manaTimer_20() { return &___manaTimer_20; }
	inline void set_manaTimer_20(float value)
	{
		___manaTimer_20 = value;
	}

	inline static int32_t get_offset_of_Dead_21() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___Dead_21)); }
	inline DeadEventHandler_t2277595636 * get_Dead_21() const { return ___Dead_21; }
	inline DeadEventHandler_t2277595636 ** get_address_of_Dead_21() { return &___Dead_21; }
	inline void set_Dead_21(DeadEventHandler_t2277595636 * value)
	{
		___Dead_21 = value;
		Il2CppCodeGenWriteBarrier(&___Dead_21, value);
	}

	inline static int32_t get_offset_of_U3CMyRigiU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661, ___U3CMyRigiU3Ek__BackingField_22)); }
	inline Rigidbody2D_t1743771669 * get_U3CMyRigiU3Ek__BackingField_22() const { return ___U3CMyRigiU3Ek__BackingField_22; }
	inline Rigidbody2D_t1743771669 ** get_address_of_U3CMyRigiU3Ek__BackingField_22() { return &___U3CMyRigiU3Ek__BackingField_22; }
	inline void set_U3CMyRigiU3Ek__BackingField_22(Rigidbody2D_t1743771669 * value)
	{
		___U3CMyRigiU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMyRigiU3Ek__BackingField_22, value);
	}
};

struct PlayerShip_t4089277661_StaticFields
{
public:
	// PlayerShip PlayerShip::gameShip
	PlayerShip_t4089277661 * ___gameShip_15;
	// System.Single PlayerShip::<Horizontal>k__BackingField
	float ___U3CHorizontalU3Ek__BackingField_23;
	// System.Single PlayerShip::<Vertical>k__BackingField
	float ___U3CVerticalU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_gameShip_15() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661_StaticFields, ___gameShip_15)); }
	inline PlayerShip_t4089277661 * get_gameShip_15() const { return ___gameShip_15; }
	inline PlayerShip_t4089277661 ** get_address_of_gameShip_15() { return &___gameShip_15; }
	inline void set_gameShip_15(PlayerShip_t4089277661 * value)
	{
		___gameShip_15 = value;
		Il2CppCodeGenWriteBarrier(&___gameShip_15, value);
	}

	inline static int32_t get_offset_of_U3CHorizontalU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661_StaticFields, ___U3CHorizontalU3Ek__BackingField_23)); }
	inline float get_U3CHorizontalU3Ek__BackingField_23() const { return ___U3CHorizontalU3Ek__BackingField_23; }
	inline float* get_address_of_U3CHorizontalU3Ek__BackingField_23() { return &___U3CHorizontalU3Ek__BackingField_23; }
	inline void set_U3CHorizontalU3Ek__BackingField_23(float value)
	{
		___U3CHorizontalU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CVerticalU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PlayerShip_t4089277661_StaticFields, ___U3CVerticalU3Ek__BackingField_24)); }
	inline float get_U3CVerticalU3Ek__BackingField_24() const { return ___U3CVerticalU3Ek__BackingField_24; }
	inline float* get_address_of_U3CVerticalU3Ek__BackingField_24() { return &___U3CVerticalU3Ek__BackingField_24; }
	inline void set_U3CVerticalU3Ek__BackingField_24(float value)
	{
		___U3CVerticalU3Ek__BackingField_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
