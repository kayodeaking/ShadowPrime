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
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Buttons
struct  Buttons_t1906005857  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Buttons::errorPanel
	GameObject_t3674682005 * ___errorPanel_2;
	// UnityEngine.UI.Text Buttons::errorText
	Text_t9039225 * ___errorText_3;
	// System.String Buttons::errorMess
	String_t* ___errorMess_4;

public:
	inline static int32_t get_offset_of_errorPanel_2() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___errorPanel_2)); }
	inline GameObject_t3674682005 * get_errorPanel_2() const { return ___errorPanel_2; }
	inline GameObject_t3674682005 ** get_address_of_errorPanel_2() { return &___errorPanel_2; }
	inline void set_errorPanel_2(GameObject_t3674682005 * value)
	{
		___errorPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___errorPanel_2, value);
	}

	inline static int32_t get_offset_of_errorText_3() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___errorText_3)); }
	inline Text_t9039225 * get_errorText_3() const { return ___errorText_3; }
	inline Text_t9039225 ** get_address_of_errorText_3() { return &___errorText_3; }
	inline void set_errorText_3(Text_t9039225 * value)
	{
		___errorText_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_3, value);
	}

	inline static int32_t get_offset_of_errorMess_4() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___errorMess_4)); }
	inline String_t* get_errorMess_4() const { return ___errorMess_4; }
	inline String_t** get_address_of_errorMess_4() { return &___errorMess_4; }
	inline void set_errorMess_4(String_t* value)
	{
		___errorMess_4 = value;
		Il2CppCodeGenWriteBarrier(&___errorMess_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
