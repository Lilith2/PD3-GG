#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VanBackWheel

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VanBackWheel.VanBackWheel_C
// 0x0000 (0x0100 - 0x0100)
class UVanBackWheel_C final : public USBZVehicleWheel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VanBackWheel_C">();
	}
	static class UVanBackWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVanBackWheel_C>();
	}
};
static_assert(alignof(UVanBackWheel_C) == 0x000008, "Wrong alignment on UVanBackWheel_C");
static_assert(sizeof(UVanBackWheel_C) == 0x000100, "Wrong size on UVanBackWheel_C");

}

