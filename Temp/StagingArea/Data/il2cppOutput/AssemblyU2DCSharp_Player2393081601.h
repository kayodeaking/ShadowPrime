#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t2393081601;
// Stat
struct Stat_t2587252;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// DeadEventHandler
struct DeadEventHandler_t2277595636;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "AssemblyU2DCSharp_Character3568163593.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public Character_t3568163593
{
public:
	// Stat Player::mp
	Stat_t2587252 * ___mp_15;
	// UnityEngine.Transform[] Player::groundPoints
	TransformU5BU5D_t3792884695* ___groundPoints_16;
	// System.Single Player::groundRadius
	float ___groundRadius_17;
	// UnityEngine.LayerMask Player::whatIsGround
	LayerMask_t3236759763  ___whatIsGround_18;
	// System.Boolean Player::airControl
	bool ___airControl_19;
	// System.Single Player::jumpForce
	float ___jumpForce_20;
	// System.Boolean Player::immortal
	bool ___immortal_21;
	// UnityEngine.SpriteRenderer Player::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_22;
	// System.Single Player::immortalTime
	float ___immortalTime_23;
	// System.Single Player::manaRestoreTimer
	float ___manaRestoreTimer_25;
	// System.Single Player::manaTimer
	float ___manaTimer_26;
	// DeadEventHandler Player::Dead
	DeadEventHandler_t2277595636 * ___Dead_27;
	// UnityEngine.Rigidbody2D Player::<MyRigi>k__BackingField
	Rigidbody2D_t1743771669 * ___U3CMyRigiU3Ek__BackingField_28;
	// System.Boolean Player::<Roll>k__BackingField
	bool ___U3CRollU3Ek__BackingField_29;
	// System.Boolean Player::<Jump>k__BackingField
	bool ___U3CJumpU3Ek__BackingField_30;
	// System.Boolean Player::<OnGround>k__BackingField
	bool ___U3COnGroundU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_mp_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mp_15)); }
	inline Stat_t2587252 * get_mp_15() const { return ___mp_15; }
	inline Stat_t2587252 ** get_address_of_mp_15() { return &___mp_15; }
	inline void set_mp_15(Stat_t2587252 * value)
	{
		___mp_15 = value;
		Il2CppCodeGenWriteBarrier(&___mp_15, value);
	}

	inline static int32_t get_offset_of_groundPoints_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___groundPoints_16)); }
	inline TransformU5BU5D_t3792884695* get_groundPoints_16() const { return ___groundPoints_16; }
	inline TransformU5BU5D_t3792884695** get_address_of_groundPoints_16() { return &___groundPoints_16; }
	inline void set_groundPoints_16(TransformU5BU5D_t3792884695* value)
	{
		___groundPoints_16 = value;
		Il2CppCodeGenWriteBarrier(&___groundPoints_16, value);
	}

	inline static int32_t get_offset_of_groundRadius_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___groundRadius_17)); }
	inline float get_groundRadius_17() const { return ___groundRadius_17; }
	inline float* get_address_of_groundRadius_17() { return &___groundRadius_17; }
	inline void set_groundRadius_17(float value)
	{
		___groundRadius_17 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___whatIsGround_18)); }
	inline LayerMask_t3236759763  get_whatIsGround_18() const { return ___whatIsGround_18; }
	inline LayerMask_t3236759763 * get_address_of_whatIsGround_18() { return &___whatIsGround_18; }
	inline void set_whatIsGround_18(LayerMask_t3236759763  value)
	{
		___whatIsGround_18 = value;
	}

	inline static int32_t get_offset_of_airControl_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___airControl_19)); }
	inline bool get_airControl_19() const { return ___airControl_19; }
	inline bool* get_address_of_airControl_19() { return &___airControl_19; }
	inline void set_airControl_19(bool value)
	{
		___airControl_19 = value;
	}

	inline static int32_t get_offset_of_jumpForce_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___jumpForce_20)); }
	inline float get_jumpForce_20() const { return ___jumpForce_20; }
	inline float* get_address_of_jumpForce_20() { return &___jumpForce_20; }
	inline void set_jumpForce_20(float value)
	{
		___jumpForce_20 = value;
	}

	inline static int32_t get_offset_of_immortal_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___immortal_21)); }
	inline bool get_immortal_21() const { return ___immortal_21; }
	inline bool* get_address_of_immortal_21() { return &___immortal_21; }
	inline void set_immortal_21(bool value)
	{
		___immortal_21 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___spriteRenderer_22)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_22() const { return ___spriteRenderer_22; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_22() { return &___spriteRenderer_22; }
	inline void set_spriteRenderer_22(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_22 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_22, value);
	}

	inline static int32_t get_offset_of_immortalTime_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___immortalTime_23)); }
	inline float get_immortalTime_23() const { return ___immortalTime_23; }
	inline float* get_address_of_immortalTime_23() { return &___immortalTime_23; }
	inline void set_immortalTime_23(float value)
	{
		___immortalTime_23 = value;
	}

	inline static int32_t get_offset_of_manaRestoreTimer_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___manaRestoreTimer_25)); }
	inline float get_manaRestoreTimer_25() const { return ___manaRestoreTimer_25; }
	inline float* get_address_of_manaRestoreTimer_25() { return &___manaRestoreTimer_25; }
	inline void set_manaRestoreTimer_25(float value)
	{
		___manaRestoreTimer_25 = value;
	}

	inline static int32_t get_offset_of_manaTimer_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___manaTimer_26)); }
	inline float get_manaTimer_26() const { return ___manaTimer_26; }
	inline float* get_address_of_manaTimer_26() { return &___manaTimer_26; }
	inline void set_manaTimer_26(float value)
	{
		___manaTimer_26 = value;
	}

	inline static int32_t get_offset_of_Dead_27() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___Dead_27)); }
	inline DeadEventHandler_t2277595636 * get_Dead_27() const { return ___Dead_27; }
	inline DeadEventHandler_t2277595636 ** get_address_of_Dead_27() { return &___Dead_27; }
	inline void set_Dead_27(DeadEventHandler_t2277595636 * value)
	{
		___Dead_27 = value;
		Il2CppCodeGenWriteBarrier(&___Dead_27, value);
	}

	inline static int32_t get_offset_of_U3CMyRigiU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___U3CMyRigiU3Ek__BackingField_28)); }
	inline Rigidbody2D_t1743771669 * get_U3CMyRigiU3Ek__BackingField_28() const { return ___U3CMyRigiU3Ek__BackingField_28; }
	inline Rigidbody2D_t1743771669 ** get_address_of_U3CMyRigiU3Ek__BackingField_28() { return &___U3CMyRigiU3Ek__BackingField_28; }
	inline void set_U3CMyRigiU3Ek__BackingField_28(Rigidbody2D_t1743771669 * value)
	{
		___U3CMyRigiU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMyRigiU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CRollU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___U3CRollU3Ek__BackingField_29)); }
	inline bool get_U3CRollU3Ek__BackingField_29() const { return ___U3CRollU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CRollU3Ek__BackingField_29() { return &___U3CRollU3Ek__BackingField_29; }
	inline void set_U3CRollU3Ek__BackingField_29(bool value)
	{
		___U3CRollU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CJumpU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___U3CJumpU3Ek__BackingField_30)); }
	inline bool get_U3CJumpU3Ek__BackingField_30() const { return ___U3CJumpU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CJumpU3Ek__BackingField_30() { return &___U3CJumpU3Ek__BackingField_30; }
	inline void set_U3CJumpU3Ek__BackingField_30(bool value)
	{
		___U3CJumpU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3COnGroundU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___U3COnGroundU3Ek__BackingField_31)); }
	inline bool get_U3COnGroundU3Ek__BackingField_31() const { return ___U3COnGroundU3Ek__BackingField_31; }
	inline bool* get_address_of_U3COnGroundU3Ek__BackingField_31() { return &___U3COnGroundU3Ek__BackingField_31; }
	inline void set_U3COnGroundU3Ek__BackingField_31(bool value)
	{
		___U3COnGroundU3Ek__BackingField_31 = value;
	}
};

struct Player_t2393081601_StaticFields
{
public:
	// Player Player::gamePlayer
	Player_t2393081601 * ___gamePlayer_14;
	// System.Single Player::dodgeSpeed
	float ___dodgeSpeed_24;
	// System.Single Player::<Horizontal>k__BackingField
	float ___U3CHorizontalU3Ek__BackingField_32;
	// System.Single Player::<Vertical>k__BackingField
	float ___U3CVerticalU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_gamePlayer_14() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___gamePlayer_14)); }
	inline Player_t2393081601 * get_gamePlayer_14() const { return ___gamePlayer_14; }
	inline Player_t2393081601 ** get_address_of_gamePlayer_14() { return &___gamePlayer_14; }
	inline void set_gamePlayer_14(Player_t2393081601 * value)
	{
		___gamePlayer_14 = value;
		Il2CppCodeGenWriteBarrier(&___gamePlayer_14, value);
	}

	inline static int32_t get_offset_of_dodgeSpeed_24() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___dodgeSpeed_24)); }
	inline float get_dodgeSpeed_24() const { return ___dodgeSpeed_24; }
	inline float* get_address_of_dodgeSpeed_24() { return &___dodgeSpeed_24; }
	inline void set_dodgeSpeed_24(float value)
	{
		___dodgeSpeed_24 = value;
	}

	inline static int32_t get_offset_of_U3CHorizontalU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___U3CHorizontalU3Ek__BackingField_32)); }
	inline float get_U3CHorizontalU3Ek__BackingField_32() const { return ___U3CHorizontalU3Ek__BackingField_32; }
	inline float* get_address_of_U3CHorizontalU3Ek__BackingField_32() { return &___U3CHorizontalU3Ek__BackingField_32; }
	inline void set_U3CHorizontalU3Ek__BackingField_32(float value)
	{
		___U3CHorizontalU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CVerticalU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___U3CVerticalU3Ek__BackingField_33)); }
	inline float get_U3CVerticalU3Ek__BackingField_33() const { return ___U3CVerticalU3Ek__BackingField_33; }
	inline float* get_address_of_U3CVerticalU3Ek__BackingField_33() { return &___U3CVerticalU3Ek__BackingField_33; }
	inline void set_U3CVerticalU3Ek__BackingField_33(float value)
	{
		___U3CVerticalU3Ek__BackingField_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
