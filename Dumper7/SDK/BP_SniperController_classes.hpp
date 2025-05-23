#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperController.BP_SniperController_C
// 0x0008 (0x0698 - 0x0690)
class ABP_SniperController_C final : public ASBZAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SniperController(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperController_C">();
	}
	static class ABP_SniperController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperController_C>();
	}
};
static_assert(alignof(ABP_SniperController_C) == 0x000008, "Wrong alignment on ABP_SniperController_C");
static_assert(sizeof(ABP_SniperController_C) == 0x000698, "Wrong size on ABP_SniperController_C");
static_assert(offsetof(ABP_SniperController_C, UberGraphFrame) == 0x000690, "Member 'ABP_SniperController_C::UberGraphFrame' has a wrong offset!");

}

