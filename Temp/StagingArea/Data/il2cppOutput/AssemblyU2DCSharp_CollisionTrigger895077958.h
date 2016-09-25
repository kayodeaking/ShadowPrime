#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t2212926951;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionTrigger
struct  CollisionTrigger_t895077958  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.BoxCollider2D CollisionTrigger::platformCollider
	BoxCollider2D_t2212926951 * ___platformCollider_2;
	// UnityEngine.BoxCollider2D CollisionTrigger::platformTrigger
	BoxCollider2D_t2212926951 * ___platformTrigger_3;

public:
	inline static int32_t get_offset_of_platformCollider_2() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ___platformCollider_2)); }
	inline BoxCollider2D_t2212926951 * get_platformCollider_2() const { return ___platformCollider_2; }
	inline BoxCollider2D_t2212926951 ** get_address_of_platformCollider_2() { return &___platformCollider_2; }
	inline void set_platformCollider_2(BoxCollider2D_t2212926951 * value)
	{
		___platformCollider_2 = value;
		Il2CppCodeGenWriteBarrier(&___platformCollider_2, value);
	}

	inline static int32_t get_offset_of_platformTrigger_3() { return static_cast<int32_t>(offsetof(CollisionTrigger_t895077958, ___platformTrigger_3)); }
	inline BoxCollider2D_t2212926951 * get_platformTrigger_3() const { return ___platformTrigger_3; }
	inline BoxCollider2D_t2212926951 ** get_address_of_platformTrigger_3() { return &___platformTrigger_3; }
	inline void set_platformTrigger_3(BoxCollider2D_t2212926951 * value)
	{
		___platformTrigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___platformTrigger_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
