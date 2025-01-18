/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: helper_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once
#include "../SdkConstants.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.CharaIconCollisionFuncMOD
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execCharaIconCollisionFuncMOD_Params
{
	int32_t                                            setCursor;                                        // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            randCounter;                                      // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   CursorPos;                                        // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bRandomSelect : 1;                                // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bRandom : 1;                                      // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int32_t                                         Index;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         K;                                                // 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x0024 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PosIncludeRectangleMOD
// [0x00C20002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPosIncludeRectangleMOD_Params
{
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam Param;                                            // 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   xp;                                               // 0x000C (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector2D                                Pos1;                                             // 0x0018 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                Pos2;                                             // 0x0020 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                pos3;                                             // 0x0028 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                pos4;                                             // 0x0030 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                pos5;                                             // 0x0038 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                pos6;                                             // 0x0040 (0x0008) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.GetHitRectangleMOD
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execGetHitRectangleMOD_Params
{
	struct FVector2D                                   Pos1;                                             // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   Pos2;                                             // 0x0008 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   pos3;                                             // 0x0010 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   pos4;                                             // 0x0018 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   pos5;                                             // 0x0020 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   pos6;                                             // 0x0028 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   Origin;                                           // 0x0030 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bRandom : 1;                                      // 0x0038 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// float                                           Dir;                                              // 0x003C (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PosIncludeTriangleMOD
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPosIncludeTriangleMOD_Params
{
	struct FVector2D                                   tp1;                                              // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   tp2;                                              // 0x0008 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   tp3;                                              // 0x0010 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   xp;                                               // 0x0018 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.CheckIntersectMOD
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execCheckIntersectMOD_Params
{
	struct FVector2D                                   P1;                                               // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   P2;                                               // 0x0008 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   p3;                                               // 0x0010 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector2D                                   p4;                                               // 0x0018 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      // 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCursorAnim
// [0x00040003] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCursorAnim_Params
{
	// int32_t                                         I;                                                // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         Enemy;                                            // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCursorFunc
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCursorFunc_Params
{
	uint8_t                                            Side;                                             // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Player;                                           // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   CursorPos;                                        // 0x0004 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// float                                           addPosX;                                          // 0x000C (0x0004) [0x0000000000000000]               
	// float                                           addPosY;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	// float                                           addPosSpeed;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.Player_InitCardLoad
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayer_InitCardLoad_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODFinish
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODFinish_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UREDGameCommon*                           gameData;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODRannyuToSelect
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODRannyuToSelect_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMStage
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMStage_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UREDGameCommon*                           gameData;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	// class FString                                   tempStr;                                          // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                         I;                                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMMain
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMMain_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint8_t                                         Player;                                           // 0x0004 (0x0001) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x000C (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMHelp
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMHelp_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMPreset
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMPreset_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                   tempStr;                                          // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	// float                                           Base;                                             // 0x0014 (0x0004) [0x0000000000000000]               
	// float                                           Target;                                           // 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                         Level;                                            // 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x0020 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODModeSelect
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODModeSelect_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UREDGameCommon*                           gameData;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODStartDemo
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODStartDemo_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         Num;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                         numAll;                                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.FinalizeScene
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execFinalizeScene_Params
{
	// class UREDGameCommon*                           gameData;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	// uint8_t                                         selectPlayer;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	// uint32_t                                        bSetBGMAndBG : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                        bLockStageForEvent : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCustomMenu
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCustomMenu_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// uint8_t                                         Enemy;                                            // 0x0060 (0x0001) [0x0000000000000000]               
	// uint8_t                                         operatePlayer;                                    // 0x0061 (0x0001) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x0064 (0x0004) [0x0000000000000000]               
	// class FString                                   tempStr;                                          // 0x0068 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCustomPanelFocus
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCustomPanelFocus_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODReturnToMainMenu
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODReturnToMainMenu_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// int32_t                                         Retval;                                           // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODBGSelect
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODBGSelect_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// uint8_t                                         Enemy;                                            // 0x0060 (0x0001) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODTrialSelect
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODTrialSelect_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODHandicapSetting
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODHandicapSetting_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// uint8_t                                         operatePlayer;                                    // 0x0060 (0x0001) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCharaSelect
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCharaSelect_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
	// uint8_t                                         operatePlayer;                                    // 0x0064 (0x0001) [0x0000000000000000]               
	// uint8_t                                         Enemy;                                            // 0x0065 (0x0001) [0x0000000000000000]               
	// uint32_t                                        bDecideFrame : 1;                                 // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                        bHandicapSelectPrev : 1;                          // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_PrepareUpdateMODCharaSelect
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_PrepareUpdateMODCharaSelect_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODStyleSelectExe
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODStyleSelectExe_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
	// uint8_t                                         operatePlayer;                                    // 0x0064 (0x0001) [0x0000000000000000]               
	// uint8_t                                         Enemy;                                            // 0x0065 (0x0001) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODStyleSelect
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODStyleSelect_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
	// uint8_t                                         operatePlayer;                                    // 0x0064 (0x0001) [0x0000000000000000]               
	// uint32_t                                        bStartSelect : 1;                                 // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODSkipCheckExe
// [0x00C20002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODSkipCheckExe_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FCharaSel_MysetData                      mySetData;                                        // 0x0060 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0080 (0x0004) [0x0000000000000000]               
	// uint8_t                                         Enemy;                                            // 0x0084 (0x0001) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODSkipCheck
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODSkipCheck_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODQuestConfirm
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODQuestConfirm_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCardLoad
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCardLoad_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_InitCardLoad
// [0x00420002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_InitCardLoad_Params
{
	uint8_t                                            Player;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param;                                            // 0x0004 (0x005C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class UREDGameCommon*                           gameData;                                         // 0x0060 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCharaSelect
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCharaSelect_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         I;                                                // 0x0004 (0x0004) [0x0000000000000000]               
	// class UREDGameCommon*                           gameData;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	// uint8_t                                         Enemy;                                            // 0x000C (0x0001) [0x0000000000000000]               
	// class FString                                   EnemyCharaID;                                     // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.OnUpdate
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execOnUpdate_Params
{
	uint32_t                                           bTrigger : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// int32_t                                         I;                                                // 0x0004 (0x0004) [0x0000000000000000]               
	// class FName                                     prevMainState;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	// uint32_t                                        IsFinish : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.InitializeScene
// [0x00820002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execInitializeScene_Params
{
	// class UREDGameCommon*                           gameData;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x0004 (0x0004) [0x0000000000000000]               
	// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectCharacterParam charaParam;                                       // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.SetupSelectableChara
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuCharaSelectMOD20_execSetupSelectableChara_Params
{
	// int32_t                                         I;                                                // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function helper.REDGfxMoviePlayer_MenuInterludeMOD.OnInitialize
// [0x00020002] 
struct UREDGfxMoviePlayer_MenuInterludeMOD_execOnInitialize_Params
{
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
