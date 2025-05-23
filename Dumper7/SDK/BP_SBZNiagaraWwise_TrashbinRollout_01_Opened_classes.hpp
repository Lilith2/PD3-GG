#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SBZNiagaraWwise_TrashbinRollout_01_Opened

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Tintable_Fixture_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBZNiagaraWwise_TrashbinRollout_01_Opened.BP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C
// 0x0010 (0x02F0 - 0x02E0)
class ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C final : public ABP_Tintable_Fixture_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBZNiagaraWwiseComponent*              SBZNiagaraWwise;                                   // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SBZNiagaraWwise_TrashbinRollout_01_Opened(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C">();
	}
	static class ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C>();
	}
};
static_assert(alignof(ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C) == 0x000008, "Wrong alignment on ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C");
static_assert(sizeof(ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C) == 0x0002F0, "Wrong size on ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C");
static_assert(offsetof(ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C, UberGraphFrame) == 0x0002E0, "Member 'ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C, SBZNiagaraWwise) == 0x0002E8, "Member 'ABP_SBZNiagaraWwise_TrashbinRollout_01_Opened_C::SBZNiagaraWwise' has a wrong offset!");

}

