#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatMovement
struct  PlatMovement_t4102137118  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 PlatMovement::posA
	Vector3_t4282066566  ___posA_2;
	// UnityEngine.Vector3 PlatMovement::posB
	Vector3_t4282066566  ___posB_3;
	// UnityEngine.Vector3 PlatMovement::nexPos
	Vector3_t4282066566  ___nexPos_4;
	// System.Single PlatMovement::speed
	float ___speed_5;
	// UnityEngine.Transform PlatMovement::child
	Transform_t1659122786 * ___child_6;
	// UnityEngine.Transform PlatMovement::pointB
	Transform_t1659122786 * ___pointB_7;

public:
	inline static int32_t get_offset_of_posA_2() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___posA_2)); }
	inline Vector3_t4282066566  get_posA_2() const { return ___posA_2; }
	inline Vector3_t4282066566 * get_address_of_posA_2() { return &___posA_2; }
	inline void set_posA_2(Vector3_t4282066566  value)
	{
		___posA_2 = value;
	}

	inline static int32_t get_offset_of_posB_3() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___posB_3)); }
	inline Vector3_t4282066566  get_posB_3() const { return ___posB_3; }
	inline Vector3_t4282066566 * get_address_of_posB_3() { return &___posB_3; }
	inline void set_posB_3(Vector3_t4282066566  value)
	{
		___posB_3 = value;
	}

	inline static int32_t get_offset_of_nexPos_4() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___nexPos_4)); }
	inline Vector3_t4282066566  get_nexPos_4() const { return ___nexPos_4; }
	inline Vector3_t4282066566 * get_address_of_nexPos_4() { return &___nexPos_4; }
	inline void set_nexPos_4(Vector3_t4282066566  value)
	{
		___nexPos_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_child_6() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___child_6)); }
	inline Transform_t1659122786 * get_child_6() const { return ___child_6; }
	inline Transform_t1659122786 ** get_address_of_child_6() { return &___child_6; }
	inline void set_child_6(Transform_t1659122786 * value)
	{
		___child_6 = value;
		Il2CppCodeGenWriteBarrier(&___child_6, value);
	}

	inline static int32_t get_offset_of_pointB_7() { return static_cast<int32_t>(offsetof(PlatMovement_t4102137118, ___pointB_7)); }
	inline Transform_t1659122786 * get_pointB_7() const { return ___pointB_7; }
	inline Transform_t1659122786 ** get_address_of_pointB_7() { return &___pointB_7; }
	inline void set_pointB_7(Transform_t1659122786 * value)
	{
		___pointB_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointB_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
