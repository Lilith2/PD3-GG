#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SM_ActionPhaseTransition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_SM_ActionPhaseTransition.WBP_UI_SM_ActionPhaseTransition_C
// 0x0058 (0x02E8 - 0x0290)
class UWBP_UI_SM_ActionPhaseTransition_C final : public USBZWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelDataFadeIn;                                   // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BackGround;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Location;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Time;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_LevelInfo;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_RiskLevel_C*             WBP_UI_Widget_RiskLevel;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_Loading_C*               Widget_Loading;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Twk_WaitTime;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_SM_ActionPhaseTransition(int32 EntryPoint);
	void OnInitialized();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_LevelDataFadeIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimationComplete();
	void DisplayTransition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_SM_ActionPhaseTransition_C">();
	}
	static class UWBP_UI_SM_ActionPhaseTransition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_SM_ActionPhaseTransition_C>();
	}
};
static_assert(alignof(UWBP_UI_SM_ActionPhaseTransition_C) == 0x000008, "Wrong alignment on UWBP_UI_SM_ActionPhaseTransition_C");
static_assert(sizeof(UWBP_UI_SM_ActionPhaseTransition_C) == 0x0002E8, "Wrong size on UWBP_UI_SM_ActionPhaseTransition_C");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, UberGraphFrame) == 0x000290, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, FadeIn) == 0x000298, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, LevelDataFadeIn) == 0x0002A0, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::LevelDataFadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, FadeOut) == 0x0002A8, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, Image_BackGround) == 0x0002B0, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::Image_BackGround' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, Text_Location) == 0x0002B8, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::Text_Location' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, Text_Time) == 0x0002C0, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::Text_Time' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, VerticalBox_LevelInfo) == 0x0002C8, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::VerticalBox_LevelInfo' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, WBP_UI_Widget_RiskLevel) == 0x0002D0, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::WBP_UI_Widget_RiskLevel' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, Widget_Loading) == 0x0002D8, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::Widget_Loading' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseTransition_C, Twk_WaitTime) == 0x0002E0, "Member 'UWBP_UI_SM_ActionPhaseTransition_C::Twk_WaitTime' has a wrong offset!");

}

