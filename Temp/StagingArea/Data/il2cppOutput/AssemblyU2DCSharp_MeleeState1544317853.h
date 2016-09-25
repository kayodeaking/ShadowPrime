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

// MeleeState
struct  MeleeState_t1544317853  : public Il2CppObject
{
public:
	// Enemy MeleeState::enemy
	Enemy_t67100520 * ___enemy_0;
	// System.Single MeleeState::attackTimer
	float ___attackTimer_1;
	// System.Single MeleeState::attackCoolDown
	float ___attackCoolDown_2;
	// System.Boolean MeleeState::canAttack
	bool ___canAttack_3;

public:
	inline static int32_t get_offset_of_enemy_0() { return static_cast<int32_t>(offsetof(MeleeState_t1544317853, ___enemy_0)); }
	inline Enemy_t67100520 * get_enemy_0() const { return ___enemy_0; }
	inline Enemy_t67100520 ** get_address_of_enemy_0() { return &___enemy_0; }
	inline void set_enemy_0(Enemy_t67100520 * value)
	{
		___enemy_0 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_0, value);
	}

	inline static int32_t get_offset_of_attackTimer_1() { return static_cast<int32_t>(offsetof(MeleeState_t1544317853, ___attackTimer_1)); }
	inline float get_attackTimer_1() const { return ___attackTimer_1; }
	inline float* get_address_of_attackTimer_1() { return &___attackTimer_1; }
	inline void set_attackTimer_1(float value)
	{
		___attackTimer_1 = value;
	}

	inline static int32_t get_offset_of_attackCoolDown_2() { return static_cast<int32_t>(offsetof(MeleeState_t1544317853, ___attackCoolDown_2)); }
	inline float get_attackCoolDown_2() const { return ___attackCoolDown_2; }
	inline float* get_address_of_attackCoolDown_2() { return &___attackCoolDown_2; }
	inline void set_attackCoolDown_2(float value)
	{
		___attackCoolDown_2 = value;
	}

	inline static int32_t get_offset_of_canAttack_3() { return static_cast<int32_t>(offsetof(MeleeState_t1544317853, ___canAttack_3)); }
	inline bool get_canAttack_3() const { return ___canAttack_3; }
	inline bool* get_address_of_canAttack_3() { return &___canAttack_3; }
	inline void set_canAttack_3(bool value)
	{
		___canAttack_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
