#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VanFrontWheel

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VanFrontWheel.VanFrontWheel_C
// 0x0000 (0x0100 - 0x0100)
class UVanFrontWheel_C final : public USBZVehicleWheel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VanFrontWheel_C">();
	}
	static class UVanFrontWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVanFrontWheel_C>();
	}
};
static_assert(alignof(UVanFrontWheel_C) == 0x000008, "Wrong alignment on UVanFrontWheel_C");
static_assert(sizeof(UVanFrontWheel_C) == 0x000100, "Wrong size on UVanFrontWheel_C");

}

