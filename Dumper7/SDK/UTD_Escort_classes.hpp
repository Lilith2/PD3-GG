#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UTD_Escort

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UTD_Escort.UTD_Escort_C
// 0x0000 (0x0190 - 0x0190)
class UUTD_Escort_C final : public USBZAIUtilityDecider_Escort
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UTD_Escort_C">();
	}
	static class UUTD_Escort_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUTD_Escort_C>();
	}
};
static_assert(alignof(UUTD_Escort_C) == 0x000008, "Wrong alignment on UUTD_Escort_C");
static_assert(sizeof(UUTD_Escort_C) == 0x000190, "Wrong size on UUTD_Escort_C");

}

