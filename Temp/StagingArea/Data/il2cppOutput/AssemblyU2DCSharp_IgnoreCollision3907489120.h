#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IgnoreCollision
struct  IgnoreCollision_t3907489120  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Collider2D IgnoreCollision::other
	Collider2D_t1552025098 * ___other_2;

public:
	inline static int32_t get_offset_of_other_2() { return static_cast<int32_t>(offsetof(IgnoreCollision_t3907489120, ___other_2)); }
	inline Collider2D_t1552025098 * get_other_2() const { return ___other_2; }
	inline Collider2D_t1552025098 ** get_address_of_other_2() { return &___other_2; }
	inline void set_other_2(Collider2D_t1552025098 * value)
	{
		___other_2 = value;
		Il2CppCodeGenWriteBarrier(&___other_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
