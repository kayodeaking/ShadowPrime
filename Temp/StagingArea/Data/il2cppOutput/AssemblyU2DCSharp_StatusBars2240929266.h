#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1907060817;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Image
struct Image_t538875265;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t272385497;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StatusBars
struct  StatusBars_t2240929266  : public MonoBehaviour_t667441552
{
public:
	// System.Single StatusBars::fillAmount
	float ___fillAmount_2;
	// System.Single StatusBars::revFillAmount
	float ___revFillAmount_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> StatusBars::bars
	List_1_t1907060817 * ___bars_4;
	// UnityEngine.Transform StatusBars::status
	Transform_t1659122786 * ___status_5;
	// System.Single StatusBars::att
	float ___att_6;
	// System.Single StatusBars::mag
	float ___mag_7;
	// System.Single StatusBars::def
	float ___def_8;
	// UnityEngine.UI.Image StatusBars::currBar
	Image_t538875265 * ___currBar_9;
	// UnityEngine.UI.Image StatusBars::amount
	Image_t538875265 * ___amount_10;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> StatusBars::txt
	List_1_t272385497 * ___txt_11;
	// System.Boolean StatusBars::reset
	bool ___reset_12;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_revFillAmount_3() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___revFillAmount_3)); }
	inline float get_revFillAmount_3() const { return ___revFillAmount_3; }
	inline float* get_address_of_revFillAmount_3() { return &___revFillAmount_3; }
	inline void set_revFillAmount_3(float value)
	{
		___revFillAmount_3 = value;
	}

	inline static int32_t get_offset_of_bars_4() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___bars_4)); }
	inline List_1_t1907060817 * get_bars_4() const { return ___bars_4; }
	inline List_1_t1907060817 ** get_address_of_bars_4() { return &___bars_4; }
	inline void set_bars_4(List_1_t1907060817 * value)
	{
		___bars_4 = value;
		Il2CppCodeGenWriteBarrier(&___bars_4, value);
	}

	inline static int32_t get_offset_of_status_5() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___status_5)); }
	inline Transform_t1659122786 * get_status_5() const { return ___status_5; }
	inline Transform_t1659122786 ** get_address_of_status_5() { return &___status_5; }
	inline void set_status_5(Transform_t1659122786 * value)
	{
		___status_5 = value;
		Il2CppCodeGenWriteBarrier(&___status_5, value);
	}

	inline static int32_t get_offset_of_att_6() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___att_6)); }
	inline float get_att_6() const { return ___att_6; }
	inline float* get_address_of_att_6() { return &___att_6; }
	inline void set_att_6(float value)
	{
		___att_6 = value;
	}

	inline static int32_t get_offset_of_mag_7() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___mag_7)); }
	inline float get_mag_7() const { return ___mag_7; }
	inline float* get_address_of_mag_7() { return &___mag_7; }
	inline void set_mag_7(float value)
	{
		___mag_7 = value;
	}

	inline static int32_t get_offset_of_def_8() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___def_8)); }
	inline float get_def_8() const { return ___def_8; }
	inline float* get_address_of_def_8() { return &___def_8; }
	inline void set_def_8(float value)
	{
		___def_8 = value;
	}

	inline static int32_t get_offset_of_currBar_9() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___currBar_9)); }
	inline Image_t538875265 * get_currBar_9() const { return ___currBar_9; }
	inline Image_t538875265 ** get_address_of_currBar_9() { return &___currBar_9; }
	inline void set_currBar_9(Image_t538875265 * value)
	{
		___currBar_9 = value;
		Il2CppCodeGenWriteBarrier(&___currBar_9, value);
	}

	inline static int32_t get_offset_of_amount_10() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___amount_10)); }
	inline Image_t538875265 * get_amount_10() const { return ___amount_10; }
	inline Image_t538875265 ** get_address_of_amount_10() { return &___amount_10; }
	inline void set_amount_10(Image_t538875265 * value)
	{
		___amount_10 = value;
		Il2CppCodeGenWriteBarrier(&___amount_10, value);
	}

	inline static int32_t get_offset_of_txt_11() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___txt_11)); }
	inline List_1_t272385497 * get_txt_11() const { return ___txt_11; }
	inline List_1_t272385497 ** get_address_of_txt_11() { return &___txt_11; }
	inline void set_txt_11(List_1_t272385497 * value)
	{
		___txt_11 = value;
		Il2CppCodeGenWriteBarrier(&___txt_11, value);
	}

	inline static int32_t get_offset_of_reset_12() { return static_cast<int32_t>(offsetof(StatusBars_t2240929266, ___reset_12)); }
	inline bool get_reset_12() const { return ___reset_12; }
	inline bool* get_address_of_reset_12() { return &___reset_12; }
	inline void set_reset_12(bool value)
	{
		___reset_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
