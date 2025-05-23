#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Overskill_Container

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Overskill_Container.WBP_UI_Overskill_Container_C
// 0x0118 (0x03B8 - 0x02A0)
class UWBP_UI_Overskill_Container_C final : public USBZOverskillWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBZUITextBlock*                        BaseDescription_T;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Body_O;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DummyFive_I;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Five_B;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FocusedLevel_I;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FocusedLevelDescription_I;                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FocusedLevelXp_I;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Four_B;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_111;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelFourBar_I;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelOneBar_I;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelThreeBar_I;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelTwoBar_I;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Locked_I;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                One_B;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Overskill_NavBar_C*             OverskillLevels_Nav;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Overskill_ProgressBar_C*        ProgressBar;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Three_B;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Two_B;                                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Unlocked_I;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZOverskillData*                      Overskill;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentOverskillLevel;                             // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UBorder*, class UImage*>           LevelAndBar;                                       // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WBP_UI_Overskill_Container(int32 EntryPoint);
	void OnOverskillChanged(const class USBZOverskillData* InOverskillData, float InProgress);
	void OnInitialized();
	void BndEvt__WBP_UI_Overskill_Container_WBP_Overskill_NavBar_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature(int32 NewIndex);
	void UpdateLevelDetails(int32 NewIndex);
	void SetBaseInfo(float Progress_0);
	void SetProgressBarDetails();
	void GetSkillDataByIndex(int32 Index_0, class USBZSkillData** SkillData);
	void GetCurrentLevel(float Progress_0, int32* CurrentLevel);
	void GetProgressBarValue(float InProgress, float* OutProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Overskill_Container_C">();
	}
	static class UWBP_UI_Overskill_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Overskill_Container_C>();
	}
};
static_assert(alignof(UWBP_UI_Overskill_Container_C) == 0x000008, "Wrong alignment on UWBP_UI_Overskill_Container_C");
static_assert(sizeof(UWBP_UI_Overskill_Container_C) == 0x0003B8, "Wrong size on UWBP_UI_Overskill_Container_C");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_UI_Overskill_Container_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, BaseDescription_T) == 0x0002A8, "Member 'UWBP_UI_Overskill_Container_C::BaseDescription_T' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Body_O) == 0x0002B0, "Member 'UWBP_UI_Overskill_Container_C::Body_O' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, DummyFive_I) == 0x0002B8, "Member 'UWBP_UI_Overskill_Container_C::DummyFive_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Five_B) == 0x0002C0, "Member 'UWBP_UI_Overskill_Container_C::Five_B' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, FocusedLevel_I) == 0x0002C8, "Member 'UWBP_UI_Overskill_Container_C::FocusedLevel_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, FocusedLevelDescription_I) == 0x0002D0, "Member 'UWBP_UI_Overskill_Container_C::FocusedLevelDescription_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, FocusedLevelXp_I) == 0x0002D8, "Member 'UWBP_UI_Overskill_Container_C::FocusedLevelXp_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Four_B) == 0x0002E0, "Member 'UWBP_UI_Overskill_Container_C::Four_B' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Image) == 0x0002E8, "Member 'UWBP_UI_Overskill_Container_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Image_1) == 0x0002F0, "Member 'UWBP_UI_Overskill_Container_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Image_111) == 0x0002F8, "Member 'UWBP_UI_Overskill_Container_C::Image_111' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, LevelFourBar_I) == 0x000300, "Member 'UWBP_UI_Overskill_Container_C::LevelFourBar_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, LevelOneBar_I) == 0x000308, "Member 'UWBP_UI_Overskill_Container_C::LevelOneBar_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, LevelThreeBar_I) == 0x000310, "Member 'UWBP_UI_Overskill_Container_C::LevelThreeBar_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, LevelTwoBar_I) == 0x000318, "Member 'UWBP_UI_Overskill_Container_C::LevelTwoBar_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Locked_I) == 0x000320, "Member 'UWBP_UI_Overskill_Container_C::Locked_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, One_B) == 0x000328, "Member 'UWBP_UI_Overskill_Container_C::One_B' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, OverskillLevels_Nav) == 0x000330, "Member 'UWBP_UI_Overskill_Container_C::OverskillLevels_Nav' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, ProgressBar) == 0x000338, "Member 'UWBP_UI_Overskill_Container_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Three_B) == 0x000340, "Member 'UWBP_UI_Overskill_Container_C::Three_B' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Two_B) == 0x000348, "Member 'UWBP_UI_Overskill_Container_C::Two_B' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Unlocked_I) == 0x000350, "Member 'UWBP_UI_Overskill_Container_C::Unlocked_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, Overskill) == 0x000358, "Member 'UWBP_UI_Overskill_Container_C::Overskill' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, CurrentOverskillLevel) == 0x000360, "Member 'UWBP_UI_Overskill_Container_C::CurrentOverskillLevel' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Overskill_Container_C, LevelAndBar) == 0x000368, "Member 'UWBP_UI_Overskill_Container_C::LevelAndBar' has a wrong offset!");

}

