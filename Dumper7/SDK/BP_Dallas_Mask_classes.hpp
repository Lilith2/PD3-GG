#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dallas_Mask

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Dallas_Mask.BP_Dallas_Mask_C
// 0x0000 (0x0348 - 0x0348)
class ABP_Dallas_Mask_C final : public ASBZMask
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Dallas_Mask_C">();
	}
	static class ABP_Dallas_Mask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Dallas_Mask_C>();
	}
};
static_assert(alignof(ABP_Dallas_Mask_C) == 0x000008, "Wrong alignment on ABP_Dallas_Mask_C");
static_assert(sizeof(ABP_Dallas_Mask_C) == 0x000348, "Wrong size on ABP_Dallas_Mask_C");

}

