#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DT_Taser

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DT_Taser.DT_Taser_C
// 0x0000 (0x0078 - 0x0078)
class UDT_Taser_C final : public USBZElectricDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DT_Taser_C">();
	}
	static class UDT_Taser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDT_Taser_C>();
	}
};
static_assert(alignof(UDT_Taser_C) == 0x000008, "Wrong alignment on UDT_Taser_C");
static_assert(sizeof(UDT_Taser_C) == 0x000078, "Wrong size on UDT_Taser_C");

}

