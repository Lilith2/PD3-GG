#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AICivilianLinkedAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_AICivilianLinkedAnimation.ABP_AICivilianLinkedAnimation_C.ExecuteUbergraph_ABP_AICivilianLinkedAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation) == 0x000004, "Wrong alignment on ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation");
static_assert(sizeof(ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation) == 0x000004, "Wrong size on ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation");
static_assert(offsetof(ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation, EntryPoint) == 0x000000, "Member 'ABP_AICivilianLinkedAnimation_C_ExecuteUbergraph_ABP_AICivilianLinkedAnimation::EntryPoint' has a wrong offset!");

// Function ABP_AICivilianLinkedAnimation.ABP_AICivilianLinkedAnimation_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_AICivilianLinkedAnimation_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_AICivilianLinkedAnimation_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_AICivilianLinkedAnimation_C_AnimGraph");
static_assert(sizeof(ABP_AICivilianLinkedAnimation_C_AnimGraph) == 0x000010, "Wrong size on ABP_AICivilianLinkedAnimation_C_AnimGraph");
static_assert(offsetof(ABP_AICivilianLinkedAnimation_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_AICivilianLinkedAnimation_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_AICivilianLinkedAnimation.ABP_AICivilianLinkedAnimation_C.FullBodyAction
// 0x0020 (0x0020 - 0x0000)
struct ABP_AICivilianLinkedAnimation_C_FullBodyAction final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBodyAction_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_AICivilianLinkedAnimation_C_FullBodyAction) == 0x000008, "Wrong alignment on ABP_AICivilianLinkedAnimation_C_FullBodyAction");
static_assert(sizeof(ABP_AICivilianLinkedAnimation_C_FullBodyAction) == 0x000020, "Wrong size on ABP_AICivilianLinkedAnimation_C_FullBodyAction");
static_assert(offsetof(ABP_AICivilianLinkedAnimation_C_FullBodyAction, InPose) == 0x000000, "Member 'ABP_AICivilianLinkedAnimation_C_FullBodyAction::InPose' has a wrong offset!");
static_assert(offsetof(ABP_AICivilianLinkedAnimation_C_FullBodyAction, FullBodyAction_0) == 0x000010, "Member 'ABP_AICivilianLinkedAnimation_C_FullBodyAction::FullBodyAction_0' has a wrong offset!");

}

