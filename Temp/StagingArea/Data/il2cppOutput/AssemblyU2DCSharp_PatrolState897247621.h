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

// PatrolState
struct  PatrolState_t897247621  : public Il2CppObject
{
public:
	// Enemy PatrolState::enemy
	Enemy_t67100520 * ___enemy_0;
	// System.Single PatrolState::patrolTimer
	float ___patrolTimer_1;
	// System.Single PatrolState::patrolDuration
	float ___patrolDuration_2;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(PatrolState_t897247621, ___enemy_0)); }
	inline Enemy_t67100520 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t67100520 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t67100520 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_patrolTimer_1() { return static_cast<int32_t>(offsetof(PatrolState_t897247621, ___patrolTimer_1)); }
	inline float get_patrolTimer_1() const { return ___patrolTimer_1; }
	inline float* get_address_of_patrolTimer_1() { return &___patrolTimer_1; }
	inline void set_patrolTimer_1(float value)
	{
		___patrolTimer_1 = value;
	}

	inline static int32_t get_offset_of_patrolDuration_2() { return static_cast<int32_t>(offsetof(PatrolState_t897247621, ___patrolDuration_2)); }
	inline float get_patrolDuration_2() const { return ___patrolDuration_2; }
	inline float* get_address_of_patrolDuration_2() { return &___patrolDuration_2; }
	inline void set_patrolDuration_2(float value)
	{
		___patrolDuration_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
