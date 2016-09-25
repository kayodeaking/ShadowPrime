#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Points
struct Points_t2396080387;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t272385497;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Points
struct  Points_t2396080387  : public MonoBehaviour_t667441552
{
public:
	// System.Single Points::currPoints
	float ___currPoints_2;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> Points::txt
	List_1_t272385497 * ___txt_4;
	// UnityEngine.UI.Image Points::digit1
	Image_t538875265 * ___digit1_5;
	// UnityEngine.UI.Image Points::digit2
	Image_t538875265 * ___digit2_6;

public:
	inline static int32_t get_offset_of_currPoints_2() { return static_cast<int32_t>(offsetof(Points_t2396080387, ___currPoints_2)); }
	inline float get_currPoints_2() const { return ___currPoints_2; }
	inline float* get_address_of_currPoints_2() { return &___currPoints_2; }
	inline void set_currPoints_2(float value)
	{
		___currPoints_2 = value;
	}

	inline static int32_t get_offset_of_txt_4() { return static_cast<int32_t>(offsetof(Points_t2396080387, ___txt_4)); }
	inline List_1_t272385497 * get_txt_4() const { return ___txt_4; }
	inline List_1_t272385497 ** get_address_of_txt_4() { return &___txt_4; }
	inline void set_txt_4(List_1_t272385497 * value)
	{
		___txt_4 = value;
		Il2CppCodeGenWriteBarrier(&___txt_4, value);
	}

	inline static int32_t get_offset_of_digit1_5() { return static_cast<int32_t>(offsetof(Points_t2396080387, ___digit1_5)); }
	inline Image_t538875265 * get_digit1_5() const { return ___digit1_5; }
	inline Image_t538875265 ** get_address_of_digit1_5() { return &___digit1_5; }
	inline void set_digit1_5(Image_t538875265 * value)
	{
		___digit1_5 = value;
		Il2CppCodeGenWriteBarrier(&___digit1_5, value);
	}

	inline static int32_t get_offset_of_digit2_6() { return static_cast<int32_t>(offsetof(Points_t2396080387, ___digit2_6)); }
	inline Image_t538875265 * get_digit2_6() const { return ___digit2_6; }
	inline Image_t538875265 ** get_address_of_digit2_6() { return &___digit2_6; }
	inline void set_digit2_6(Image_t538875265 * value)
	{
		___digit2_6 = value;
		Il2CppCodeGenWriteBarrier(&___digit2_6, value);
	}
};

struct Points_t2396080387_StaticFields
{
public:
	// Points Points::playerPoints
	Points_t2396080387 * ___playerPoints_3;

public:
	inline static int32_t get_offset_of_playerPoints_3() { return static_cast<int32_t>(offsetof(Points_t2396080387_StaticFields, ___playerPoints_3)); }
	inline Points_t2396080387 * get_playerPoints_3() const { return ___playerPoints_3; }
	inline Points_t2396080387 ** get_address_of_playerPoints_3() { return &___playerPoints_3; }
	inline void set_playerPoints_3(Points_t2396080387 * value)
	{
		___playerPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerPoints_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
