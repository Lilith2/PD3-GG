#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SecurityCameraFeedback

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SecurityCameraFeedback.BP_SecurityCameraFeedback_C
// 0x0000 (0x0300 - 0x0300)
class UBP_SecurityCameraFeedback_C final : public USBZLocalPlayerFeedback
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SecurityCameraFeedback_C">();
	}
	static class UBP_SecurityCameraFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SecurityCameraFeedback_C>();
	}
};
static_assert(alignof(UBP_SecurityCameraFeedback_C) == 0x000008, "Wrong alignment on UBP_SecurityCameraFeedback_C");
static_assert(sizeof(UBP_SecurityCameraFeedback_C) == 0x000300, "Wrong size on UBP_SecurityCameraFeedback_C");

}

