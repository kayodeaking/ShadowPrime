#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BarScript
struct  BarScript_t3083320990  : public MonoBehaviour_t667441552
{
public:
	// System.Single BarScript::fillAmount
	float ___fillAmount_2;
	// UnityEngine.UI.Image BarScript::bar
	Image_t538875265 * ___bar_3;
	// UnityEngine.UI.Text BarScript::valueText
	Text_t9039225 * ___valueText_4;
	// System.Single BarScript::lerpSpeed
	float ___lerpSpeed_5;
	// UnityEngine.Color BarScript::fullColor
	Color_t4194546905  ___fullColor_6;
	// UnityEngine.Color BarScript::lowColor
	Color_t4194546905  ___lowColor_7;
	// System.Boolean BarScript::isVisible
	bool ___isVisible_8;
	// System.Boolean BarScript::lerpColors
	bool ___lerpColors_9;
	// System.Single BarScript::<MaxVal>k__BackingField
	float ___U3CMaxValU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_bar_3() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___bar_3)); }
	inline Image_t538875265 * get_bar_3() const { return ___bar_3; }
	inline Image_t538875265 ** get_address_of_bar_3() { return &___bar_3; }
	inline void set_bar_3(Image_t538875265 * value)
	{
		___bar_3 = value;
		Il2CppCodeGenWriteBarrier(&___bar_3, value);
	}

	inline static int32_t get_offset_of_valueText_4() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___valueText_4)); }
	inline Text_t9039225 * get_valueText_4() const { return ___valueText_4; }
	inline Text_t9039225 ** get_address_of_valueText_4() { return &___valueText_4; }
	inline void set_valueText_4(Text_t9039225 * value)
	{
		___valueText_4 = value;
		Il2CppCodeGenWriteBarrier(&___valueText_4, value);
	}

	inline static int32_t get_offset_of_lerpSpeed_5() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___lerpSpeed_5)); }
	inline float get_lerpSpeed_5() const { return ___lerpSpeed_5; }
	inline float* get_address_of_lerpSpeed_5() { return &___lerpSpeed_5; }
	inline void set_lerpSpeed_5(float value)
	{
		___lerpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_fullColor_6() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___fullColor_6)); }
	inline Color_t4194546905  get_fullColor_6() const { return ___fullColor_6; }
	inline Color_t4194546905 * get_address_of_fullColor_6() { return &___fullColor_6; }
	inline void set_fullColor_6(Color_t4194546905  value)
	{
		___fullColor_6 = value;
	}

	inline static int32_t get_offset_of_lowColor_7() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___lowColor_7)); }
	inline Color_t4194546905  get_lowColor_7() const { return ___lowColor_7; }
	inline Color_t4194546905 * get_address_of_lowColor_7() { return &___lowColor_7; }
	inline void set_lowColor_7(Color_t4194546905  value)
	{
		___lowColor_7 = value;
	}

	inline static int32_t get_offset_of_isVisible_8() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___isVisible_8)); }
	inline bool get_isVisible_8() const { return ___isVisible_8; }
	inline bool* get_address_of_isVisible_8() { return &___isVisible_8; }
	inline void set_isVisible_8(bool value)
	{
		___isVisible_8 = value;
	}

	inline static int32_t get_offset_of_lerpColors_9() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___lerpColors_9)); }
	inline bool get_lerpColors_9() const { return ___lerpColors_9; }
	inline bool* get_address_of_lerpColors_9() { return &___lerpColors_9; }
	inline void set_lerpColors_9(bool value)
	{
		___lerpColors_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaxValU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BarScript_t3083320990, ___U3CMaxValU3Ek__BackingField_10)); }
	inline float get_U3CMaxValU3Ek__BackingField_10() const { return ___U3CMaxValU3Ek__BackingField_10; }
	inline float* get_address_of_U3CMaxValU3Ek__BackingField_10() { return &___U3CMaxValU3Ek__BackingField_10; }
	inline void set_U3CMaxValU3Ek__BackingField_10(float value)
	{
		___U3CMaxValU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
