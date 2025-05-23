#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_PlayerStatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_PlayerStatusWidget.WBP_UI_Widget_PlayerStatusWidget_C
// 0x0020 (0x0368 - 0x0348)
class UWBP_UI_Widget_PlayerStatusWidget_C final : public UPD3HUDPlayerStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                           HUDGlitchRetainer;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Frame;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoIP_C*                            WBP_VoIP;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Widget_PlayerStatusWidget(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetEOSProdUID();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_PlayerStatusWidget_C">();
	}
	static class UWBP_UI_Widget_PlayerStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_PlayerStatusWidget_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_PlayerStatusWidget_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_PlayerStatusWidget_C");
static_assert(sizeof(UWBP_UI_Widget_PlayerStatusWidget_C) == 0x000368, "Wrong size on UWBP_UI_Widget_PlayerStatusWidget_C");
static_assert(offsetof(UWBP_UI_Widget_PlayerStatusWidget_C, UberGraphFrame) == 0x000348, "Member 'UWBP_UI_Widget_PlayerStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerStatusWidget_C, HUDGlitchRetainer) == 0x000350, "Member 'UWBP_UI_Widget_PlayerStatusWidget_C::HUDGlitchRetainer' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerStatusWidget_C, Image_Frame) == 0x000358, "Member 'UWBP_UI_Widget_PlayerStatusWidget_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerStatusWidget_C, WBP_VoIP) == 0x000360, "Member 'UWBP_UI_Widget_PlayerStatusWidget_C::WBP_VoIP' has a wrong offset!");

}

