#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BarScript
struct BarScript_t3083320990;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stat
struct  Stat_t2587252  : public Il2CppObject
{
public:
	// BarScript Stat::bar
	BarScript_t3083320990 * ___bar_0;
	// System.Single Stat::maxVal
	float ___maxVal_1;
	// System.Single Stat::currVal
	float ___currVal_2;

public:
	inline static int32_t get_offset_of_bar_0() { return static_cast<int32_t>(offsetof(Stat_t2587252, ___bar_0)); }
	inline BarScript_t3083320990 * get_bar_0() const { return ___bar_0; }
	inline BarScript_t3083320990 ** get_address_of_bar_0() { return &___bar_0; }
	inline void set_bar_0(BarScript_t3083320990 * value)
	{
		___bar_0 = value;
		Il2CppCodeGenWriteBarrier(&___bar_0, value);
	}

	inline static int32_t get_offset_of_maxVal_1() { return static_cast<int32_t>(offsetof(Stat_t2587252, ___maxVal_1)); }
	inline float get_maxVal_1() const { return ___maxVal_1; }
	inline float* get_address_of_maxVal_1() { return &___maxVal_1; }
	inline void set_maxVal_1(float value)
	{
		___maxVal_1 = value;
	}

	inline static int32_t get_offset_of_currVal_2() { return static_cast<int32_t>(offsetof(Stat_t2587252, ___currVal_2)); }
	inline float get_currVal_2() const { return ___currVal_2; }
	inline float* get_address_of_currVal_2() { return &___currVal_2; }
	inline void set_currVal_2(float value)
	{
		___currVal_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
