#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_PlayerCarryStatusItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_PlayerCarryStatusItem.WBP_UI_Widget_PlayerCarryStatusItem_C
// 0x0028 (0x02B8 - 0x0290)
class UWBP_UI_Widget_PlayerCarryStatusItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnRemoved;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnAdded;                                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BackgroundImage;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BagIcon;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Widget_PlayerCarryStatusItem(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void OnChanged(class USBZCarryType* Type, bool IsAdded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_PlayerCarryStatusItem_C">();
	}
	static class UWBP_UI_Widget_PlayerCarryStatusItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_PlayerCarryStatusItem_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_PlayerCarryStatusItem_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_PlayerCarryStatusItem_C");
static_assert(sizeof(UWBP_UI_Widget_PlayerCarryStatusItem_C) == 0x0002B8, "Wrong size on UWBP_UI_Widget_PlayerCarryStatusItem_C");
static_assert(offsetof(UWBP_UI_Widget_PlayerCarryStatusItem_C, UberGraphFrame) == 0x000290, "Member 'UWBP_UI_Widget_PlayerCarryStatusItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerCarryStatusItem_C, OnRemoved) == 0x000298, "Member 'UWBP_UI_Widget_PlayerCarryStatusItem_C::OnRemoved' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerCarryStatusItem_C, OnAdded) == 0x0002A0, "Member 'UWBP_UI_Widget_PlayerCarryStatusItem_C::OnAdded' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerCarryStatusItem_C, Image_BackgroundImage) == 0x0002A8, "Member 'UWBP_UI_Widget_PlayerCarryStatusItem_C::Image_BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_PlayerCarryStatusItem_C, Image_BagIcon) == 0x0002B0, "Member 'UWBP_UI_Widget_PlayerCarryStatusItem_C::Image_BagIcon' has a wrong offset!");

}

