/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: helper_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class helper.REDGameInfo_BTL_Mod
// 0x0000 (0x0534 - 0x0534)
class AREDGameInfo_BTL_Mod : public AREDGameInfo_Battle
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGAMEINFO_BTL_MOD));
		}

		return uClassPointer;
	};

};

// Class helper.REDGfxMoviePlayer_MenuCharaSelectMOD20
// 0x0000 (0x0664 - 0x0664)
class UREDGfxMoviePlayer_MenuCharaSelectMOD20 : public UREDGfxMoviePlayer_MenuCharaSelect_AC20
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
		}

		return uClassPointer;
	};

	bool CharaIconCollisionFuncMOD(const struct FVector2D& CursorPos, bool bRandomSelect, int32_t& outSetCursor, int32_t& outRandCounter);
	bool PosIncludeRectangleMOD(struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam& outParam, struct FVector2D& outXp);
	void GetHitRectangleMOD(bool bRandom, struct FVector2D& outPos1, struct FVector2D& outPos2, struct FVector2D& outPos3, struct FVector2D& outPos4, struct FVector2D& outPos5, struct FVector2D& outPos6, struct FVector2D& outOrigin);
	bool PosIncludeTriangleMOD(struct FVector2D& outTp1, struct FVector2D& outTp2, struct FVector2D& outTp3, struct FVector2D& outXp);
	float CheckIntersectMOD(struct FVector2D& outP1, struct FVector2D& outP2, struct FVector2D& outP3, struct FVector2D& outP4);
	void UpdateMODCursorAnim();
	void UpdateMODCursorFunc(EUE_PLAYER_ID Side, EUE_PLAYER_ID Player, struct FVector2D& outCursorPos);
	void Player_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	bool UpdateMODFinish(bool bTrigger);
	void UpdateMODRannyuToSelect(bool bTrigger);
	void UpdateMODMOMStage(bool bTrigger);
	void UpdateMODMOMMain(bool bTrigger);
	void UpdateMODMOMHelp(bool bTrigger);
	void UpdateMODMOMPreset(bool bTrigger);
	void UpdateMODModeSelect(bool bTrigger);
	void UpdateMODStartDemo(bool bTrigger);
	void FinalizeScene();
	void PlayerMOD_UpdateMODCustomMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void UpdateMODCustomPanelFocus(EUE_PLAYER_ID Player);
	void PlayerMOD_UpdateMODReturnToMainMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODBGSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODTrialSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODHandicapSetting(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_PrepareUpdateMODCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODStyleSelectExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODStyleSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODSkipCheckExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODSkipCheck(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODQuestConfirm(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_UpdateMODCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void PlayerMOD_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& outParam);
	void UpdateMODCharaSelect(bool bTrigger);
	void OnUpdate(bool bTrigger);
	void InitializeScene();
	void SetupSelectableChara();
};

// Class helper.REDGfxMoviePlayer_MenuInterludeMOD
// 0x0000 (0x01F8 - 0x01F8)
class UREDGfxMoviePlayer_MenuInterludeMOD : public UREDGfxMoviePlayer_MenuInterlude
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = reinterpret_cast<UClass*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUINTERLUDEMOD));
		}

		return uClassPointer;
	};

	void OnInitialize();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
