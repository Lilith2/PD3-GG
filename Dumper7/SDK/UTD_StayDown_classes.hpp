#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UTD_StayDown

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UTD_StayDown.UTD_StayDown_C
// 0x0000 (0x00B0 - 0x00B0)
class UUTD_StayDown_C final : public USBZAIUtilityDecider
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UTD_StayDown_C">();
	}
	static class UUTD_StayDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUTD_StayDown_C>();
	}
};
static_assert(alignof(UUTD_StayDown_C) == 0x000008, "Wrong alignment on UUTD_StayDown_C");
static_assert(sizeof(UUTD_StayDown_C) == 0x0000B0, "Wrong size on UUTD_StayDown_C");

}

