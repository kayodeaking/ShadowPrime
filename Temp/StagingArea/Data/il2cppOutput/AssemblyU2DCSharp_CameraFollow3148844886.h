#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraFollow
struct CameraFollow_t3148844886;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t3148844886  : public MonoBehaviour_t667441552
{
public:
	// System.Single CameraFollow::xMax
	float ___xMax_3;
	// System.Single CameraFollow::yMax
	float ___yMax_4;
	// System.Single CameraFollow::xMin
	float ___xMin_5;
	// System.Single CameraFollow::yMin
	float ___yMin_6;
	// UnityEngine.Transform CameraFollow::target
	Transform_t1659122786 * ___target_7;
	// UnityEngine.GameObject CameraFollow::player
	GameObject_t3674682005 * ___player_8;

public:
	inline static int32_t get_offset_of_xMax_3() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___xMax_3)); }
	inline float get_xMax_3() const { return ___xMax_3; }
	inline float* get_address_of_xMax_3() { return &___xMax_3; }
	inline void set_xMax_3(float value)
	{
		___xMax_3 = value;
	}

	inline static int32_t get_offset_of_yMax_4() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___yMax_4)); }
	inline float get_yMax_4() const { return ___yMax_4; }
	inline float* get_address_of_yMax_4() { return &___yMax_4; }
	inline void set_yMax_4(float value)
	{
		___yMax_4 = value;
	}

	inline static int32_t get_offset_of_xMin_5() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___xMin_5)); }
	inline float get_xMin_5() const { return ___xMin_5; }
	inline float* get_address_of_xMin_5() { return &___xMin_5; }
	inline void set_xMin_5(float value)
	{
		___xMin_5 = value;
	}

	inline static int32_t get_offset_of_yMin_6() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___yMin_6)); }
	inline float get_yMin_6() const { return ___yMin_6; }
	inline float* get_address_of_yMin_6() { return &___yMin_6; }
	inline void set_yMin_6(float value)
	{
		___yMin_6 = value;
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___target_7)); }
	inline Transform_t1659122786 * get_target_7() const { return ___target_7; }
	inline Transform_t1659122786 ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Transform_t1659122786 * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_7, value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___player_8)); }
	inline GameObject_t3674682005 * get_player_8() const { return ___player_8; }
	inline GameObject_t3674682005 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t3674682005 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}
};

struct CameraFollow_t3148844886_StaticFields
{
public:
	// CameraFollow CameraFollow::cam
	CameraFollow_t3148844886 * ___cam_2;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886_StaticFields, ___cam_2)); }
	inline CameraFollow_t3148844886 * get_cam_2() const { return ___cam_2; }
	inline CameraFollow_t3148844886 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(CameraFollow_t3148844886 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
