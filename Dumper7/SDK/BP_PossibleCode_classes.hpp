#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PossibleCode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_CodePacket_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PossibleCode.BP_PossibleCode_C
// 0x0028 (0x02D0 - 0x02A8)
class ABP_PossibleCode_C final : public ASBZStaticReplicatedActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       Code;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceShowTrueCode;                                // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_CodePacket                          CodePacket;                                        // 0x02C4(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PossibleCode(int32 EntryPoint);
	void ShowCode(int32 TrueCode, int32 RandomCode, bool bShowTrueCode);
	void OnRep_CodePacket();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PossibleCode_C">();
	}
	static class ABP_PossibleCode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PossibleCode_C>();
	}
};
static_assert(alignof(ABP_PossibleCode_C) == 0x000008, "Wrong alignment on ABP_PossibleCode_C");
static_assert(sizeof(ABP_PossibleCode_C) == 0x0002D0, "Wrong size on ABP_PossibleCode_C");
static_assert(offsetof(ABP_PossibleCode_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_PossibleCode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PossibleCode_C, Code) == 0x0002B0, "Member 'ABP_PossibleCode_C::Code' has a wrong offset!");
static_assert(offsetof(ABP_PossibleCode_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_PossibleCode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PossibleCode_C, bForceShowTrueCode) == 0x0002C0, "Member 'ABP_PossibleCode_C::bForceShowTrueCode' has a wrong offset!");
static_assert(offsetof(ABP_PossibleCode_C, CodePacket) == 0x0002C4, "Member 'ABP_PossibleCode_C::CodePacket' has a wrong offset!");

}

