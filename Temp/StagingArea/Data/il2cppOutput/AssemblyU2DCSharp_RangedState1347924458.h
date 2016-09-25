#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Enemy
struct Enemy_t67100520;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangedState
struct  RangedState_t1347924458  : public Il2CppObject
{
public:
	// Enemy RangedState::enemy
	Enemy_t67100520 * ___enemy_0;
	// System.Single RangedState::throwTimer
	float ___throwTimer_1;
	// System.Single RangedState::throwCoolDown
	float ___throwCoolDown_2;
	// System.Boolean RangedState::canThrow
	bool ___canThrow_3;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(RangedState_t1347924458, ___enemy_0)); }
	inline Enemy_t67100520 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t67100520 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t67100520 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_throwTimer_1() { return static_cast<int32_t>(offsetof(RangedState_t1347924458, ___throwTimer_1)); }
	inline float get_throwTimer_1() const { return ___throwTimer_1; }
	inline float* get_address_of_throwTimer_1() { return &___throwTimer_1; }
	inline void set_throwTimer_1(float value)
	{
		___throwTimer_1 = value;
	}

	inline static int32_t get_offset_of_throwCoolDown_2() { return static_cast<int32_t>(offsetof(RangedState_t1347924458, ___throwCoolDown_2)); }
	inline float get_throwCoolDown_2() const { return ___throwCoolDown_2; }
	inline float* get_address_of_throwCoolDown_2() { return &___throwCoolDown_2; }
	inline void set_throwCoolDown_2(float value)
	{
		___throwCoolDown_2 = value;
	}

	inline static int32_t get_offset_of_canThrow_3() { return static_cast<int32_t>(offsetof(RangedState_t1347924458, ___canThrow_3)); }
	inline bool get_canThrow_3() const { return ___canThrow_3; }
	inline bool* get_address_of_canThrow_3() { return &___canThrow_3; }
	inline void set_canThrow_3(bool value)
	{
		___canThrow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
