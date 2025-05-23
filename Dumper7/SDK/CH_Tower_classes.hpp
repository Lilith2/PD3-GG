#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CH_Tower

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CH_BaseCop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CH_Tower.CH_Tower_C
// 0x0020 (0x1C60 - 0x1C40)
class ACH_Tower_C final : public ACH_BaseCop_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBZAITowerSpecialComponent*            SBZAITowerSpecial;                                 // 0x1C48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Helmet;                                            // 0x1C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CH_Tower(int32 EntryPoint);
	void BP_OnKill();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CH_Tower_C">();
	}
	static class ACH_Tower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACH_Tower_C>();
	}
};
static_assert(alignof(ACH_Tower_C) == 0x000010, "Wrong alignment on ACH_Tower_C");
static_assert(sizeof(ACH_Tower_C) == 0x001C60, "Wrong size on ACH_Tower_C");
static_assert(offsetof(ACH_Tower_C, UberGraphFrame) == 0x001C40, "Member 'ACH_Tower_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACH_Tower_C, SBZAITowerSpecial) == 0x001C48, "Member 'ACH_Tower_C::SBZAITowerSpecial' has a wrong offset!");
static_assert(offsetof(ACH_Tower_C, Helmet) == 0x001C50, "Member 'ACH_Tower_C::Helmet' has a wrong offset!");

}

