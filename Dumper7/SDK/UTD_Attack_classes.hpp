#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UTD_Attack

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UTD_Attack.UTD_Attack_C
// 0x0000 (0x00B0 - 0x00B0)
class UUTD_Attack_C final : public USBZAIUtilityDecider
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UTD_Attack_C">();
	}
	static class UUTD_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUTD_Attack_C>();
	}
};
static_assert(alignof(UUTD_Attack_C) == 0x000008, "Wrong alignment on UUTD_Attack_C");
static_assert(sizeof(UUTD_Attack_C) == 0x0000B0, "Wrong size on UUTD_Attack_C");

}

