#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VaultDoor_Small

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "BP_InteractableUnBreachableSingleDoor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VaultDoor_Small.BP_VaultDoor_Small_C
// 0x0038 (0x06A0 - 0x0668)
class ABP_VaultDoor_Small_C final : public ABP_InteractableUnBreachableSingleDoor_C
{
public:
	uint8                                         Pad_662[0x6];                                      // 0x0662(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_VaultDoor_Small_C;               // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Handle_Inner;                                      // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Handle_Coll;                                       // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZOutlineComponent*                   SBZOutline;                                        // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Unlock_Yaw_F06C681E4815486F2BCE47ADD31D115A;       // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Unlock__Direction_F06C681E4815486F2BCE47ADD31D115A; // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68D[0x3];                                      // 0x068D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Unlock;                                            // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MarkerID;                                          // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Should_Ignore_Penetrating;                         // 0x069C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_VaultDoor_Small(int32 EntryPoint);
	void OnStateChanged(ESBZGateState OldState, ESBZGateState NewState, bool bIsInitialStateChange);
	void BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_1_SBZOnInteraction__DelegateSignature(class USBZBaseInteractableComponent* Interactable_0, class USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
	void BndEvt__BP_VaultDoor_Small_Interactable_K2Node_ComponentBoundEvent_0_SBZOnInteraction__DelegateSignature(class USBZBaseInteractableComponent* Interactable_0, class USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
	void Unlock__UpdateFunc();
	void Unlock__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VaultDoor_Small_C">();
	}
	static class ABP_VaultDoor_Small_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VaultDoor_Small_C>();
	}
};
static_assert(alignof(ABP_VaultDoor_Small_C) == 0x000008, "Wrong alignment on ABP_VaultDoor_Small_C");
static_assert(sizeof(ABP_VaultDoor_Small_C) == 0x0006A0, "Wrong size on ABP_VaultDoor_Small_C");
static_assert(offsetof(ABP_VaultDoor_Small_C, UberGraphFrame_BP_VaultDoor_Small_C) == 0x000668, "Member 'ABP_VaultDoor_Small_C::UberGraphFrame_BP_VaultDoor_Small_C' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Handle_Inner) == 0x000670, "Member 'ABP_VaultDoor_Small_C::Handle_Inner' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Handle_Coll) == 0x000678, "Member 'ABP_VaultDoor_Small_C::Handle_Coll' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, SBZOutline) == 0x000680, "Member 'ABP_VaultDoor_Small_C::SBZOutline' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Unlock_Yaw_F06C681E4815486F2BCE47ADD31D115A) == 0x000688, "Member 'ABP_VaultDoor_Small_C::Unlock_Yaw_F06C681E4815486F2BCE47ADD31D115A' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Unlock__Direction_F06C681E4815486F2BCE47ADD31D115A) == 0x00068C, "Member 'ABP_VaultDoor_Small_C::Unlock__Direction_F06C681E4815486F2BCE47ADD31D115A' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Unlock) == 0x000690, "Member 'ABP_VaultDoor_Small_C::Unlock' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, MarkerID) == 0x000698, "Member 'ABP_VaultDoor_Small_C::MarkerID' has a wrong offset!");
static_assert(offsetof(ABP_VaultDoor_Small_C, Should_Ignore_Penetrating) == 0x00069C, "Member 'ABP_VaultDoor_Small_C::Should_Ignore_Penetrating' has a wrong offset!");

}

