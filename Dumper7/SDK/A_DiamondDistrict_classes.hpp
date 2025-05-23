#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: A_DiamondDistrict

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass A_DiamondDistrict.A_DiamondDistrict_C
// 0x0070 (0x03B0 - 0x0340)
class AA_DiamondDistrict_C final : public ASBZLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ASBZAmbientSound*                       SBZAmbientSound_DistantSiren_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_DistantSiren_2_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZSpatialAudioVolume*                 SBZSpatial_EXT_Outside_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_PortaPotty_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_MegaPhone_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Ambulance_03_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Ambulance_02_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Ambulance_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Bird5_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Bird4_42_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Bird3_41_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Bird2_40_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZAmbientSound*                       SBZAmbientSound_Bird_39_ExecuteUbergraph_A_DiamondDistrict_RefProperty; // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_A_DiamondDistrict(int32 EntryPoint);
	void HeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState CurrentHeistState);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"A_DiamondDistrict_C">();
	}
	static class AA_DiamondDistrict_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AA_DiamondDistrict_C>();
	}
};
static_assert(alignof(AA_DiamondDistrict_C) == 0x000008, "Wrong alignment on AA_DiamondDistrict_C");
static_assert(sizeof(AA_DiamondDistrict_C) == 0x0003B0, "Wrong size on AA_DiamondDistrict_C");
static_assert(offsetof(AA_DiamondDistrict_C, UberGraphFrame) == 0x000340, "Member 'AA_DiamondDistrict_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_DistantSiren_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000348, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_DistantSiren_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_DistantSiren_2_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000350, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_DistantSiren_2_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZSpatial_EXT_Outside_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000358, "Member 'AA_DiamondDistrict_C::SBZSpatial_EXT_Outside_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_PortaPotty_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000360, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_PortaPotty_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_MegaPhone_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000368, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_MegaPhone_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Ambulance_03_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000370, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Ambulance_03_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Ambulance_02_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000378, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Ambulance_02_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Ambulance_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000380, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Ambulance_01_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Bird5_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000388, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Bird5_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Bird4_42_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000390, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Bird4_42_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Bird3_41_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x000398, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Bird3_41_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Bird2_40_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x0003A0, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Bird2_40_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");
static_assert(offsetof(AA_DiamondDistrict_C, SBZAmbientSound_Bird_39_ExecuteUbergraph_A_DiamondDistrict_RefProperty) == 0x0003A8, "Member 'AA_DiamondDistrict_C::SBZAmbientSound_Bird_39_ExecuteUbergraph_A_DiamondDistrict_RefProperty' has a wrong offset!");

}

