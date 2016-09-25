#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rock
struct  Rock_t2552709  : public MonoBehaviour_t667441552
{
public:
	// System.Single Rock::speed
	float ___speed_2;
	// UnityEngine.Rigidbody2D Rock::myRigi
	Rigidbody2D_t1743771669 * ___myRigi_3;
	// UnityEngine.Vector2 Rock::direction
	Vector2_t4282066565  ___direction_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Rock_t2552709, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_myRigi_3() { return static_cast<int32_t>(offsetof(Rock_t2552709, ___myRigi_3)); }
	inline Rigidbody2D_t1743771669 * get_myRigi_3() const { return ___myRigi_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigi_3() { return &___myRigi_3; }
	inline void set_myRigi_3(Rigidbody2D_t1743771669 * value)
	{
		___myRigi_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigi_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Rock_t2552709, ___direction_4)); }
	inline Vector2_t4282066565  get_direction_4() const { return ___direction_4; }
	inline Vector2_t4282066565 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t4282066565  value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
