#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Level_AmmoBag

#include "Basic.hpp"

#include "BP_Placeable_AmmoBag_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Level_AmmoBag.BP_Level_AmmoBag_C
// 0x0000 (0x05D0 - 0x05D0)
class ABP_Level_AmmoBag_C final : public ABP_Placeable_AmmoBag_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Level_AmmoBag_C">();
	}
	static class ABP_Level_AmmoBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Level_AmmoBag_C>();
	}
};
static_assert(alignof(ABP_Level_AmmoBag_C) == 0x000010, "Wrong alignment on ABP_Level_AmmoBag_C");
static_assert(sizeof(ABP_Level_AmmoBag_C) == 0x0005D0, "Wrong size on ABP_Level_AmmoBag_C");

}

