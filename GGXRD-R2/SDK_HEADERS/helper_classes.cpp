/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: helper_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.CharaIconCollisionFuncMOD
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               CursorPos                      (CPF_Parm)
// uint32_t                       bRandomSelect                  (CPF_Parm)
// int32_t                        setCursor                      (CPF_Parm | CPF_OutParm)
// int32_t                        randCounter                    (CPF_Parm | CPF_OutParm)

bool UREDGfxMoviePlayer_MenuCharaSelectMOD20::CharaIconCollisionFuncMOD(const struct FVector2D& CursorPos, bool bRandomSelect, int32_t& setCursor, int32_t& randCounter)
{
	static UFunction* uFnCharaIconCollisionFuncMOD = nullptr;

	if (!uFnCharaIconCollisionFuncMOD)
	{
		uFnCharaIconCollisionFuncMOD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execCharaIconCollisionFuncMOD_Params CharaIconCollisionFuncMOD_Params;
	memset(&CharaIconCollisionFuncMOD_Params, 0, sizeof(CharaIconCollisionFuncMOD_Params));
	memcpy_s(&CharaIconCollisionFuncMOD_Params.CursorPos, sizeof(CharaIconCollisionFuncMOD_Params.CursorPos), &CursorPos, sizeof(CursorPos));
	CharaIconCollisionFuncMOD_Params.bRandomSelect = bRandomSelect;
	memcpy_s(&CharaIconCollisionFuncMOD_Params.setCursor, sizeof(CharaIconCollisionFuncMOD_Params.setCursor), &setCursor, sizeof(setCursor));
	memcpy_s(&CharaIconCollisionFuncMOD_Params.randCounter, sizeof(CharaIconCollisionFuncMOD_Params.randCounter), &randCounter, sizeof(randCounter));

	this->ProcessEvent(uFnCharaIconCollisionFuncMOD, &CharaIconCollisionFuncMOD_Params, nullptr);

	memcpy_s(&setCursor, sizeof(setCursor), &CharaIconCollisionFuncMOD_Params.setCursor, sizeof(CharaIconCollisionFuncMOD_Params.setCursor));
	memcpy_s(&randCounter, sizeof(randCounter), &CharaIconCollisionFuncMOD_Params.randCounter, sizeof(CharaIconCollisionFuncMOD_Params.randCounter));

	return CharaIconCollisionFuncMOD_Params.ReturnValue;
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PosIncludeRectangleMOD
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam Param                          (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               xp                             (CPF_Const | CPF_Parm | CPF_OutParm)

bool UREDGfxMoviePlayer_MenuCharaSelectMOD20::PosIncludeRectangleMOD(struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPanelRectParam& Param, struct FVector2D& xp)
{
	static UFunction* uFnPosIncludeRectangleMOD = nullptr;

	if (!uFnPosIncludeRectangleMOD)
	{
		uFnPosIncludeRectangleMOD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPosIncludeRectangleMOD_Params PosIncludeRectangleMOD_Params;
	memset(&PosIncludeRectangleMOD_Params, 0, sizeof(PosIncludeRectangleMOD_Params));
	memcpy_s(&PosIncludeRectangleMOD_Params.Param, sizeof(PosIncludeRectangleMOD_Params.Param), &Param, sizeof(Param));
	memcpy_s(&PosIncludeRectangleMOD_Params.xp, sizeof(PosIncludeRectangleMOD_Params.xp), &xp, sizeof(xp));

	this->ProcessEvent(uFnPosIncludeRectangleMOD, &PosIncludeRectangleMOD_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PosIncludeRectangleMOD_Params.Param, sizeof(PosIncludeRectangleMOD_Params.Param));
	memcpy_s(&xp, sizeof(xp), &PosIncludeRectangleMOD_Params.xp, sizeof(PosIncludeRectangleMOD_Params.xp));

	return PosIncludeRectangleMOD_Params.ReturnValue;
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.GetHitRectangleMOD
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRandom                        (CPF_Parm)
// struct FVector2D               Pos1                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               Pos2                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               pos3                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               pos4                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               pos5                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               pos6                           (CPF_Parm | CPF_OutParm)
// struct FVector2D               Origin                         (CPF_Const | CPF_Parm | CPF_OutParm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::GetHitRectangleMOD(bool bRandom, struct FVector2D& Pos1, struct FVector2D& Pos2, struct FVector2D& pos3, struct FVector2D& pos4, struct FVector2D& pos5, struct FVector2D& pos6, struct FVector2D& Origin)
{
	static UFunction* uFnGetHitRectangleMOD = nullptr;

	if (!uFnGetHitRectangleMOD)
	{
		uFnGetHitRectangleMOD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execGetHitRectangleMOD_Params GetHitRectangleMOD_Params;
	memset(&GetHitRectangleMOD_Params, 0, sizeof(GetHitRectangleMOD_Params));
	GetHitRectangleMOD_Params.bRandom = bRandom;
	memcpy_s(&GetHitRectangleMOD_Params.Pos1, sizeof(GetHitRectangleMOD_Params.Pos1), &Pos1, sizeof(Pos1));
	memcpy_s(&GetHitRectangleMOD_Params.Pos2, sizeof(GetHitRectangleMOD_Params.Pos2), &Pos2, sizeof(Pos2));
	memcpy_s(&GetHitRectangleMOD_Params.pos3, sizeof(GetHitRectangleMOD_Params.pos3), &pos3, sizeof(pos3));
	memcpy_s(&GetHitRectangleMOD_Params.pos4, sizeof(GetHitRectangleMOD_Params.pos4), &pos4, sizeof(pos4));
	memcpy_s(&GetHitRectangleMOD_Params.pos5, sizeof(GetHitRectangleMOD_Params.pos5), &pos5, sizeof(pos5));
	memcpy_s(&GetHitRectangleMOD_Params.pos6, sizeof(GetHitRectangleMOD_Params.pos6), &pos6, sizeof(pos6));
	memcpy_s(&GetHitRectangleMOD_Params.Origin, sizeof(GetHitRectangleMOD_Params.Origin), &Origin, sizeof(Origin));

	this->ProcessEvent(uFnGetHitRectangleMOD, &GetHitRectangleMOD_Params, nullptr);

	memcpy_s(&Pos1, sizeof(Pos1), &GetHitRectangleMOD_Params.Pos1, sizeof(GetHitRectangleMOD_Params.Pos1));
	memcpy_s(&Pos2, sizeof(Pos2), &GetHitRectangleMOD_Params.Pos2, sizeof(GetHitRectangleMOD_Params.Pos2));
	memcpy_s(&pos3, sizeof(pos3), &GetHitRectangleMOD_Params.pos3, sizeof(GetHitRectangleMOD_Params.pos3));
	memcpy_s(&pos4, sizeof(pos4), &GetHitRectangleMOD_Params.pos4, sizeof(GetHitRectangleMOD_Params.pos4));
	memcpy_s(&pos5, sizeof(pos5), &GetHitRectangleMOD_Params.pos5, sizeof(GetHitRectangleMOD_Params.pos5));
	memcpy_s(&pos6, sizeof(pos6), &GetHitRectangleMOD_Params.pos6, sizeof(GetHitRectangleMOD_Params.pos6));
	memcpy_s(&Origin, sizeof(Origin), &GetHitRectangleMOD_Params.Origin, sizeof(GetHitRectangleMOD_Params.Origin));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PosIncludeTriangleMOD
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               tp1                            (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               tp2                            (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               tp3                            (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               xp                             (CPF_Const | CPF_Parm | CPF_OutParm)

bool UREDGfxMoviePlayer_MenuCharaSelectMOD20::PosIncludeTriangleMOD(struct FVector2D& tp1, struct FVector2D& tp2, struct FVector2D& tp3, struct FVector2D& xp)
{
	static UFunction* uFnPosIncludeTriangleMOD = nullptr;

	if (!uFnPosIncludeTriangleMOD)
	{
		uFnPosIncludeTriangleMOD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPosIncludeTriangleMOD_Params PosIncludeTriangleMOD_Params;
	memset(&PosIncludeTriangleMOD_Params, 0, sizeof(PosIncludeTriangleMOD_Params));
	memcpy_s(&PosIncludeTriangleMOD_Params.tp1, sizeof(PosIncludeTriangleMOD_Params.tp1), &tp1, sizeof(tp1));
	memcpy_s(&PosIncludeTriangleMOD_Params.tp2, sizeof(PosIncludeTriangleMOD_Params.tp2), &tp2, sizeof(tp2));
	memcpy_s(&PosIncludeTriangleMOD_Params.tp3, sizeof(PosIncludeTriangleMOD_Params.tp3), &tp3, sizeof(tp3));
	memcpy_s(&PosIncludeTriangleMOD_Params.xp, sizeof(PosIncludeTriangleMOD_Params.xp), &xp, sizeof(xp));

	this->ProcessEvent(uFnPosIncludeTriangleMOD, &PosIncludeTriangleMOD_Params, nullptr);

	memcpy_s(&tp1, sizeof(tp1), &PosIncludeTriangleMOD_Params.tp1, sizeof(PosIncludeTriangleMOD_Params.tp1));
	memcpy_s(&tp2, sizeof(tp2), &PosIncludeTriangleMOD_Params.tp2, sizeof(PosIncludeTriangleMOD_Params.tp2));
	memcpy_s(&tp3, sizeof(tp3), &PosIncludeTriangleMOD_Params.tp3, sizeof(PosIncludeTriangleMOD_Params.tp3));
	memcpy_s(&xp, sizeof(xp), &PosIncludeTriangleMOD_Params.xp, sizeof(PosIncludeTriangleMOD_Params.xp));

	return PosIncludeTriangleMOD_Params.ReturnValue;
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.CheckIntersectMOD
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               P1                             (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               P2                             (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               p3                             (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FVector2D               p4                             (CPF_Const | CPF_Parm | CPF_OutParm)

float UREDGfxMoviePlayer_MenuCharaSelectMOD20::CheckIntersectMOD(struct FVector2D& P1, struct FVector2D& P2, struct FVector2D& p3, struct FVector2D& p4)
{
	static UFunction* uFnCheckIntersectMOD = nullptr;

	if (!uFnCheckIntersectMOD)
	{
		uFnCheckIntersectMOD = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execCheckIntersectMOD_Params CheckIntersectMOD_Params;
	memset(&CheckIntersectMOD_Params, 0, sizeof(CheckIntersectMOD_Params));
	memcpy_s(&CheckIntersectMOD_Params.P1, sizeof(CheckIntersectMOD_Params.P1), &P1, sizeof(P1));
	memcpy_s(&CheckIntersectMOD_Params.P2, sizeof(CheckIntersectMOD_Params.P2), &P2, sizeof(P2));
	memcpy_s(&CheckIntersectMOD_Params.p3, sizeof(CheckIntersectMOD_Params.p3), &p3, sizeof(p3));
	memcpy_s(&CheckIntersectMOD_Params.p4, sizeof(CheckIntersectMOD_Params.p4), &p4, sizeof(p4));

	this->ProcessEvent(uFnCheckIntersectMOD, &CheckIntersectMOD_Params, nullptr);

	memcpy_s(&P1, sizeof(P1), &CheckIntersectMOD_Params.P1, sizeof(CheckIntersectMOD_Params.P1));
	memcpy_s(&P2, sizeof(P2), &CheckIntersectMOD_Params.P2, sizeof(CheckIntersectMOD_Params.P2));
	memcpy_s(&p3, sizeof(p3), &CheckIntersectMOD_Params.p3, sizeof(CheckIntersectMOD_Params.p3));
	memcpy_s(&p4, sizeof(p4), &CheckIntersectMOD_Params.p4, sizeof(CheckIntersectMOD_Params.p4));

	return CheckIntersectMOD_Params.ReturnValue;
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCursorAnim
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODCursorAnim()
{
	static UFunction* uFnUpdateMODCursorAnim = nullptr;

	if (!uFnUpdateMODCursorAnim)
	{
		uFnUpdateMODCursorAnim = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCursorAnim_Params UpdateMODCursorAnim_Params;
	memset(&UpdateMODCursorAnim_Params, 0, sizeof(UpdateMODCursorAnim_Params));

	this->ProcessEvent(uFnUpdateMODCursorAnim, &UpdateMODCursorAnim_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCursorFunc
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Side                           (CPF_Parm)
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct FVector2D               CursorPos                      (CPF_Parm | CPF_OutParm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODCursorFunc(EUE_PLAYER_ID Side, EUE_PLAYER_ID Player, struct FVector2D& CursorPos)
{
	static UFunction* uFnUpdateMODCursorFunc = nullptr;

	if (!uFnUpdateMODCursorFunc)
	{
		uFnUpdateMODCursorFunc = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCursorFunc_Params UpdateMODCursorFunc_Params;
	memset(&UpdateMODCursorFunc_Params, 0, sizeof(UpdateMODCursorFunc_Params));
	memcpy_s(&UpdateMODCursorFunc_Params.Side, sizeof(UpdateMODCursorFunc_Params.Side), &Side, sizeof(Side));
	memcpy_s(&UpdateMODCursorFunc_Params.Player, sizeof(UpdateMODCursorFunc_Params.Player), &Player, sizeof(Player));
	memcpy_s(&UpdateMODCursorFunc_Params.CursorPos, sizeof(UpdateMODCursorFunc_Params.CursorPos), &CursorPos, sizeof(CursorPos));

	this->ProcessEvent(uFnUpdateMODCursorFunc, &UpdateMODCursorFunc_Params, nullptr);

	memcpy_s(&CursorPos, sizeof(CursorPos), &UpdateMODCursorFunc_Params.CursorPos, sizeof(UpdateMODCursorFunc_Params.CursorPos));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.Player_InitCardLoad
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::Player_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayer_InitCardLoad = nullptr;

	if (!uFnPlayer_InitCardLoad)
	{
		uFnPlayer_InitCardLoad = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayer_InitCardLoad_Params Player_InitCardLoad_Params;
	memset(&Player_InitCardLoad_Params, 0, sizeof(Player_InitCardLoad_Params));
	memcpy_s(&Player_InitCardLoad_Params.Player, sizeof(Player_InitCardLoad_Params.Player), &Player, sizeof(Player));
	memcpy_s(&Player_InitCardLoad_Params.Param, sizeof(Player_InitCardLoad_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayer_InitCardLoad, &Player_InitCardLoad_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &Player_InitCardLoad_Params.Param, sizeof(Player_InitCardLoad_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODFinish
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bTrigger                       (CPF_Parm)

bool UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODFinish(bool bTrigger)
{
	static UFunction* uFnUpdateMODFinish = nullptr;

	if (!uFnUpdateMODFinish)
	{
		uFnUpdateMODFinish = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODFinish_Params UpdateMODFinish_Params;
	memset(&UpdateMODFinish_Params, 0, sizeof(UpdateMODFinish_Params));
	UpdateMODFinish_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODFinish, &UpdateMODFinish_Params, nullptr);

	return UpdateMODFinish_Params.ReturnValue;
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODRannyuToSelect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODRannyuToSelect(bool bTrigger)
{
	static UFunction* uFnUpdateMODRannyuToSelect = nullptr;

	if (!uFnUpdateMODRannyuToSelect)
	{
		uFnUpdateMODRannyuToSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODRannyuToSelect_Params UpdateMODRannyuToSelect_Params;
	memset(&UpdateMODRannyuToSelect_Params, 0, sizeof(UpdateMODRannyuToSelect_Params));
	UpdateMODRannyuToSelect_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODRannyuToSelect, &UpdateMODRannyuToSelect_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMStage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODMOMStage(bool bTrigger)
{
	static UFunction* uFnUpdateMODMOMStage = nullptr;

	if (!uFnUpdateMODMOMStage)
	{
		uFnUpdateMODMOMStage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMStage_Params UpdateMODMOMStage_Params;
	memset(&UpdateMODMOMStage_Params, 0, sizeof(UpdateMODMOMStage_Params));
	UpdateMODMOMStage_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODMOMStage, &UpdateMODMOMStage_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMMain
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODMOMMain(bool bTrigger)
{
	static UFunction* uFnUpdateMODMOMMain = nullptr;

	if (!uFnUpdateMODMOMMain)
	{
		uFnUpdateMODMOMMain = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMMain_Params UpdateMODMOMMain_Params;
	memset(&UpdateMODMOMMain_Params, 0, sizeof(UpdateMODMOMMain_Params));
	UpdateMODMOMMain_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODMOMMain, &UpdateMODMOMMain_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMHelp
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODMOMHelp(bool bTrigger)
{
	static UFunction* uFnUpdateMODMOMHelp = nullptr;

	if (!uFnUpdateMODMOMHelp)
	{
		uFnUpdateMODMOMHelp = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMHelp_Params UpdateMODMOMHelp_Params;
	memset(&UpdateMODMOMHelp_Params, 0, sizeof(UpdateMODMOMHelp_Params));
	UpdateMODMOMHelp_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODMOMHelp, &UpdateMODMOMHelp_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODMOMPreset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODMOMPreset(bool bTrigger)
{
	static UFunction* uFnUpdateMODMOMPreset = nullptr;

	if (!uFnUpdateMODMOMPreset)
	{
		uFnUpdateMODMOMPreset = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODMOMPreset_Params UpdateMODMOMPreset_Params;
	memset(&UpdateMODMOMPreset_Params, 0, sizeof(UpdateMODMOMPreset_Params));
	UpdateMODMOMPreset_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODMOMPreset, &UpdateMODMOMPreset_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODModeSelect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODModeSelect(bool bTrigger)
{
	static UFunction* uFnUpdateMODModeSelect = nullptr;

	if (!uFnUpdateMODModeSelect)
	{
		uFnUpdateMODModeSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODModeSelect_Params UpdateMODModeSelect_Params;
	memset(&UpdateMODModeSelect_Params, 0, sizeof(UpdateMODModeSelect_Params));
	UpdateMODModeSelect_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODModeSelect, &UpdateMODModeSelect_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODStartDemo
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODStartDemo(bool bTrigger)
{
	static UFunction* uFnUpdateMODStartDemo = nullptr;

	if (!uFnUpdateMODStartDemo)
	{
		uFnUpdateMODStartDemo = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODStartDemo_Params UpdateMODStartDemo_Params;
	memset(&UpdateMODStartDemo_Params, 0, sizeof(UpdateMODStartDemo_Params));
	UpdateMODStartDemo_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODStartDemo, &UpdateMODStartDemo_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.FinalizeScene
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::FinalizeScene()
{
	static UFunction* uFnFinalizeScene = nullptr;

	if (!uFnFinalizeScene)
	{
		uFnFinalizeScene = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execFinalizeScene_Params FinalizeScene_Params;
	memset(&FinalizeScene_Params, 0, sizeof(FinalizeScene_Params));

	this->ProcessEvent(uFnFinalizeScene, &FinalizeScene_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCustomMenu
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODCustomMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODCustomMenu = nullptr;

	if (!uFnPlayerMOD_UpdateMODCustomMenu)
	{
		uFnPlayerMOD_UpdateMODCustomMenu = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCustomMenu_Params PlayerMOD_UpdateMODCustomMenu_Params;
	memset(&PlayerMOD_UpdateMODCustomMenu_Params, 0, sizeof(PlayerMOD_UpdateMODCustomMenu_Params));
	memcpy_s(&PlayerMOD_UpdateMODCustomMenu_Params.Player, sizeof(PlayerMOD_UpdateMODCustomMenu_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODCustomMenu_Params.Param, sizeof(PlayerMOD_UpdateMODCustomMenu_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODCustomMenu, &PlayerMOD_UpdateMODCustomMenu_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODCustomMenu_Params.Param, sizeof(PlayerMOD_UpdateMODCustomMenu_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCustomPanelFocus
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODCustomPanelFocus(EUE_PLAYER_ID Player)
{
	static UFunction* uFnUpdateMODCustomPanelFocus = nullptr;

	if (!uFnUpdateMODCustomPanelFocus)
	{
		uFnUpdateMODCustomPanelFocus = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCustomPanelFocus_Params UpdateMODCustomPanelFocus_Params;
	memset(&UpdateMODCustomPanelFocus_Params, 0, sizeof(UpdateMODCustomPanelFocus_Params));
	memcpy_s(&UpdateMODCustomPanelFocus_Params.Player, sizeof(UpdateMODCustomPanelFocus_Params.Player), &Player, sizeof(Player));

	this->ProcessEvent(uFnUpdateMODCustomPanelFocus, &UpdateMODCustomPanelFocus_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODReturnToMainMenu
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODReturnToMainMenu(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODReturnToMainMenu = nullptr;

	if (!uFnPlayerMOD_UpdateMODReturnToMainMenu)
	{
		uFnPlayerMOD_UpdateMODReturnToMainMenu = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODReturnToMainMenu_Params PlayerMOD_UpdateMODReturnToMainMenu_Params;
	memset(&PlayerMOD_UpdateMODReturnToMainMenu_Params, 0, sizeof(PlayerMOD_UpdateMODReturnToMainMenu_Params));
	memcpy_s(&PlayerMOD_UpdateMODReturnToMainMenu_Params.Player, sizeof(PlayerMOD_UpdateMODReturnToMainMenu_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODReturnToMainMenu_Params.Param, sizeof(PlayerMOD_UpdateMODReturnToMainMenu_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODReturnToMainMenu, &PlayerMOD_UpdateMODReturnToMainMenu_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODReturnToMainMenu_Params.Param, sizeof(PlayerMOD_UpdateMODReturnToMainMenu_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODBGSelect
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODBGSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODBGSelect = nullptr;

	if (!uFnPlayerMOD_UpdateMODBGSelect)
	{
		uFnPlayerMOD_UpdateMODBGSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODBGSelect_Params PlayerMOD_UpdateMODBGSelect_Params;
	memset(&PlayerMOD_UpdateMODBGSelect_Params, 0, sizeof(PlayerMOD_UpdateMODBGSelect_Params));
	memcpy_s(&PlayerMOD_UpdateMODBGSelect_Params.Player, sizeof(PlayerMOD_UpdateMODBGSelect_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODBGSelect_Params.Param, sizeof(PlayerMOD_UpdateMODBGSelect_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODBGSelect, &PlayerMOD_UpdateMODBGSelect_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODBGSelect_Params.Param, sizeof(PlayerMOD_UpdateMODBGSelect_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODTrialSelect
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODTrialSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODTrialSelect = nullptr;

	if (!uFnPlayerMOD_UpdateMODTrialSelect)
	{
		uFnPlayerMOD_UpdateMODTrialSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODTrialSelect_Params PlayerMOD_UpdateMODTrialSelect_Params;
	memset(&PlayerMOD_UpdateMODTrialSelect_Params, 0, sizeof(PlayerMOD_UpdateMODTrialSelect_Params));
	memcpy_s(&PlayerMOD_UpdateMODTrialSelect_Params.Player, sizeof(PlayerMOD_UpdateMODTrialSelect_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODTrialSelect_Params.Param, sizeof(PlayerMOD_UpdateMODTrialSelect_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODTrialSelect, &PlayerMOD_UpdateMODTrialSelect_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODTrialSelect_Params.Param, sizeof(PlayerMOD_UpdateMODTrialSelect_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODHandicapSetting
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODHandicapSetting(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODHandicapSetting = nullptr;

	if (!uFnPlayerMOD_UpdateMODHandicapSetting)
	{
		uFnPlayerMOD_UpdateMODHandicapSetting = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODHandicapSetting_Params PlayerMOD_UpdateMODHandicapSetting_Params;
	memset(&PlayerMOD_UpdateMODHandicapSetting_Params, 0, sizeof(PlayerMOD_UpdateMODHandicapSetting_Params));
	memcpy_s(&PlayerMOD_UpdateMODHandicapSetting_Params.Player, sizeof(PlayerMOD_UpdateMODHandicapSetting_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODHandicapSetting_Params.Param, sizeof(PlayerMOD_UpdateMODHandicapSetting_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODHandicapSetting, &PlayerMOD_UpdateMODHandicapSetting_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODHandicapSetting_Params.Param, sizeof(PlayerMOD_UpdateMODHandicapSetting_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCharaSelect
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODCharaSelect = nullptr;

	if (!uFnPlayerMOD_UpdateMODCharaSelect)
	{
		uFnPlayerMOD_UpdateMODCharaSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCharaSelect_Params PlayerMOD_UpdateMODCharaSelect_Params;
	memset(&PlayerMOD_UpdateMODCharaSelect_Params, 0, sizeof(PlayerMOD_UpdateMODCharaSelect_Params));
	memcpy_s(&PlayerMOD_UpdateMODCharaSelect_Params.Player, sizeof(PlayerMOD_UpdateMODCharaSelect_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODCharaSelect_Params.Param, sizeof(PlayerMOD_UpdateMODCharaSelect_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODCharaSelect, &PlayerMOD_UpdateMODCharaSelect_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODCharaSelect_Params.Param, sizeof(PlayerMOD_UpdateMODCharaSelect_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_PrepareUpdateMODCharaSelect
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_PrepareUpdateMODCharaSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_PrepareUpdateMODCharaSelect = nullptr;

	if (!uFnPlayerMOD_PrepareUpdateMODCharaSelect)
	{
		uFnPlayerMOD_PrepareUpdateMODCharaSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_PrepareUpdateMODCharaSelect_Params PlayerMOD_PrepareUpdateMODCharaSelect_Params;
	memset(&PlayerMOD_PrepareUpdateMODCharaSelect_Params, 0, sizeof(PlayerMOD_PrepareUpdateMODCharaSelect_Params));
	memcpy_s(&PlayerMOD_PrepareUpdateMODCharaSelect_Params.Player, sizeof(PlayerMOD_PrepareUpdateMODCharaSelect_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_PrepareUpdateMODCharaSelect_Params.Param, sizeof(PlayerMOD_PrepareUpdateMODCharaSelect_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_PrepareUpdateMODCharaSelect, &PlayerMOD_PrepareUpdateMODCharaSelect_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_PrepareUpdateMODCharaSelect_Params.Param, sizeof(PlayerMOD_PrepareUpdateMODCharaSelect_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODStyleSelectExe
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODStyleSelectExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODStyleSelectExe = nullptr;

	if (!uFnPlayerMOD_UpdateMODStyleSelectExe)
	{
		uFnPlayerMOD_UpdateMODStyleSelectExe = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODStyleSelectExe_Params PlayerMOD_UpdateMODStyleSelectExe_Params;
	memset(&PlayerMOD_UpdateMODStyleSelectExe_Params, 0, sizeof(PlayerMOD_UpdateMODStyleSelectExe_Params));
	memcpy_s(&PlayerMOD_UpdateMODStyleSelectExe_Params.Player, sizeof(PlayerMOD_UpdateMODStyleSelectExe_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODStyleSelectExe_Params.Param, sizeof(PlayerMOD_UpdateMODStyleSelectExe_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODStyleSelectExe, &PlayerMOD_UpdateMODStyleSelectExe_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODStyleSelectExe_Params.Param, sizeof(PlayerMOD_UpdateMODStyleSelectExe_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODStyleSelect
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODStyleSelect(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODStyleSelect = nullptr;

	if (!uFnPlayerMOD_UpdateMODStyleSelect)
	{
		uFnPlayerMOD_UpdateMODStyleSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODStyleSelect_Params PlayerMOD_UpdateMODStyleSelect_Params;
	memset(&PlayerMOD_UpdateMODStyleSelect_Params, 0, sizeof(PlayerMOD_UpdateMODStyleSelect_Params));
	memcpy_s(&PlayerMOD_UpdateMODStyleSelect_Params.Player, sizeof(PlayerMOD_UpdateMODStyleSelect_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODStyleSelect_Params.Param, sizeof(PlayerMOD_UpdateMODStyleSelect_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODStyleSelect, &PlayerMOD_UpdateMODStyleSelect_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODStyleSelect_Params.Param, sizeof(PlayerMOD_UpdateMODStyleSelect_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODSkipCheckExe
// [0x00C20002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODSkipCheckExe(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODSkipCheckExe = nullptr;

	if (!uFnPlayerMOD_UpdateMODSkipCheckExe)
	{
		uFnPlayerMOD_UpdateMODSkipCheckExe = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODSkipCheckExe_Params PlayerMOD_UpdateMODSkipCheckExe_Params;
	memset(&PlayerMOD_UpdateMODSkipCheckExe_Params, 0, sizeof(PlayerMOD_UpdateMODSkipCheckExe_Params));
	memcpy_s(&PlayerMOD_UpdateMODSkipCheckExe_Params.Player, sizeof(PlayerMOD_UpdateMODSkipCheckExe_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODSkipCheckExe_Params.Param, sizeof(PlayerMOD_UpdateMODSkipCheckExe_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODSkipCheckExe, &PlayerMOD_UpdateMODSkipCheckExe_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODSkipCheckExe_Params.Param, sizeof(PlayerMOD_UpdateMODSkipCheckExe_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODSkipCheck
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODSkipCheck(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODSkipCheck = nullptr;

	if (!uFnPlayerMOD_UpdateMODSkipCheck)
	{
		uFnPlayerMOD_UpdateMODSkipCheck = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODSkipCheck_Params PlayerMOD_UpdateMODSkipCheck_Params;
	memset(&PlayerMOD_UpdateMODSkipCheck_Params, 0, sizeof(PlayerMOD_UpdateMODSkipCheck_Params));
	memcpy_s(&PlayerMOD_UpdateMODSkipCheck_Params.Player, sizeof(PlayerMOD_UpdateMODSkipCheck_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODSkipCheck_Params.Param, sizeof(PlayerMOD_UpdateMODSkipCheck_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODSkipCheck, &PlayerMOD_UpdateMODSkipCheck_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODSkipCheck_Params.Param, sizeof(PlayerMOD_UpdateMODSkipCheck_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODQuestConfirm
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODQuestConfirm(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODQuestConfirm = nullptr;

	if (!uFnPlayerMOD_UpdateMODQuestConfirm)
	{
		uFnPlayerMOD_UpdateMODQuestConfirm = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODQuestConfirm_Params PlayerMOD_UpdateMODQuestConfirm_Params;
	memset(&PlayerMOD_UpdateMODQuestConfirm_Params, 0, sizeof(PlayerMOD_UpdateMODQuestConfirm_Params));
	memcpy_s(&PlayerMOD_UpdateMODQuestConfirm_Params.Player, sizeof(PlayerMOD_UpdateMODQuestConfirm_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODQuestConfirm_Params.Param, sizeof(PlayerMOD_UpdateMODQuestConfirm_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODQuestConfirm, &PlayerMOD_UpdateMODQuestConfirm_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODQuestConfirm_Params.Param, sizeof(PlayerMOD_UpdateMODQuestConfirm_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_UpdateMODCardLoad
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_UpdateMODCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_UpdateMODCardLoad = nullptr;

	if (!uFnPlayerMOD_UpdateMODCardLoad)
	{
		uFnPlayerMOD_UpdateMODCardLoad = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_UpdateMODCardLoad_Params PlayerMOD_UpdateMODCardLoad_Params;
	memset(&PlayerMOD_UpdateMODCardLoad_Params, 0, sizeof(PlayerMOD_UpdateMODCardLoad_Params));
	memcpy_s(&PlayerMOD_UpdateMODCardLoad_Params.Player, sizeof(PlayerMOD_UpdateMODCardLoad_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_UpdateMODCardLoad_Params.Param, sizeof(PlayerMOD_UpdateMODCardLoad_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_UpdateMODCardLoad, &PlayerMOD_UpdateMODCardLoad_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_UpdateMODCardLoad_Params.Param, sizeof(PlayerMOD_UpdateMODCardLoad_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.PlayerMOD_InitCardLoad
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// EUE_PLAYER_ID                  Player                         (CPF_Parm)
// struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam Param                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::PlayerMOD_InitCardLoad(EUE_PLAYER_ID Player, struct UREDGfxMoviePlayer_MenuCharaSelect_AC20_FCharaSelectPlayerParam& Param)
{
	static UFunction* uFnPlayerMOD_InitCardLoad = nullptr;

	if (!uFnPlayerMOD_InitCardLoad)
	{
		uFnPlayerMOD_InitCardLoad = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execPlayerMOD_InitCardLoad_Params PlayerMOD_InitCardLoad_Params;
	memset(&PlayerMOD_InitCardLoad_Params, 0, sizeof(PlayerMOD_InitCardLoad_Params));
	memcpy_s(&PlayerMOD_InitCardLoad_Params.Player, sizeof(PlayerMOD_InitCardLoad_Params.Player), &Player, sizeof(Player));
	memcpy_s(&PlayerMOD_InitCardLoad_Params.Param, sizeof(PlayerMOD_InitCardLoad_Params.Param), &Param, sizeof(Param));

	this->ProcessEvent(uFnPlayerMOD_InitCardLoad, &PlayerMOD_InitCardLoad_Params, nullptr);

	memcpy_s(&Param, sizeof(Param), &PlayerMOD_InitCardLoad_Params.Param, sizeof(PlayerMOD_InitCardLoad_Params.Param));
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.UpdateMODCharaSelect
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::UpdateMODCharaSelect(bool bTrigger)
{
	static UFunction* uFnUpdateMODCharaSelect = nullptr;

	if (!uFnUpdateMODCharaSelect)
	{
		uFnUpdateMODCharaSelect = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execUpdateMODCharaSelect_Params UpdateMODCharaSelect_Params;
	memset(&UpdateMODCharaSelect_Params, 0, sizeof(UpdateMODCharaSelect_Params));
	UpdateMODCharaSelect_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnUpdateMODCharaSelect, &UpdateMODCharaSelect_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.OnUpdate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bTrigger                       (CPF_Parm)

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::OnUpdate(bool bTrigger)
{
	static UFunction* uFnOnUpdate = nullptr;

	if (!uFnOnUpdate)
	{
		uFnOnUpdate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execOnUpdate_Params OnUpdate_Params;
	memset(&OnUpdate_Params, 0, sizeof(OnUpdate_Params));
	OnUpdate_Params.bTrigger = bTrigger;

	this->ProcessEvent(uFnOnUpdate, &OnUpdate_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.InitializeScene
// [0x00820002] (FUNC_Defined | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::InitializeScene()
{
	static UFunction* uFnInitializeScene = nullptr;

	if (!uFnInitializeScene)
	{
		uFnInitializeScene = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execInitializeScene_Params InitializeScene_Params;
	memset(&InitializeScene_Params, 0, sizeof(InitializeScene_Params));

	this->ProcessEvent(uFnInitializeScene, &InitializeScene_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuCharaSelectMOD20.SetupSelectableChara
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMoviePlayer_MenuCharaSelectMOD20::SetupSelectableChara()
{
	static UFunction* uFnSetupSelectableChara = nullptr;

	if (!uFnSetupSelectableChara)
	{
		uFnSetupSelectableChara = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUCHARASELECTMOD20));
	}

	UREDGfxMoviePlayer_MenuCharaSelectMOD20_execSetupSelectableChara_Params SetupSelectableChara_Params;
	memset(&SetupSelectableChara_Params, 0, sizeof(SetupSelectableChara_Params));

	this->ProcessEvent(uFnSetupSelectableChara, &SetupSelectableChara_Params, nullptr);
};

// Function helper.REDGfxMoviePlayer_MenuInterludeMOD.OnInitialize
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UREDGfxMoviePlayer_MenuInterludeMOD::OnInitialize()
{
	static UFunction* uFnOnInitialize = nullptr;

	if (!uFnOnInitialize)
	{
		uFnOnInitialize = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_HELPER_REDGFXMOVIEPLAYER_MENUINTERLUDEMOD));
	}

	UREDGfxMoviePlayer_MenuInterludeMOD_execOnInitialize_Params OnInitialize_Params;
	memset(&OnInitialize_Params, 0, sizeof(OnInitialize_Params));

	this->ProcessEvent(uFnOnInitialize, &OnInitialize_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
