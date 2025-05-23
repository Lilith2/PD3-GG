#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_PartyClientWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_PartyClientWidget.WBP_UI_Widget_PartyClientWidget_C
// 0x0038 (0x0380 - 0x0348)
class UWBP_UI_Widget_PartyClientWidget_C final : public UPD3HUDPlayerStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlatformIcon;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlayerIconBackground;                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_InfamyLevel;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoIP_C*                            WBP_VoIP;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_AttributeBar_C*          Widget_DodgeGauge;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Widget_PartyClientWidget(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnInfamyLevelChanged(class ASBZPlayerState* InPlayerState);
	void OnPlatformChanged(class ASBZPlayerState* InPlayerState);
	void SetEOSProdUID();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_PartyClientWidget_C">();
	}
	static class UWBP_UI_Widget_PartyClientWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_PartyClientWidget_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_PartyClientWidget_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_PartyClientWidget_C");
static_assert(sizeof(UWBP_UI_Widget_PartyClientWidget_C) == 0x000380, "Wrong size on UWBP_UI_Widget_PartyClientWidget_C");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, UberGraphFrame) == 0x000348, "Member 'UWBP_UI_Widget_PartyClientWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, Background) == 0x000350, "Member 'UWBP_UI_Widget_PartyClientWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, Image_PlatformIcon) == 0x000358, "Member 'UWBP_UI_Widget_PartyClientWidget_C::Image_PlatformIcon' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, Image_PlayerIconBackground) == 0x000360, "Member 'UWBP_UI_Widget_PartyClientWidget_C::Image_PlayerIconBackground' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, Text_InfamyLevel) == 0x000368, "Member 'UWBP_UI_Widget_PartyClientWidget_C::Text_InfamyLevel' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, WBP_VoIP) == 0x000370, "Member 'UWBP_UI_Widget_PartyClientWidget_C::WBP_VoIP' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PartyClientWidget_C, Widget_DodgeGauge) == 0x000378, "Member 'UWBP_UI_Widget_PartyClientWidget_C::Widget_DodgeGauge' has a wrong offset!");

}

