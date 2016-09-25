#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shop
struct  Shop_t2576150  : public MonoBehaviour_t667441552
{
public:
	// System.Single Shop::x
	float ___x_2;
	// System.Single Shop::y
	float ___y_3;
	// UnityEngine.GameObject Shop::player
	GameObject_t3674682005 * ___player_4;
	// UnityEngine.GameObject Shop::leftPoint
	GameObject_t3674682005 * ___leftPoint_5;
	// UnityEngine.GameObject Shop::rightPoint
	GameObject_t3674682005 * ___rightPoint_6;
	// UnityEngine.Animator Shop::myAni
	Animator_t2776330603 * ___myAni_7;
	// System.Boolean Shop::open
	bool ___open_8;
	// UnityEngine.GameObject Shop::shopWindow
	GameObject_t3674682005 * ___shopWindow_9;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___player_4)); }
	inline GameObject_t3674682005 * get_player_4() const { return ___player_4; }
	inline GameObject_t3674682005 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t3674682005 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_leftPoint_5() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___leftPoint_5)); }
	inline GameObject_t3674682005 * get_leftPoint_5() const { return ___leftPoint_5; }
	inline GameObject_t3674682005 ** get_address_of_leftPoint_5() { return &___leftPoint_5; }
	inline void set_leftPoint_5(GameObject_t3674682005 * value)
	{
		___leftPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftPoint_5, value);
	}

	inline static int32_t get_offset_of_rightPoint_6() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___rightPoint_6)); }
	inline GameObject_t3674682005 * get_rightPoint_6() const { return ___rightPoint_6; }
	inline GameObject_t3674682005 ** get_address_of_rightPoint_6() { return &___rightPoint_6; }
	inline void set_rightPoint_6(GameObject_t3674682005 * value)
	{
		___rightPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___rightPoint_6, value);
	}

	inline static int32_t get_offset_of_myAni_7() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___myAni_7)); }
	inline Animator_t2776330603 * get_myAni_7() const { return ___myAni_7; }
	inline Animator_t2776330603 ** get_address_of_myAni_7() { return &___myAni_7; }
	inline void set_myAni_7(Animator_t2776330603 * value)
	{
		___myAni_7 = value;
		Il2CppCodeGenWriteBarrier(&___myAni_7, value);
	}

	inline static int32_t get_offset_of_open_8() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___open_8)); }
	inline bool get_open_8() const { return ___open_8; }
	inline bool* get_address_of_open_8() { return &___open_8; }
	inline void set_open_8(bool value)
	{
		___open_8 = value;
	}

	inline static int32_t get_offset_of_shopWindow_9() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___shopWindow_9)); }
	inline GameObject_t3674682005 * get_shopWindow_9() const { return ___shopWindow_9; }
	inline GameObject_t3674682005 ** get_address_of_shopWindow_9() { return &___shopWindow_9; }
	inline void set_shopWindow_9(GameObject_t3674682005 * value)
	{
		___shopWindow_9 = value;
		Il2CppCodeGenWriteBarrier(&___shopWindow_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
