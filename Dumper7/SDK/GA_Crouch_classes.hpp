#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Crouch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Crouch.GA_Crouch_C
// 0x0008 (0x0500 - 0x04F8)
class UGA_Crouch_C final : public USBZGameplayAbility_CharacterCrouch
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Crouch(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Crouch_C">();
	}
	static class UGA_Crouch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Crouch_C>();
	}
};
static_assert(alignof(UGA_Crouch_C) == 0x000008, "Wrong alignment on UGA_Crouch_C");
static_assert(sizeof(UGA_Crouch_C) == 0x000500, "Wrong size on UGA_Crouch_C");
static_assert(offsetof(UGA_Crouch_C, UberGraphFrame) == 0x0004F8, "Member 'UGA_Crouch_C::UberGraphFrame' has a wrong offset!");

}

