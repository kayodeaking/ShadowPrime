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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySight
struct  EnemySight_t3796790037  : public MonoBehaviour_t667441552
{
public:
	// Enemy EnemySight::enemy
	Enemy_t67100520 * ___enemy_2;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(EnemySight_t3796790037, ___enemy_2)); }
	inline Enemy_t67100520 * get_enemy_2() const { return ___enemy_2; }
	inline Enemy_t67100520 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(Enemy_t67100520 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
