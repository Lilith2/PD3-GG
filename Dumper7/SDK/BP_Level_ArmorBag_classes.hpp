#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Level_ArmorBag

#include "Basic.hpp"

#include "BP_Placeable_ArmorBag_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Level_ArmorBag.BP_Level_ArmorBag_C
// 0x0000 (0x05B0 - 0x05B0)
class ABP_Level_ArmorBag_C final : public ABP_Placeable_ArmorBag_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Level_ArmorBag_C">();
	}
	static class ABP_Level_ArmorBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Level_ArmorBag_C>();
	}
};
static_assert(alignof(ABP_Level_ArmorBag_C) == 0x000010, "Wrong alignment on ABP_Level_ArmorBag_C");
static_assert(sizeof(ABP_Level_ArmorBag_C) == 0x0005B0, "Wrong size on ABP_Level_ArmorBag_C");

}

