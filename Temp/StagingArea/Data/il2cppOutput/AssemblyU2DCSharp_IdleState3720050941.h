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

// IdleState
struct  IdleState_t3720050941  : public Il2CppObject
{
public:
	// Enemy IdleState::enemy
	Enemy_t67100520 * ___enemy_0;
	// System.Single IdleState::idleTimer
	float ___idleTimer_1;
	// System.Single IdleState::idleDuration
	float ___idleDuration_2;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(IdleState_t3720050941, ___enemy_0)); }
	inline Enemy_t67100520 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t67100520 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t67100520 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_idleTimer_1() { return static_cast<int32_t>(offsetof(IdleState_t3720050941, ___idleTimer_1)); }
	inline float get_idleTimer_1() const { return ___idleTimer_1; }
	inline float* get_address_of_idleTimer_1() { return &___idleTimer_1; }
	inline void set_idleTimer_1(float value)
	{
		___idleTimer_1 = value;
	}

	inline static int32_t get_offset_of_idleDuration_2() { return static_cast<int32_t>(offsetof(IdleState_t3720050941, ___idleDuration_2)); }
	inline float get_idleDuration_2() const { return ___idleDuration_2; }
	inline float* get_address_of_idleDuration_2() { return &___idleDuration_2; }
	inline void set_idleDuration_2(float value)
	{
		___idleDuration_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
