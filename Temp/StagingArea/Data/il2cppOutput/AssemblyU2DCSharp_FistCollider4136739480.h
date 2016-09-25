#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FistCollider
struct  FistCollider_t4136739480  : public MonoBehaviour_t667441552
{
public:
	// System.String FistCollider::targetTag
	String_t* ___targetTag_2;

public:
	inline static int32_t get_offset_of_targetTag_2() { return static_cast<int32_t>(offsetof(FistCollider_t4136739480, ___targetTag_2)); }
	inline String_t* get_targetTag_2() const { return ___targetTag_2; }
	inline String_t** get_address_of_targetTag_2() { return &___targetTag_2; }
	inline void set_targetTag_2(String_t* value)
	{
		___targetTag_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetTag_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
