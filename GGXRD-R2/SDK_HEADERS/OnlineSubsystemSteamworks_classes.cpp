/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21966])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(int32_t& OutServerIP, int32_t& OutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params GetServerAddr_Params;
	memset(&GetServerAddr_Params, 0, sizeof(GetServerAddr_Params));
	memcpy_s(&GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP), &OutServerIP, sizeof(OutServerIP));
	memcpy_s(&GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort), &OutServerPort, sizeof(OutServerPort));

	uFnGetServerAddr->iNative = 0;
	uFnGetServerAddr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);
	uFnGetServerAddr->FunctionFlags |= 0x400;
	uFnGetServerAddr->iNative = 21966;

	memcpy_s(&OutServerIP, sizeof(OutServerIP), &GetServerAddr_Params.OutServerIP, sizeof(GetServerAddr_Params.OutServerIP));
	memcpy_s(&OutServerPort, sizeof(OutServerPort), &GetServerAddr_Params.OutServerPort, sizeof(GetServerAddr_Params.OutServerPort));

	return GetServerAddr_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21969])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memset(&GetServerUniqueId_Params, 0, sizeof(GetServerUniqueId_Params));
	memcpy_s(&GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID), &OutServerUID, sizeof(OutServerUID));

	uFnGetServerUniqueId->iNative = 0;
	uFnGetServerUniqueId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);
	uFnGetServerUniqueId->FunctionFlags |= 0x400;
	uFnGetServerUniqueId->iNative = 21969;

	memcpy_s(&OutServerUID, sizeof(OutServerUID), &GetServerUniqueId_Params.OutServerUID, sizeof(GetServerUniqueId_Params.OutServerUID));

	return GetServerUniqueId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30009])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memset(&VerifyServerAuthSession_Params, 0, sizeof(VerifyServerAuthSession_Params));
	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, sizeof(VerifyServerAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&VerifyServerAuthSession_Params.ServerIP, sizeof(VerifyServerAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&VerifyServerAuthSession_Params.AuthTicketUID, sizeof(VerifyServerAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	uFnVerifyServerAuthSession->iNative = 0;
	uFnVerifyServerAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);
	uFnVerifyServerAuthSession->FunctionFlags |= 0x400;
	uFnVerifyServerAuthSession->iNative = 30009;

	return VerifyServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[18991])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memset(&CreateServerAuthSession_Params, 0, sizeof(CreateServerAuthSession_Params));
	memcpy_s(&CreateServerAuthSession_Params.ClientUID, sizeof(CreateServerAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&CreateServerAuthSession_Params.ClientIP, sizeof(CreateServerAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&CreateServerAuthSession_Params.ClientPort, sizeof(CreateServerAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	uFnCreateServerAuthSession->iNative = 0;
	uFnCreateServerAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);
	uFnCreateServerAuthSession->FunctionFlags |= 0x400;
	uFnCreateServerAuthSession->iNative = 18991;

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateServerAuthSession_Params.OutAuthTicketUID, sizeof(CreateServerAuthSession_Params.OutAuthTicketUID));

	return CreateServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30005])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// int32_t                        ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memset(&VerifyClientAuthSession_Params, 0, sizeof(VerifyClientAuthSession_Params));
	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, sizeof(VerifyClientAuthSession_Params.ClientUID), &ClientUID, sizeof(ClientUID));
	memcpy_s(&VerifyClientAuthSession_Params.ClientIP, sizeof(VerifyClientAuthSession_Params.ClientIP), &ClientIP, sizeof(ClientIP));
	memcpy_s(&VerifyClientAuthSession_Params.ClientPort, sizeof(VerifyClientAuthSession_Params.ClientPort), &ClientPort, sizeof(ClientPort));
	memcpy_s(&VerifyClientAuthSession_Params.AuthTicketUID, sizeof(VerifyClientAuthSession_Params.AuthTicketUID), &AuthTicketUID, sizeof(AuthTicketUID));

	uFnVerifyClientAuthSession->iNative = 0;
	uFnVerifyClientAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);
	uFnVerifyClientAuthSession->FunctionFlags |= 0x400;
	uFnVerifyClientAuthSession->iNative = 30005;

	return VerifyClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[18977])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// int32_t                        ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// uint32_t                       bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int32_t ServerIP, int32_t ServerPort, bool bSecure, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memset(&CreateClientAuthSession_Params, 0, sizeof(CreateClientAuthSession_Params));
	memcpy_s(&CreateClientAuthSession_Params.ServerUID, sizeof(CreateClientAuthSession_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&CreateClientAuthSession_Params.ServerIP, sizeof(CreateClientAuthSession_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&CreateClientAuthSession_Params.ServerPort, sizeof(CreateClientAuthSession_Params.ServerPort), &ServerPort, sizeof(ServerPort));
	CreateClientAuthSession_Params.bSecure = bSecure;
	memcpy_s(&CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID), &OutAuthTicketUID, sizeof(OutAuthTicketUID));

	uFnCreateClientAuthSession->iNative = 0;
	uFnCreateClientAuthSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);
	uFnCreateClientAuthSession->FunctionFlags |= 0x400;
	uFnCreateClientAuthSession->iNative = 18977;

	memcpy_s(&OutAuthTicketUID, sizeof(OutAuthTicketUID), &CreateClientAuthSession_Params.OutAuthTicketUID, sizeof(CreateClientAuthSession_Params.OutAuthTicketUID));

	return CreateClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27683])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memset(&SendServerAuthRequest_Params, 0, sizeof(SendServerAuthRequest_Params));
	memcpy_s(&SendServerAuthRequest_Params.ServerUID, sizeof(SendServerAuthRequest_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnSendServerAuthRequest->iNative = 0;
	uFnSendServerAuthRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);
	uFnSendServerAuthRequest->FunctionFlags |= 0x400;
	uFnSendServerAuthRequest->iNative = 27683;

	return SendServerAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27666])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEAUTHINTERFACESTEAMWORKS));
	}

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memset(&SendClientAuthRequest_Params, 0, sizeof(SendClientAuthRequest_Params));
	SendClientAuthRequest_Params.ClientConnection = ClientConnection;
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, sizeof(SendClientAuthRequest_Params.ClientUID), &ClientUID, sizeof(ClientUID));

	uFnSendClientAuthRequest->iNative = 0;
	uFnSendClientAuthRequest->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);
	uFnSendClientAuthRequest->FunctionFlags |= 0x400;
	uFnSendClientAuthRequest->iNative = 27666;

	return SendClientAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memset(&QueryNonAdvertisedData_Params, 0, sizeof(QueryNonAdvertisedData_Params));
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, sizeof(QueryNonAdvertisedData_Params.StartAt), &StartAt, sizeof(StartAt));
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, sizeof(QueryNonAdvertisedData_Params.NumberToQuery), &NumberToQuery, sizeof(NumberToQuery));

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memset(&ClearUnregisterPlayerCompleteDelegate_Params, 0, sizeof(ClearUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memset(&AddUnregisterPlayerCompleteDelegate_Params, 0, sizeof(AddUnregisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, sizeof(AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate), &UnregisterPlayerCompleteDelegate, sizeof(UnregisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29783])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memset(&UnregisterPlayer_Params, 0, sizeof(UnregisterPlayer_Params));
	memcpy_s(&UnregisterPlayer_Params.SessionName, sizeof(UnregisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&UnregisterPlayer_Params.PlayerID, sizeof(UnregisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnUnregisterPlayer->iNative = 0;
	uFnUnregisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);
	uFnUnregisterPlayer->FunctionFlags |= 0x400;
	uFnUnregisterPlayer->iNative = 29783;

	return UnregisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memset(&ClearRegisterPlayerCompleteDelegate_Params, 0, sizeof(ClearRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memset(&AddRegisterPlayerCompleteDelegate_Params, 0, sizeof(AddRegisterPlayerCompleteDelegate_Params));
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, sizeof(AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate), &RegisterPlayerCompleteDelegate, sizeof(RegisterPlayerCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27019])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params RegisterPlayer_Params;
	memset(&RegisterPlayer_Params, 0, sizeof(RegisterPlayer_Params));
	memcpy_s(&RegisterPlayer_Params.SessionName, sizeof(RegisterPlayer_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&RegisterPlayer_Params.PlayerID, sizeof(RegisterPlayer_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	uFnRegisterPlayer->iNative = 0;
	uFnRegisterPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);
	uFnRegisterPlayer->FunctionFlags |= 0x400;
	uFnRegisterPlayer->iNative = 27019;

	return RegisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[14414])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memset(&AcceptGameInvite_Params, 0, sizeof(AcceptGameInvite_Params));
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, sizeof(AcceptGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptGameInvite_Params.SessionName, sizeof(AcceptGameInvite_Params.SessionName), &SessionName, sizeof(SessionName));

	uFnAcceptGameInvite->iNative = 0;
	uFnAcceptGameInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);
	uFnAcceptGameInvite->FunctionFlags |= 0x400;
	uFnAcceptGameInvite->iNative = 14414;

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &InviteResult, sizeof(InviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, sizeof(InviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnClearGameInviteAcceptedDelegate = nullptr;

	if (!uFnClearGameInviteAcceptedDelegate)
	{
		uFnClearGameInviteAcceptedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Params ClearGameInviteAcceptedDelegate_Params;
	memset(&ClearGameInviteAcceptedDelegate_Params, 0, sizeof(ClearGameInviteAcceptedDelegate_Params));
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.LocalUserNum, sizeof(ClearGameInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(ClearGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static UFunction* uFnAddGameInviteAcceptedDelegate = nullptr;

	if (!uFnAddGameInviteAcceptedDelegate)
	{
		uFnAddGameInviteAcceptedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Params AddGameInviteAcceptedDelegate_Params;
	memset(&AddGameInviteAcceptedDelegate_Params, 0, sizeof(AddGameInviteAcceptedDelegate_Params));
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.LocalUserNum, sizeof(AddGameInviteAcceptedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate, sizeof(AddGameInviteAcceptedDelegate_Params.GameInviteAcceptedDelegate), &GameInviteAcceptedDelegate, sizeof(GameInviteAcceptedDelegate));

	this->ProcessEvent(uFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[29842])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// uint32_t                       bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINEGAMEINTERFACESTEAMWORKS));
	}

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memset(&UpdateOnlineGame_Params, 0, sizeof(UpdateOnlineGame_Params));
	memcpy_s(&UpdateOnlineGame_Params.SessionName, sizeof(UpdateOnlineGame_Params.SessionName), &SessionName, sizeof(SessionName));
	UpdateOnlineGame_Params.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	uFnUpdateOnlineGame->iNative = 0;
	uFnUpdateOnlineGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);
	uFnUpdateOnlineGame->FunctionFlags |= 0x400;
	uFnUpdateOnlineGame->iNative = 29842;

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35085])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bMarkAsJoined                  (CPF_OptionalParm | CPF_Parm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline(bool bMarkAsJoined, struct FUniqueNetId& LobbyId)
{
	static UFunction* uFnGetLobbyFromCommandline = nullptr;

	if (!uFnGetLobbyFromCommandline)
	{
		uFnGetLobbyFromCommandline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Params GetLobbyFromCommandline_Params;
	memset(&GetLobbyFromCommandline_Params, 0, sizeof(GetLobbyFromCommandline_Params));
	GetLobbyFromCommandline_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetLobbyFromCommandline_Params.LobbyId, sizeof(GetLobbyFromCommandline_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnGetLobbyFromCommandline->iNative = 0;
	uFnGetLobbyFromCommandline->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Params, nullptr);
	uFnGetLobbyFromCommandline->FunctionFlags |= 0x400;
	uFnGetLobbyFromCommandline->iNative = 35085;

	memcpy_s(&LobbyId, sizeof(LobbyId), &GetLobbyFromCommandline_Params.LobbyId, sizeof(GetLobbyFromCommandline_Params.LobbyId));

	return GetLobbyFromCommandline_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyInviteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate)
{
	static UFunction* uFnClearLobbyInviteDelegate = nullptr;

	if (!uFnClearLobbyInviteDelegate)
	{
		uFnClearLobbyInviteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyInviteDelegate_Params ClearLobbyInviteDelegate_Params;
	memset(&ClearLobbyInviteDelegate_Params, 0, sizeof(ClearLobbyInviteDelegate_Params));
	memcpy_s(&ClearLobbyInviteDelegate_Params.LobbyInviteDelegate, sizeof(ClearLobbyInviteDelegate_Params.LobbyInviteDelegate), &LobbyInviteDelegate, sizeof(LobbyInviteDelegate));

	this->ProcessEvent(uFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyInviteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyInviteDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate)
{
	static UFunction* uFnAddLobbyInviteDelegate = nullptr;

	if (!uFnAddLobbyInviteDelegate)
	{
		uFnAddLobbyInviteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyInviteDelegate_Params AddLobbyInviteDelegate_Params;
	memset(&AddLobbyInviteDelegate_Params, 0, sizeof(AddLobbyInviteDelegate_Params));
	memcpy_s(&AddLobbyInviteDelegate_Params.LobbyInviteDelegate, sizeof(AddLobbyInviteDelegate_Params.LobbyInviteDelegate), &LobbyInviteDelegate, sizeof(LobbyInviteDelegate));

	this->ProcessEvent(uFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyInvite
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// struct FUniqueNetId            FriendId                       (CPF_Parm)
// uint32_t                       bAccepted                      (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::OnLobbyInvite(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& FriendId, bool bAccepted)
{
	static UFunction* uFnOnLobbyInvite = nullptr;

	if (!uFnOnLobbyInvite)
	{
		uFnOnLobbyInvite = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyInvite_Params OnLobbyInvite_Params;
	memset(&OnLobbyInvite_Params, 0, sizeof(OnLobbyInvite_Params));
	memcpy_s(&OnLobbyInvite_Params.LobbyId, sizeof(OnLobbyInvite_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&OnLobbyInvite_Params.FriendId, sizeof(OnLobbyInvite_Params.FriendId), &FriendId, sizeof(FriendId));
	OnLobbyInvite_Params.bAccepted = bAccepted;

	this->ProcessEvent(uFnOnLobbyInvite, &OnLobbyInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35097])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnInviteToLobby = nullptr;

	if (!uFnInviteToLobby)
	{
		uFnInviteToLobby = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Params InviteToLobby_Params;
	memset(&InviteToLobby_Params, 0, sizeof(InviteToLobby_Params));
	memcpy_s(&InviteToLobby_Params.LobbyId, sizeof(InviteToLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&InviteToLobby_Params.PlayerID, sizeof(InviteToLobby_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnInviteToLobby->iNative = 0;
	uFnInviteToLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInviteToLobby, &InviteToLobby_Params, nullptr);
	uFnInviteToLobby->FunctionFlags |= 0x400;
	uFnInviteToLobby->iNative = 35097;

	return InviteToLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35233])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// struct FUniqueNetId            NewOwner                       (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& NewOwner)
{
	static UFunction* uFnSetLobbyOwner = nullptr;

	if (!uFnSetLobbyOwner)
	{
		uFnSetLobbyOwner = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Params SetLobbyOwner_Params;
	memset(&SetLobbyOwner_Params, 0, sizeof(SetLobbyOwner_Params));
	memcpy_s(&SetLobbyOwner_Params.LobbyId, sizeof(SetLobbyOwner_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyOwner_Params.NewOwner, sizeof(SetLobbyOwner_Params.NewOwner), &NewOwner, sizeof(NewOwner));

	uFnSetLobbyOwner->iNative = 0;
	uFnSetLobbyOwner->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyOwner, &SetLobbyOwner_Params, nullptr);
	uFnSetLobbyOwner->FunctionFlags |= 0x400;
	uFnSetLobbyOwner->iNative = 35233;

	return SetLobbyOwner_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35232])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// uint32_t                       bLocked                        (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock(const struct FUniqueNetId& LobbyId, bool bLocked)
{
	static UFunction* uFnSetLobbyLock = nullptr;

	if (!uFnSetLobbyLock)
	{
		uFnSetLobbyLock = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Params SetLobbyLock_Params;
	memset(&SetLobbyLock_Params, 0, sizeof(SetLobbyLock_Params));
	memcpy_s(&SetLobbyLock_Params.LobbyId, sizeof(SetLobbyLock_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	SetLobbyLock_Params.bLocked = bLocked;

	uFnSetLobbyLock->iNative = 0;
	uFnSetLobbyLock->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyLock, &SetLobbyLock_Params, nullptr);
	uFnSetLobbyLock->FunctionFlags |= 0x400;
	uFnSetLobbyLock->iNative = 35232;

	return SetLobbyLock_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35236])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// ELobbyVisibility               Type                           (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType(const struct FUniqueNetId& LobbyId, ELobbyVisibility Type)
{
	static UFunction* uFnSetLobbyType = nullptr;

	if (!uFnSetLobbyType)
	{
		uFnSetLobbyType = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Params SetLobbyType_Params;
	memset(&SetLobbyType_Params, 0, sizeof(SetLobbyType_Params));
	memcpy_s(&SetLobbyType_Params.LobbyId, sizeof(SetLobbyType_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyType_Params.Type, sizeof(SetLobbyType_Params.Type), &Type, sizeof(Type));

	uFnSetLobbyType->iNative = 0;
	uFnSetLobbyType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyType, &SetLobbyType_Params, nullptr);
	uFnSetLobbyType->FunctionFlags |= 0x400;
	uFnSetLobbyType->iNative = 35236;

	return SetLobbyType_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35234])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer(const struct FUniqueNetId& LobbyId, const struct FUniqueNetId& ServerUID, const class FString& ServerIP)
{
	static UFunction* uFnSetLobbyServer = nullptr;

	if (!uFnSetLobbyServer)
	{
		uFnSetLobbyServer = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Params SetLobbyServer_Params;
	memset(&SetLobbyServer_Params, 0, sizeof(SetLobbyServer_Params));
	memcpy_s(&SetLobbyServer_Params.LobbyId, sizeof(SetLobbyServer_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyServer_Params.ServerUID, sizeof(SetLobbyServer_Params.ServerUID), &ServerUID, sizeof(ServerUID));
	memcpy_s(&SetLobbyServer_Params.ServerIP, sizeof(SetLobbyServer_Params.ServerIP), &ServerIP, sizeof(ServerIP));

	uFnSetLobbyServer->iNative = 0;
	uFnSetLobbyServer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyServer, &SetLobbyServer_Params, nullptr);
	uFnSetLobbyServer->FunctionFlags |= 0x400;
	uFnSetLobbyServer->iNative = 35234;

	return SetLobbyServer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35224])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting(const struct FUniqueNetId& LobbyId, const class FString& Key)
{
	static UFunction* uFnRemoveLobbySetting = nullptr;

	if (!uFnRemoveLobbySetting)
	{
		uFnRemoveLobbySetting = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Params RemoveLobbySetting_Params;
	memset(&RemoveLobbySetting_Params, 0, sizeof(RemoveLobbySetting_Params));
	memcpy_s(&RemoveLobbySetting_Params.LobbyId, sizeof(RemoveLobbySetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&RemoveLobbySetting_Params.Key, sizeof(RemoveLobbySetting_Params.Key), &Key, sizeof(Key));

	uFnRemoveLobbySetting->iNative = 0;
	uFnRemoveLobbySetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveLobbySetting, &RemoveLobbySetting_Params, nullptr);
	uFnRemoveLobbySetting->FunctionFlags |= 0x400;
	uFnRemoveLobbySetting->iNative = 35224;

	return RemoveLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35235])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting(const struct FUniqueNetId& LobbyId, const class FString& Key, const class FString& Value)
{
	static UFunction* uFnSetLobbySetting = nullptr;

	if (!uFnSetLobbySetting)
	{
		uFnSetLobbySetting = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Params SetLobbySetting_Params;
	memset(&SetLobbySetting_Params, 0, sizeof(SetLobbySetting_Params));
	memcpy_s(&SetLobbySetting_Params.LobbyId, sizeof(SetLobbySetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbySetting_Params.Key, sizeof(SetLobbySetting_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLobbySetting_Params.Value, sizeof(SetLobbySetting_Params.Value), &Value, sizeof(Value));

	uFnSetLobbySetting->iNative = 0;
	uFnSetLobbySetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbySetting, &SetLobbySetting_Params, nullptr);
	uFnSetLobbySetting->FunctionFlags |= 0x400;
	uFnSetLobbySetting->iNative = 35235;

	return SetLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35084])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin(const struct FUniqueNetId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* uFnGetLobbyAdmin = nullptr;

	if (!uFnGetLobbyAdmin)
	{
		uFnGetLobbyAdmin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Params GetLobbyAdmin_Params;
	memset(&GetLobbyAdmin_Params, 0, sizeof(GetLobbyAdmin_Params));
	memcpy_s(&GetLobbyAdmin_Params.LobbyId, sizeof(GetLobbyAdmin_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&GetLobbyAdmin_Params.AdminId, sizeof(GetLobbyAdmin_Params.AdminId), &AdminId, sizeof(AdminId));

	uFnGetLobbyAdmin->iNative = 0;
	uFnGetLobbyAdmin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLobbyAdmin, &GetLobbyAdmin_Params, nullptr);
	uFnGetLobbyAdmin->FunctionFlags |= 0x400;
	uFnGetLobbyAdmin->iNative = 35084;

	memcpy_s(&AdminId, sizeof(AdminId), &GetLobbyAdmin_Params.AdminId, sizeof(GetLobbyAdmin_Params.AdminId));

	return GetLobbyAdmin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        AdminIndex                     (CPF_Parm)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked(int32_t LobbyIndex, int32_t AdminIndex, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbyKicked = nullptr;

	if (!uFnOnLobbyKicked)
	{
		uFnOnLobbyKicked = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Params OnLobbyKicked_Params;
	memset(&OnLobbyKicked_Params, 0, sizeof(OnLobbyKicked_Params));
	memcpy_s(&OnLobbyKicked_Params.LobbyIndex, sizeof(OnLobbyKicked_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyKicked_Params.AdminIndex, sizeof(OnLobbyKicked_Params.AdminIndex), &AdminIndex, sizeof(AdminIndex));
	memcpy_s(&OnLobbyKicked_Params.LobbyList, sizeof(OnLobbyKicked_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbyKicked, &OnLobbyKicked_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyKicked_Params.LobbyList, sizeof(OnLobbyKicked_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyJoinGameDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate)
{
	static UFunction* uFnClearLobbyJoinGameDelegate = nullptr;

	if (!uFnClearLobbyJoinGameDelegate)
	{
		uFnClearLobbyJoinGameDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyJoinGameDelegate_Params ClearLobbyJoinGameDelegate_Params;
	memset(&ClearLobbyJoinGameDelegate_Params, 0, sizeof(ClearLobbyJoinGameDelegate_Params));
	memcpy_s(&ClearLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate, sizeof(ClearLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate), &LobbyJoinGameDelegate, sizeof(LobbyJoinGameDelegate));

	this->ProcessEvent(uFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyJoinGameDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyJoinGameDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate)
{
	static UFunction* uFnAddLobbyJoinGameDelegate = nullptr;

	if (!uFnAddLobbyJoinGameDelegate)
	{
		uFnAddLobbyJoinGameDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyJoinGameDelegate_Params AddLobbyJoinGameDelegate_Params;
	memset(&AddLobbyJoinGameDelegate_Params, 0, sizeof(AddLobbyJoinGameDelegate_Params));
	memcpy_s(&AddLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate, sizeof(AddLobbyJoinGameDelegate_Params.LobbyJoinGameDelegate), &LobbyJoinGameDelegate, sizeof(LobbyJoinGameDelegate));

	this->ProcessEvent(uFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyJoinGameDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// struct FUniqueNetId            ServerID                       (CPF_Parm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyJoinGameDelegates(int32_t LobbyIndex, const struct FUniqueNetId& ServerID, const class FString& ServerIP)
{
	static UFunction* uFnTriggerLobbyJoinGameDelegates = nullptr;

	if (!uFnTriggerLobbyJoinGameDelegates)
	{
		uFnTriggerLobbyJoinGameDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyJoinGameDelegates_Params TriggerLobbyJoinGameDelegates_Params;
	memset(&TriggerLobbyJoinGameDelegates_Params, 0, sizeof(TriggerLobbyJoinGameDelegates_Params));
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.LobbyIndex, sizeof(TriggerLobbyJoinGameDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.ServerID, sizeof(TriggerLobbyJoinGameDelegates_Params.ServerID), &ServerID, sizeof(ServerID));
	memcpy_s(&TriggerLobbyJoinGameDelegates_Params.ServerIP, sizeof(TriggerLobbyJoinGameDelegates_Params.ServerIP), &ServerIP, sizeof(ServerIP));

	this->ProcessEvent(uFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyJoinGame
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// struct FUniqueNetId            ServerID                       (CPF_Parm)
// class FString                  ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyJoinGame(int32_t LobbyIndex, const struct FUniqueNetId& ServerID, const class FString& ServerIP, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbyJoinGame = nullptr;

	if (!uFnOnLobbyJoinGame)
	{
		uFnOnLobbyJoinGame = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyJoinGame_Params OnLobbyJoinGame_Params;
	memset(&OnLobbyJoinGame_Params, 0, sizeof(OnLobbyJoinGame_Params));
	memcpy_s(&OnLobbyJoinGame_Params.LobbyIndex, sizeof(OnLobbyJoinGame_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyJoinGame_Params.ServerID, sizeof(OnLobbyJoinGame_Params.ServerID), &ServerID, sizeof(ServerID));
	memcpy_s(&OnLobbyJoinGame_Params.ServerIP, sizeof(OnLobbyJoinGame_Params.ServerIP), &ServerIP, sizeof(ServerIP));
	memcpy_s(&OnLobbyJoinGame_Params.LobbyList, sizeof(OnLobbyJoinGame_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbyJoinGame, &OnLobbyJoinGame_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyJoinGame_Params.LobbyList, sizeof(OnLobbyJoinGame_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveBinaryDataDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate)
{
	static UFunction* uFnClearLobbyReceiveBinaryDataDelegate = nullptr;

	if (!uFnClearLobbyReceiveBinaryDataDelegate)
	{
		uFnClearLobbyReceiveBinaryDataDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveBinaryDataDelegate_Params ClearLobbyReceiveBinaryDataDelegate_Params;
	memset(&ClearLobbyReceiveBinaryDataDelegate_Params, 0, sizeof(ClearLobbyReceiveBinaryDataDelegate_Params));
	memcpy_s(&ClearLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate, sizeof(ClearLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate), &LobbyReceiveBinaryDataDelegate, sizeof(LobbyReceiveBinaryDataDelegate));

	this->ProcessEvent(uFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveBinaryDataDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate)
{
	static UFunction* uFnAddLobbyReceiveBinaryDataDelegate = nullptr;

	if (!uFnAddLobbyReceiveBinaryDataDelegate)
	{
		uFnAddLobbyReceiveBinaryDataDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveBinaryDataDelegate_Params AddLobbyReceiveBinaryDataDelegate_Params;
	memset(&AddLobbyReceiveBinaryDataDelegate_Params, 0, sizeof(AddLobbyReceiveBinaryDataDelegate_Params));
	memcpy_s(&AddLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate, sizeof(AddLobbyReceiveBinaryDataDelegate_Params.LobbyReceiveBinaryDataDelegate), &LobbyReceiveBinaryDataDelegate, sizeof(LobbyReceiveBinaryDataDelegate));

	this->ProcessEvent(uFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveBinaryDataDelegates(int32_t LobbyIndex, int32_t MemberIndex)
{
	static UFunction* uFnTriggerLobbyReceiveBinaryDataDelegates = nullptr;

	if (!uFnTriggerLobbyReceiveBinaryDataDelegates)
	{
		uFnTriggerLobbyReceiveBinaryDataDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveBinaryDataDelegates_Params TriggerLobbyReceiveBinaryDataDelegates_Params;
	memset(&TriggerLobbyReceiveBinaryDataDelegates_Params, 0, sizeof(TriggerLobbyReceiveBinaryDataDelegates_Params));
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Params.LobbyIndex, sizeof(TriggerLobbyReceiveBinaryDataDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerLobbyReceiveBinaryDataDelegates_Params.MemberIndex, sizeof(TriggerLobbyReceiveBinaryDataDelegates_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));

	this->ProcessEvent(uFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveBinaryData
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveBinaryData(int32_t LobbyIndex, int32_t MemberIndex, class TArray<struct FActiveLobbyInfo>& LobbyList, class TArray<uint8_t>& Data)
{
	static UFunction* uFnOnLobbyReceiveBinaryData = nullptr;

	if (!uFnOnLobbyReceiveBinaryData)
	{
		uFnOnLobbyReceiveBinaryData = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveBinaryData_Params OnLobbyReceiveBinaryData_Params;
	memset(&OnLobbyReceiveBinaryData_Params, 0, sizeof(OnLobbyReceiveBinaryData_Params));
	memcpy_s(&OnLobbyReceiveBinaryData_Params.LobbyIndex, sizeof(OnLobbyReceiveBinaryData_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyReceiveBinaryData_Params.MemberIndex, sizeof(OnLobbyReceiveBinaryData_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&OnLobbyReceiveBinaryData_Params.LobbyList, sizeof(OnLobbyReceiveBinaryData_Params.LobbyList), &LobbyList, sizeof(LobbyList));
	memcpy_s(&OnLobbyReceiveBinaryData_Params.Data, sizeof(OnLobbyReceiveBinaryData_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyReceiveBinaryData_Params.LobbyList, sizeof(OnLobbyReceiveBinaryData_Params.LobbyList));
	memcpy_s(&Data, sizeof(Data), &OnLobbyReceiveBinaryData_Params.Data, sizeof(OnLobbyReceiveBinaryData_Params.Data));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveMessageDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate)
{
	static UFunction* uFnClearLobbyReceiveMessageDelegate = nullptr;

	if (!uFnClearLobbyReceiveMessageDelegate)
	{
		uFnClearLobbyReceiveMessageDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveMessageDelegate_Params ClearLobbyReceiveMessageDelegate_Params;
	memset(&ClearLobbyReceiveMessageDelegate_Params, 0, sizeof(ClearLobbyReceiveMessageDelegate_Params));
	memcpy_s(&ClearLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate, sizeof(ClearLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate), &LobbyReceiveMessageDelegate, sizeof(LobbyReceiveMessageDelegate));

	this->ProcessEvent(uFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveMessageDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate)
{
	static UFunction* uFnAddLobbyReceiveMessageDelegate = nullptr;

	if (!uFnAddLobbyReceiveMessageDelegate)
	{
		uFnAddLobbyReceiveMessageDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveMessageDelegate_Params AddLobbyReceiveMessageDelegate_Params;
	memset(&AddLobbyReceiveMessageDelegate_Params, 0, sizeof(AddLobbyReceiveMessageDelegate_Params));
	memcpy_s(&AddLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate, sizeof(AddLobbyReceiveMessageDelegate_Params.LobbyReceiveMessageDelegate), &LobbyReceiveMessageDelegate, sizeof(LobbyReceiveMessageDelegate));

	this->ProcessEvent(uFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveMessageDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveMessageDelegates(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message)
{
	static UFunction* uFnTriggerLobbyReceiveMessageDelegates = nullptr;

	if (!uFnTriggerLobbyReceiveMessageDelegates)
	{
		uFnTriggerLobbyReceiveMessageDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveMessageDelegates_Params TriggerLobbyReceiveMessageDelegates_Params;
	memset(&TriggerLobbyReceiveMessageDelegates_Params, 0, sizeof(TriggerLobbyReceiveMessageDelegates_Params));
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.LobbyIndex, sizeof(TriggerLobbyReceiveMessageDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.MemberIndex, sizeof(TriggerLobbyReceiveMessageDelegates_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.Type, sizeof(TriggerLobbyReceiveMessageDelegates_Params.Type), &Type, sizeof(Type));
	memcpy_s(&TriggerLobbyReceiveMessageDelegates_Params.Message, sizeof(TriggerLobbyReceiveMessageDelegates_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveMessage
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveMessage(int32_t LobbyIndex, int32_t MemberIndex, const class FString& Type, const class FString& Message, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbyReceiveMessage = nullptr;

	if (!uFnOnLobbyReceiveMessage)
	{
		uFnOnLobbyReceiveMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveMessage_Params OnLobbyReceiveMessage_Params;
	memset(&OnLobbyReceiveMessage_Params, 0, sizeof(OnLobbyReceiveMessage_Params));
	memcpy_s(&OnLobbyReceiveMessage_Params.LobbyIndex, sizeof(OnLobbyReceiveMessage_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyReceiveMessage_Params.MemberIndex, sizeof(OnLobbyReceiveMessage_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&OnLobbyReceiveMessage_Params.Type, sizeof(OnLobbyReceiveMessage_Params.Type), &Type, sizeof(Type));
	memcpy_s(&OnLobbyReceiveMessage_Params.Message, sizeof(OnLobbyReceiveMessage_Params.Message), &Message, sizeof(Message));
	memcpy_s(&OnLobbyReceiveMessage_Params.LobbyList, sizeof(OnLobbyReceiveMessage_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyReceiveMessage_Params.LobbyList, sizeof(OnLobbyReceiveMessage_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberStatusUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate)
{
	static UFunction* uFnClearLobbyMemberStatusUpdateDelegate = nullptr;

	if (!uFnClearLobbyMemberStatusUpdateDelegate)
	{
		uFnClearLobbyMemberStatusUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberStatusUpdateDelegate_Params ClearLobbyMemberStatusUpdateDelegate_Params;
	memset(&ClearLobbyMemberStatusUpdateDelegate_Params, 0, sizeof(ClearLobbyMemberStatusUpdateDelegate_Params));
	memcpy_s(&ClearLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate, sizeof(ClearLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate), &LobbyMemberStatusUpdateDelegate, sizeof(LobbyMemberStatusUpdateDelegate));

	this->ProcessEvent(uFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberStatusUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate)
{
	static UFunction* uFnAddLobbyMemberStatusUpdateDelegate = nullptr;

	if (!uFnAddLobbyMemberStatusUpdateDelegate)
	{
		uFnAddLobbyMemberStatusUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberStatusUpdateDelegate_Params AddLobbyMemberStatusUpdateDelegate_Params;
	memset(&AddLobbyMemberStatusUpdateDelegate_Params, 0, sizeof(AddLobbyMemberStatusUpdateDelegate_Params));
	memcpy_s(&AddLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate, sizeof(AddLobbyMemberStatusUpdateDelegate_Params.LobbyMemberStatusUpdateDelegate), &LobbyMemberStatusUpdateDelegate, sizeof(LobbyMemberStatusUpdateDelegate));

	this->ProcessEvent(uFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// int32_t                        InstigatorIndex                (CPF_Parm)
// class FString                  Status                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberStatusUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status)
{
	static UFunction* uFnTriggerLobbyMemberStatusUpdateDelegates = nullptr;

	if (!uFnTriggerLobbyMemberStatusUpdateDelegates)
	{
		uFnTriggerLobbyMemberStatusUpdateDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberStatusUpdateDelegates_Params TriggerLobbyMemberStatusUpdateDelegates_Params;
	memset(&TriggerLobbyMemberStatusUpdateDelegates_Params, 0, sizeof(TriggerLobbyMemberStatusUpdateDelegates_Params));
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.LobbyIndex, sizeof(TriggerLobbyMemberStatusUpdateDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.MemberIndex, sizeof(TriggerLobbyMemberStatusUpdateDelegates_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.InstigatorIndex, sizeof(TriggerLobbyMemberStatusUpdateDelegates_Params.InstigatorIndex), &InstigatorIndex, sizeof(InstigatorIndex));
	memcpy_s(&TriggerLobbyMemberStatusUpdateDelegates_Params.Status, sizeof(TriggerLobbyMemberStatusUpdateDelegates_Params.Status), &Status, sizeof(Status));

	this->ProcessEvent(uFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberStatusUpdate
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// int32_t                        InstigatorIndex                (CPF_Parm)
// class FString                  Status                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberStatusUpdate(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, const class FString& Status, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbyMemberStatusUpdate = nullptr;

	if (!uFnOnLobbyMemberStatusUpdate)
	{
		uFnOnLobbyMemberStatusUpdate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberStatusUpdate_Params OnLobbyMemberStatusUpdate_Params;
	memset(&OnLobbyMemberStatusUpdate_Params, 0, sizeof(OnLobbyMemberStatusUpdate_Params));
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.LobbyIndex, sizeof(OnLobbyMemberStatusUpdate_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.MemberIndex, sizeof(OnLobbyMemberStatusUpdate_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.InstigatorIndex, sizeof(OnLobbyMemberStatusUpdate_Params.InstigatorIndex), &InstigatorIndex, sizeof(InstigatorIndex));
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.Status, sizeof(OnLobbyMemberStatusUpdate_Params.Status), &Status, sizeof(Status));
	memcpy_s(&OnLobbyMemberStatusUpdate_Params.LobbyList, sizeof(OnLobbyMemberStatusUpdate_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyMemberStatusUpdate_Params.LobbyList, sizeof(OnLobbyMemberStatusUpdate_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* uFnClearLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!uFnClearLobbyMemberSettingsUpdateDelegate)
	{
		uFnClearLobbyMemberSettingsUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberSettingsUpdateDelegate_Params ClearLobbyMemberSettingsUpdateDelegate_Params;
	memset(&ClearLobbyMemberSettingsUpdateDelegate_Params, 0, sizeof(ClearLobbyMemberSettingsUpdateDelegate_Params));
	memcpy_s(&ClearLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate, sizeof(ClearLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate), &LobbyMemberSettingsUpdateDelegate, sizeof(LobbyMemberSettingsUpdateDelegate));

	this->ProcessEvent(uFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberSettingsUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate)
{
	static UFunction* uFnAddLobbyMemberSettingsUpdateDelegate = nullptr;

	if (!uFnAddLobbyMemberSettingsUpdateDelegate)
	{
		uFnAddLobbyMemberSettingsUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberSettingsUpdateDelegate_Params AddLobbyMemberSettingsUpdateDelegate_Params;
	memset(&AddLobbyMemberSettingsUpdateDelegate_Params, 0, sizeof(AddLobbyMemberSettingsUpdateDelegate_Params));
	memcpy_s(&AddLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate, sizeof(AddLobbyMemberSettingsUpdateDelegate_Params.LobbyMemberSettingsUpdateDelegate), &LobbyMemberSettingsUpdateDelegate, sizeof(LobbyMemberSettingsUpdateDelegate));

	this->ProcessEvent(uFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberSettingsUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex)
{
	static UFunction* uFnTriggerLobbyMemberSettingsUpdateDelegates = nullptr;

	if (!uFnTriggerLobbyMemberSettingsUpdateDelegates)
	{
		uFnTriggerLobbyMemberSettingsUpdateDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberSettingsUpdateDelegates_Params TriggerLobbyMemberSettingsUpdateDelegates_Params;
	memset(&TriggerLobbyMemberSettingsUpdateDelegates_Params, 0, sizeof(TriggerLobbyMemberSettingsUpdateDelegates_Params));
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Params.LobbyIndex, sizeof(TriggerLobbyMemberSettingsUpdateDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerLobbyMemberSettingsUpdateDelegates_Params.MemberIndex, sizeof(TriggerLobbyMemberSettingsUpdateDelegates_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));

	this->ProcessEvent(uFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberSettingsUpdate
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// int32_t                        MemberIndex                    (CPF_Parm)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberSettingsUpdate(int32_t LobbyIndex, int32_t MemberIndex, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbyMemberSettingsUpdate = nullptr;

	if (!uFnOnLobbyMemberSettingsUpdate)
	{
		uFnOnLobbyMemberSettingsUpdate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberSettingsUpdate_Params OnLobbyMemberSettingsUpdate_Params;
	memset(&OnLobbyMemberSettingsUpdate_Params, 0, sizeof(OnLobbyMemberSettingsUpdate_Params));
	memcpy_s(&OnLobbyMemberSettingsUpdate_Params.LobbyIndex, sizeof(OnLobbyMemberSettingsUpdate_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbyMemberSettingsUpdate_Params.MemberIndex, sizeof(OnLobbyMemberSettingsUpdate_Params.MemberIndex), &MemberIndex, sizeof(MemberIndex));
	memcpy_s(&OnLobbyMemberSettingsUpdate_Params.LobbyList, sizeof(OnLobbyMemberSettingsUpdate_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbyMemberSettingsUpdate_Params.LobbyList, sizeof(OnLobbyMemberSettingsUpdate_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbySettingsUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate)
{
	static UFunction* uFnClearLobbySettingsUpdateDelegate = nullptr;

	if (!uFnClearLobbySettingsUpdateDelegate)
	{
		uFnClearLobbySettingsUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearLobbySettingsUpdateDelegate_Params ClearLobbySettingsUpdateDelegate_Params;
	memset(&ClearLobbySettingsUpdateDelegate_Params, 0, sizeof(ClearLobbySettingsUpdateDelegate_Params));
	memcpy_s(&ClearLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate, sizeof(ClearLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate), &LobbySettingsUpdateDelegate, sizeof(LobbySettingsUpdateDelegate));

	this->ProcessEvent(uFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbySettingsUpdateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate)
{
	static UFunction* uFnAddLobbySettingsUpdateDelegate = nullptr;

	if (!uFnAddLobbySettingsUpdateDelegate)
	{
		uFnAddLobbySettingsUpdateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddLobbySettingsUpdateDelegate_Params AddLobbySettingsUpdateDelegate_Params;
	memset(&AddLobbySettingsUpdateDelegate_Params, 0, sizeof(AddLobbySettingsUpdateDelegate_Params));
	memcpy_s(&AddLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate, sizeof(AddLobbySettingsUpdateDelegate_Params.LobbySettingsUpdateDelegate), &LobbySettingsUpdateDelegate, sizeof(LobbySettingsUpdateDelegate));

	this->ProcessEvent(uFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbySettingsUpdateDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbySettingsUpdateDelegates(int32_t LobbyIndex)
{
	static UFunction* uFnTriggerLobbySettingsUpdateDelegates = nullptr;

	if (!uFnTriggerLobbySettingsUpdateDelegates)
	{
		uFnTriggerLobbySettingsUpdateDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbySettingsUpdateDelegates_Params TriggerLobbySettingsUpdateDelegates_Params;
	memset(&TriggerLobbySettingsUpdateDelegates_Params, 0, sizeof(TriggerLobbySettingsUpdateDelegates_Params));
	memcpy_s(&TriggerLobbySettingsUpdateDelegates_Params.LobbyIndex, sizeof(TriggerLobbySettingsUpdateDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));

	this->ProcessEvent(uFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbySettingsUpdate
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LobbyIndex                     (CPF_Parm)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbySettingsUpdate(int32_t LobbyIndex, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnLobbySettingsUpdate = nullptr;

	if (!uFnOnLobbySettingsUpdate)
	{
		uFnOnLobbySettingsUpdate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbySettingsUpdate_Params OnLobbySettingsUpdate_Params;
	memset(&OnLobbySettingsUpdate_Params, 0, sizeof(OnLobbySettingsUpdate_Params));
	memcpy_s(&OnLobbySettingsUpdate_Params.LobbyIndex, sizeof(OnLobbySettingsUpdate_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnLobbySettingsUpdate_Params.LobbyList, sizeof(OnLobbySettingsUpdate_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnLobbySettingsUpdate_Params.LobbyList, sizeof(OnLobbySettingsUpdate_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35225])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class TArray<uint8_t>          Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData(const struct FUniqueNetId& LobbyId, class TArray<uint8_t>& Data)
{
	static UFunction* uFnSendLobbyBinaryData = nullptr;

	if (!uFnSendLobbyBinaryData)
	{
		uFnSendLobbyBinaryData = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Params SendLobbyBinaryData_Params;
	memset(&SendLobbyBinaryData_Params, 0, sizeof(SendLobbyBinaryData_Params));
	memcpy_s(&SendLobbyBinaryData_Params.LobbyId, sizeof(SendLobbyBinaryData_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SendLobbyBinaryData_Params.Data, sizeof(SendLobbyBinaryData_Params.Data), &Data, sizeof(Data));

	uFnSendLobbyBinaryData->iNative = 0;
	uFnSendLobbyBinaryData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendLobbyBinaryData, &SendLobbyBinaryData_Params, nullptr);
	uFnSendLobbyBinaryData->FunctionFlags |= 0x400;
	uFnSendLobbyBinaryData->iNative = 35225;

	memcpy_s(&Data, sizeof(Data), &SendLobbyBinaryData_Params.Data, sizeof(SendLobbyBinaryData_Params.Data));

	return SendLobbyBinaryData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyMessage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35226])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyMessage(const struct FUniqueNetId& LobbyId, const class FString& Message)
{
	static UFunction* uFnSendLobbyMessage = nullptr;

	if (!uFnSendLobbyMessage)
	{
		uFnSendLobbyMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSendLobbyMessage_Params SendLobbyMessage_Params;
	memset(&SendLobbyMessage_Params, 0, sizeof(SendLobbyMessage_Params));
	memcpy_s(&SendLobbyMessage_Params.LobbyId, sizeof(SendLobbyMessage_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SendLobbyMessage_Params.Message, sizeof(SendLobbyMessage_Params.Message), &Message, sizeof(Message));

	uFnSendLobbyMessage->iNative = 0;
	uFnSendLobbyMessage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendLobbyMessage, &SendLobbyMessage_Params, nullptr);
	uFnSendLobbyMessage->FunctionFlags |= 0x400;
	uFnSendLobbyMessage->iNative = 35226;

	return SendLobbyMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35237])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Value                          (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting(const struct FUniqueNetId& LobbyId, const class FString& Key, const class FString& Value)
{
	static UFunction* uFnSetLobbyUserSetting = nullptr;

	if (!uFnSetLobbyUserSetting)
	{
		uFnSetLobbyUserSetting = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Params SetLobbyUserSetting_Params;
	memset(&SetLobbyUserSetting_Params, 0, sizeof(SetLobbyUserSetting_Params));
	memcpy_s(&SetLobbyUserSetting_Params.LobbyId, sizeof(SetLobbyUserSetting_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&SetLobbyUserSetting_Params.Key, sizeof(SetLobbyUserSetting_Params.Key), &Key, sizeof(Key));
	memcpy_s(&SetLobbyUserSetting_Params.Value, sizeof(SetLobbyUserSetting_Params.Value), &Value, sizeof(Value));

	uFnSetLobbyUserSetting->iNative = 0;
	uFnSetLobbyUserSetting->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLobbyUserSetting, &SetLobbyUserSetting_Params, nullptr);
	uFnSetLobbyUserSetting->FunctionFlags |= 0x400;
	uFnSetLobbyUserSetting->iNative = 35237;

	return SetLobbyUserSetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35120])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby(const struct FUniqueNetId& LobbyId)
{
	static UFunction* uFnLeaveLobby = nullptr;

	if (!uFnLeaveLobby)
	{
		uFnLeaveLobby = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Params LeaveLobby_Params;
	memset(&LeaveLobby_Params, 0, sizeof(LeaveLobby_Params));
	memcpy_s(&LeaveLobby_Params.LobbyId, sizeof(LeaveLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnLeaveLobby->iNative = 0;
	uFnLeaveLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLeaveLobby, &LeaveLobby_Params, nullptr);
	uFnLeaveLobby->FunctionFlags |= 0x400;
	uFnLeaveLobby->iNative = 35120;

	return LeaveLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearJoinLobbyCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate)
{
	static UFunction* uFnClearJoinLobbyCompleteDelegate = nullptr;

	if (!uFnClearJoinLobbyCompleteDelegate)
	{
		uFnClearJoinLobbyCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearJoinLobbyCompleteDelegate_Params ClearJoinLobbyCompleteDelegate_Params;
	memset(&ClearJoinLobbyCompleteDelegate_Params, 0, sizeof(ClearJoinLobbyCompleteDelegate_Params));
	memcpy_s(&ClearJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate, sizeof(ClearJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate), &JoinLobbyCompleteDelegate, sizeof(JoinLobbyCompleteDelegate));

	this->ProcessEvent(uFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddJoinLobbyCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate)
{
	static UFunction* uFnAddJoinLobbyCompleteDelegate = nullptr;

	if (!uFnAddJoinLobbyCompleteDelegate)
	{
		uFnAddJoinLobbyCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddJoinLobbyCompleteDelegate_Params AddJoinLobbyCompleteDelegate_Params;
	memset(&AddJoinLobbyCompleteDelegate_Params, 0, sizeof(AddJoinLobbyCompleteDelegate_Params));
	memcpy_s(&AddJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate, sizeof(AddJoinLobbyCompleteDelegate_Params.JoinLobbyCompleteDelegate), &JoinLobbyCompleteDelegate, sizeof(JoinLobbyCompleteDelegate));

	this->ProcessEvent(uFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerJoinLobbyCompleteDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// int32_t                        LobbyIndex                     (CPF_Parm)
// struct FUniqueNetId            LobbyUID                       (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::eventTriggerJoinLobbyCompleteDelegates(bool bWasSuccessful, int32_t LobbyIndex, const struct FUniqueNetId& LobbyUID, const class FString& Error)
{
	static UFunction* uFnTriggerJoinLobbyCompleteDelegates = nullptr;

	if (!uFnTriggerJoinLobbyCompleteDelegates)
	{
		uFnTriggerJoinLobbyCompleteDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerJoinLobbyCompleteDelegates_Params TriggerJoinLobbyCompleteDelegates_Params;
	memset(&TriggerJoinLobbyCompleteDelegates_Params, 0, sizeof(TriggerJoinLobbyCompleteDelegates_Params));
	TriggerJoinLobbyCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.LobbyIndex, sizeof(TriggerJoinLobbyCompleteDelegates_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.LobbyUID, sizeof(TriggerJoinLobbyCompleteDelegates_Params.LobbyUID), &LobbyUID, sizeof(LobbyUID));
	memcpy_s(&TriggerJoinLobbyCompleteDelegates_Params.Error, sizeof(TriggerJoinLobbyCompleteDelegates_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnJoinLobbyComplete
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// int32_t                        LobbyIndex                     (CPF_Parm)
// struct FUniqueNetId            LobbyUID                       (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FActiveLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnJoinLobbyComplete(bool bWasSuccessful, int32_t LobbyIndex, const struct FUniqueNetId& LobbyUID, const class FString& Error, class TArray<struct FActiveLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnJoinLobbyComplete = nullptr;

	if (!uFnOnJoinLobbyComplete)
	{
		uFnOnJoinLobbyComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnJoinLobbyComplete_Params OnJoinLobbyComplete_Params;
	memset(&OnJoinLobbyComplete_Params, 0, sizeof(OnJoinLobbyComplete_Params));
	OnJoinLobbyComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnJoinLobbyComplete_Params.LobbyIndex, sizeof(OnJoinLobbyComplete_Params.LobbyIndex), &LobbyIndex, sizeof(LobbyIndex));
	memcpy_s(&OnJoinLobbyComplete_Params.LobbyUID, sizeof(OnJoinLobbyComplete_Params.LobbyUID), &LobbyUID, sizeof(LobbyUID));
	memcpy_s(&OnJoinLobbyComplete_Params.Error, sizeof(OnJoinLobbyComplete_Params.Error), &Error, sizeof(Error));
	memcpy_s(&OnJoinLobbyComplete_Params.LobbyList, sizeof(OnJoinLobbyComplete_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnJoinLobbyComplete_Params.LobbyList, sizeof(OnJoinLobbyComplete_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35099])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::JoinLobby(const struct FUniqueNetId& LobbyId)
{
	static UFunction* uFnJoinLobby = nullptr;

	if (!uFnJoinLobby)
	{
		uFnJoinLobby = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Params JoinLobby_Params;
	memset(&JoinLobby_Params, 0, sizeof(JoinLobby_Params));
	memcpy_s(&JoinLobby_Params.LobbyId, sizeof(JoinLobby_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnJoinLobby->iNative = 0;
	uFnJoinLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnJoinLobby, &JoinLobby_Params, nullptr);
	uFnJoinLobby->FunctionFlags |= 0x400;
	uFnJoinLobby->iNative = 35099;

	return JoinLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearFindLobbiesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate)
{
	static UFunction* uFnClearFindLobbiesCompleteDelegate = nullptr;

	if (!uFnClearFindLobbiesCompleteDelegate)
	{
		uFnClearFindLobbiesCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearFindLobbiesCompleteDelegate_Params ClearFindLobbiesCompleteDelegate_Params;
	memset(&ClearFindLobbiesCompleteDelegate_Params, 0, sizeof(ClearFindLobbiesCompleteDelegate_Params));
	memcpy_s(&ClearFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate, sizeof(ClearFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate), &FindLobbiesCompleteDelegate, sizeof(FindLobbiesCompleteDelegate));

	this->ProcessEvent(uFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddFindLobbiesCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate)
{
	static UFunction* uFnAddFindLobbiesCompleteDelegate = nullptr;

	if (!uFnAddFindLobbiesCompleteDelegate)
	{
		uFnAddFindLobbiesCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddFindLobbiesCompleteDelegate_Params AddFindLobbiesCompleteDelegate_Params;
	memset(&AddFindLobbiesCompleteDelegate_Params, 0, sizeof(AddFindLobbiesCompleteDelegate_Params));
	memcpy_s(&AddFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate, sizeof(AddFindLobbiesCompleteDelegate_Params.FindLobbiesCompleteDelegate), &FindLobbiesCompleteDelegate, sizeof(FindLobbiesCompleteDelegate));

	this->ProcessEvent(uFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerFindLobbiesCompleteDelegates
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::eventTriggerFindLobbiesCompleteDelegates(bool bWasSuccessful)
{
	static UFunction* uFnTriggerFindLobbiesCompleteDelegates = nullptr;

	if (!uFnTriggerFindLobbiesCompleteDelegates)
	{
		uFnTriggerFindLobbiesCompleteDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_eventTriggerFindLobbiesCompleteDelegates_Params TriggerFindLobbiesCompleteDelegates_Params;
	memset(&TriggerFindLobbiesCompleteDelegates_Params, 0, sizeof(TriggerFindLobbiesCompleteDelegates_Params));
	TriggerFindLobbiesCompleteDelegates_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnFindLobbiesComplete
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class TArray<struct FBasicLobbyInfo> LobbyList                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnFindLobbiesComplete(bool bWasSuccessful, class TArray<struct FBasicLobbyInfo>& LobbyList)
{
	static UFunction* uFnOnFindLobbiesComplete = nullptr;

	if (!uFnOnFindLobbiesComplete)
	{
		uFnOnFindLobbiesComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnFindLobbiesComplete_Params OnFindLobbiesComplete_Params;
	memset(&OnFindLobbiesComplete_Params, 0, sizeof(OnFindLobbiesComplete_Params));
	OnFindLobbiesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnFindLobbiesComplete_Params.LobbyList, sizeof(OnFindLobbiesComplete_Params.LobbyList), &LobbyList, sizeof(LobbyList));

	this->ProcessEvent(uFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Params, nullptr);

	memcpy_s(&LobbyList, sizeof(LobbyList), &OnFindLobbiesComplete_Params.LobbyList, sizeof(OnFindLobbiesComplete_Params.LobbyList));
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[35263])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies(const struct FUniqueNetId& LobbyId)
{
	static UFunction* uFnUpdateFoundLobbies = nullptr;

	if (!uFnUpdateFoundLobbies)
	{
		uFnUpdateFoundLobbies = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Params UpdateFoundLobbies_Params;
	memset(&UpdateFoundLobbies_Params, 0, sizeof(UpdateFoundLobbies_Params));
	memcpy_s(&UpdateFoundLobbies_Params.LobbyId, sizeof(UpdateFoundLobbies_Params.LobbyId), &LobbyId, sizeof(LobbyId));

	uFnUpdateFoundLobbies->iNative = 0;
	uFnUpdateFoundLobbies->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateFoundLobbies, &UpdateFoundLobbies_Params, nullptr);
	uFnUpdateFoundLobbies->FunctionFlags |= 0x400;
	uFnUpdateFoundLobbies->iNative = 35263;

	return UpdateFoundLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13270])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FLobbyFilter> Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MinSlots                       (CPF_OptionalParm | CPF_Parm)
// ELobbyDistance                 Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::FindLobbies(int32_t MaxResults, const class TArray<struct FLobbyFilter>& Filters, const class TArray<struct FLobbySortFilter>& SortFilters, int32_t MinSlots, ELobbyDistance Distance)
{
	static UFunction* uFnFindLobbies = nullptr;

	if (!uFnFindLobbies)
	{
		uFnFindLobbies = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Params FindLobbies_Params;
	memset(&FindLobbies_Params, 0, sizeof(FindLobbies_Params));
	memcpy_s(&FindLobbies_Params.MaxResults, sizeof(FindLobbies_Params.MaxResults), &MaxResults, sizeof(MaxResults));
	memcpy_s(&FindLobbies_Params.Filters, sizeof(FindLobbies_Params.Filters), &Filters, sizeof(Filters));
	memcpy_s(&FindLobbies_Params.SortFilters, sizeof(FindLobbies_Params.SortFilters), &SortFilters, sizeof(SortFilters));
	memcpy_s(&FindLobbies_Params.MinSlots, sizeof(FindLobbies_Params.MinSlots), &MinSlots, sizeof(MinSlots));
	memcpy_s(&FindLobbies_Params.Distance, sizeof(FindLobbies_Params.Distance), &Distance, sizeof(Distance));

	uFnFindLobbies->iNative = 0;
	uFnFindLobbies->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindLobbies, &FindLobbies_Params, nullptr);
	uFnFindLobbies->FunctionFlags |= 0x400;
	uFnFindLobbies->iNative = 13270;

	return FindLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearCreateLobbyCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate)
{
	static UFunction* uFnClearCreateLobbyCompleteDelegate = nullptr;

	if (!uFnClearCreateLobbyCompleteDelegate)
	{
		uFnClearCreateLobbyCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execClearCreateLobbyCompleteDelegate_Params ClearCreateLobbyCompleteDelegate_Params;
	memset(&ClearCreateLobbyCompleteDelegate_Params, 0, sizeof(ClearCreateLobbyCompleteDelegate_Params));
	memcpy_s(&ClearCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate, sizeof(ClearCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate), &CreateLobbyCompleteDelegate, sizeof(CreateLobbyCompleteDelegate));

	this->ProcessEvent(uFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddCreateLobbyCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate)
{
	static UFunction* uFnAddCreateLobbyCompleteDelegate = nullptr;

	if (!uFnAddCreateLobbyCompleteDelegate)
	{
		uFnAddCreateLobbyCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execAddCreateLobbyCompleteDelegate_Params AddCreateLobbyCompleteDelegate_Params;
	memset(&AddCreateLobbyCompleteDelegate_Params, 0, sizeof(AddCreateLobbyCompleteDelegate_Params));
	memcpy_s(&AddCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate, sizeof(AddCreateLobbyCompleteDelegate_Params.CreateLobbyCompleteDelegate), &CreateLobbyCompleteDelegate, sizeof(CreateLobbyCompleteDelegate));

	this->ProcessEvent(uFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnCreateLobbyComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            LobbyId                        (CPF_Parm)
// class FString                  Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnCreateLobbyComplete(bool bWasSuccessful, const struct FUniqueNetId& LobbyId, const class FString& Error)
{
	static UFunction* uFnOnCreateLobbyComplete = nullptr;

	if (!uFnOnCreateLobbyComplete)
	{
		uFnOnCreateLobbyComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execOnCreateLobbyComplete_Params OnCreateLobbyComplete_Params;
	memset(&OnCreateLobbyComplete_Params, 0, sizeof(OnCreateLobbyComplete_Params));
	OnCreateLobbyComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnCreateLobbyComplete_Params.LobbyId, sizeof(OnCreateLobbyComplete_Params.LobbyId), &LobbyId, sizeof(LobbyId));
	memcpy_s(&OnCreateLobbyComplete_Params.Error, sizeof(OnCreateLobbyComplete_Params.Error), &Error, sizeof(Error));

	this->ProcessEvent(uFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13252])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        MaxPlayers                     (CPF_Parm)
// ELobbyVisibility               Type                           (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FLobbyMetaData> InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CreateLobby(int32_t MaxPlayers, ELobbyVisibility Type, const class TArray<struct FLobbyMetaData>& InitialSettings)
{
	static UFunction* uFnCreateLobby = nullptr;

	if (!uFnCreateLobby)
	{
		uFnCreateLobby = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINELOBBYINTERFACESTEAMWORKS));
	}

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Params CreateLobby_Params;
	memset(&CreateLobby_Params, 0, sizeof(CreateLobby_Params));
	memcpy_s(&CreateLobby_Params.MaxPlayers, sizeof(CreateLobby_Params.MaxPlayers), &MaxPlayers, sizeof(MaxPlayers));
	memcpy_s(&CreateLobby_Params.Type, sizeof(CreateLobby_Params.Type), &Type, sizeof(Type));
	memcpy_s(&CreateLobby_Params.InitialSettings, sizeof(CreateLobby_Params.InitialSettings), &InitialSettings, sizeof(InitialSettings));

	uFnCreateLobby->iNative = 0;
	uFnCreateLobby->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateLobby, &CreateLobby_Params, nullptr);
	uFnCreateLobby->FunctionFlags |= 0x400;
	uFnCreateLobby->iNative = 13252;

	return CreateLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet(uint8_t LocalUserNum, const class FString& GameDescription, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecordPlayersRecentlyMet = nullptr;

	if (!uFnRecordPlayersRecentlyMet)
	{
		uFnRecordPlayersRecentlyMet = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Params RecordPlayersRecentlyMet_Params;
	memset(&RecordPlayersRecentlyMet_Params, 0, sizeof(RecordPlayersRecentlyMet_Params));
	memcpy_s(&RecordPlayersRecentlyMet_Params.LocalUserNum, sizeof(RecordPlayersRecentlyMet_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RecordPlayersRecentlyMet_Params.GameDescription, sizeof(RecordPlayersRecentlyMet_Params.GameDescription), &GameDescription, sizeof(GameDescription));
	memcpy_s(&RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players), &Players, sizeof(Players));

	this->ProcessEvent(uFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Params, nullptr);

	memcpy_s(&Players, sizeof(Players), &RecordPlayersRecentlyMet_Params.Players, sizeof(RecordPlayersRecentlyMet_Params.Players));

	return RecordPlayersRecentlyMet_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowGamerCardUIByUsername(uint8_t LocalUserNum, const class FString& UserName)
{
	static UFunction* uFnShowGamerCardUIByUsername = nullptr;

	if (!uFnShowGamerCardUIByUsername)
	{
		uFnShowGamerCardUIByUsername = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUIByUsername_Params ShowGamerCardUIByUsername_Params;
	memset(&ShowGamerCardUIByUsername_Params, 0, sizeof(ShowGamerCardUIByUsername_Params));
	memcpy_s(&ShowGamerCardUIByUsername_Params.LocalUserNum, sizeof(ShowGamerCardUIByUsername_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowGamerCardUIByUsername_Params.UserName, sizeof(ShowGamerCardUIByUsername_Params.UserName), &UserName, sizeof(UserName));

	this->ProcessEvent(uFnShowGamerCardUIByUsername, &ShowGamerCardUIByUsername_Params, nullptr);

	return ShowGamerCardUIByUsername_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        InPostID                       (CPF_Parm)
// class FString                  InPostParam                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddInGamePost(int32_t InPostID, const class FString& InPostParam)
{
	static UFunction* uFnAddInGamePost = nullptr;

	if (!uFnAddInGamePost)
	{
		uFnAddInGamePost = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddInGamePost_Params AddInGamePost_Params;
	memset(&AddInGamePost_Params, 0, sizeof(AddInGamePost_Params));
	memcpy_s(&AddInGamePost_Params.InPostID, sizeof(AddInGamePost_Params.InPostID), &InPostID, sizeof(InPostID));
	memcpy_s(&AddInGamePost_Params.InPostParam, sizeof(AddInGamePost_Params.InPostParam), &InPostParam, sizeof(InPostParam));

	this->ProcessEvent(uFnAddInGamePost, &AddInGamePost_Params, nullptr);

	return AddInGamePost_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearAllDelegates_Params ClearAllDelegates_Params;
	memset(&ClearAllDelegates_Params, 0, sizeof(ClearAllDelegates_Params));

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnClearWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnClearWriteSharedFileCompleteDelegate)
	{
		uFnClearWriteSharedFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params ClearWriteSharedFileCompleteDelegate_Params;
	memset(&ClearWriteSharedFileCompleteDelegate_Params, 0, sizeof(ClearWriteSharedFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnAddWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnAddWriteSharedFileCompleteDelegate)
	{
		uFnAddWriteSharedFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params AddWriteSharedFileCompleteDelegate_Params;
	memset(&AddWriteSharedFileCompleteDelegate_Params, 0, sizeof(AddWriteSharedFileCompleteDelegate_Params));
	memcpy_s(&AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, sizeof(AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate), &WriteSharedFileCompleteDelegate, sizeof(WriteSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[30365])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSharedFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& Contents)
{
	static UFunction* uFnWriteSharedFile = nullptr;

	if (!uFnWriteSharedFile)
	{
		uFnWriteSharedFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteSharedFile_Params WriteSharedFile_Params;
	memset(&WriteSharedFile_Params, 0, sizeof(WriteSharedFile_Params));
	memcpy_s(&WriteSharedFile_Params.UserId, sizeof(WriteSharedFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteSharedFile_Params.Filename, sizeof(WriteSharedFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents), &Contents, sizeof(Contents));

	uFnWriteSharedFile->iNative = 0;
	uFnWriteSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteSharedFile, &WriteSharedFile_Params, nullptr);
	uFnWriteSharedFile->FunctionFlags |= 0x400;
	uFnWriteSharedFile->iNative = 30365;

	memcpy_s(&Contents, sizeof(Contents), &WriteSharedFile_Params.Contents, sizeof(WriteSharedFile_Params.Contents));

	return WriteSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename, const class FString& SharedHandle)
{
	static UFunction* uFnOnWriteSharedFileComplete = nullptr;

	if (!uFnOnWriteSharedFileComplete)
	{
		uFnOnWriteSharedFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params OnWriteSharedFileComplete_Params;
	memset(&OnWriteSharedFileComplete_Params, 0, sizeof(OnWriteSharedFileComplete_Params));
	OnWriteSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteSharedFileComplete_Params.UserId, sizeof(OnWriteSharedFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteSharedFileComplete_Params.Filename, sizeof(OnWriteSharedFileComplete_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&OnWriteSharedFileComplete_Params.SharedHandle, sizeof(OnWriteSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnClearReadSharedFileCompleteDelegate = nullptr;

	if (!uFnClearReadSharedFileCompleteDelegate)
	{
		uFnClearReadSharedFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params ClearReadSharedFileCompleteDelegate_Params;
	memset(&ClearReadSharedFileCompleteDelegate_Params, 0, sizeof(ClearReadSharedFileCompleteDelegate_Params));
	memcpy_s(&ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnAddReadSharedFileCompleteDelegate = nullptr;

	if (!uFnAddReadSharedFileCompleteDelegate)
	{
		uFnAddReadSharedFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params AddReadSharedFileCompleteDelegate_Params;
	memset(&AddReadSharedFileCompleteDelegate_Params, 0, sizeof(AddReadSharedFileCompleteDelegate_Params));
	memcpy_s(&AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, sizeof(AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate), &ReadSharedFileCompleteDelegate, sizeof(ReadSharedFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26883])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSharedFile(const class FString& SharedHandle)
{
	static UFunction* uFnReadSharedFile = nullptr;

	if (!uFnReadSharedFile)
	{
		uFnReadSharedFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadSharedFile_Params ReadSharedFile_Params;
	memset(&ReadSharedFile_Params, 0, sizeof(ReadSharedFile_Params));
	memcpy_s(&ReadSharedFile_Params.SharedHandle, sizeof(ReadSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	uFnReadSharedFile->iNative = 0;
	uFnReadSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadSharedFile, &ReadSharedFile_Params, nullptr);
	uFnReadSharedFile->FunctionFlags |= 0x400;
	uFnReadSharedFile->iNative = 26883;

	return ReadSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(bool bWasSuccessful, const class FString& SharedHandle)
{
	static UFunction* uFnOnReadSharedFileComplete = nullptr;

	if (!uFnOnReadSharedFileComplete)
	{
		uFnOnReadSharedFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params OnReadSharedFileComplete_Params;
	memset(&OnReadSharedFileComplete_Params, 0, sizeof(OnReadSharedFileComplete_Params));
	OnReadSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSharedFileComplete_Params.SharedHandle, sizeof(OnReadSharedFileComplete_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	this->ProcessEvent(uFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18452])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearSharedFile(const class FString& SharedHandle)
{
	static UFunction* uFnClearSharedFile = nullptr;

	if (!uFnClearSharedFile)
	{
		uFnClearSharedFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearSharedFile_Params ClearSharedFile_Params;
	memset(&ClearSharedFile_Params, 0, sizeof(ClearSharedFile_Params));
	memcpy_s(&ClearSharedFile_Params.SharedHandle, sizeof(ClearSharedFile_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));

	uFnClearSharedFile->iNative = 0;
	uFnClearSharedFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearSharedFile, &ClearSharedFile_Params, nullptr);
	uFnClearSharedFile->FunctionFlags |= 0x400;
	uFnClearSharedFile->iNative = 18452;

	return ClearSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18453])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static UFunction* uFnClearSharedFiles = nullptr;

	if (!uFnClearSharedFiles)
	{
		uFnClearSharedFiles = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearSharedFiles_Params ClearSharedFiles_Params;
	memset(&ClearSharedFiles_Params, 0, sizeof(ClearSharedFiles_Params));

	uFnClearSharedFiles->iNative = 0;
	uFnClearSharedFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearSharedFiles, &ClearSharedFiles_Params, nullptr);
	uFnClearSharedFiles->FunctionFlags |= 0x400;
	uFnClearSharedFiles->iNative = 18453;

	return ClearSharedFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21979])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(const class FString& SharedHandle, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetSharedFileContents = nullptr;

	if (!uFnGetSharedFileContents)
	{
		uFnGetSharedFileContents = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Params GetSharedFileContents_Params;
	memset(&GetSharedFileContents_Params, 0, sizeof(GetSharedFileContents_Params));
	memcpy_s(&GetSharedFileContents_Params.SharedHandle, sizeof(GetSharedFileContents_Params.SharedHandle), &SharedHandle, sizeof(SharedHandle));
	memcpy_s(&GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetSharedFileContents->iNative = 0;
	uFnGetSharedFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSharedFileContents, &GetSharedFileContents_Params, nullptr);
	uFnGetSharedFileContents->FunctionFlags |= 0x400;
	uFnGetSharedFileContents->iNative = 21979;

	memcpy_s(&FileContents, sizeof(FileContents), &GetSharedFileContents_Params.FileContents, sizeof(GetSharedFileContents_Params.FileContents));

	return GetSharedFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memset(&ClearDeleteUserFileCompleteDelegate_Params, 0, sizeof(ClearDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memset(&AddDeleteUserFileCompleteDelegate_Params, 0, sizeof(AddDeleteUserFileCompleteDelegate_Params));
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, sizeof(AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate), &DeleteUserFileCompleteDelegate, sizeof(DeleteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19556])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bShouldCloudDelete             (CPF_Parm)
// uint32_t                       bShouldLocallyDelete           (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execDeleteUserFile_Params DeleteUserFile_Params;
	memset(&DeleteUserFile_Params, 0, sizeof(DeleteUserFile_Params));
	memcpy_s(&DeleteUserFile_Params.UserId, sizeof(DeleteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&DeleteUserFile_Params.Filename, sizeof(DeleteUserFile_Params.Filename), &Filename, sizeof(Filename));
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	uFnDeleteUserFile->iNative = 0;
	uFnDeleteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);
	uFnDeleteUserFile->FunctionFlags |= 0x400;
	uFnDeleteUserFile->iNative = 19556;

	return DeleteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	memset(&OnDeleteUserFileComplete_Params, 0, sizeof(OnDeleteUserFileComplete_Params));
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, sizeof(OnDeleteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, sizeof(OnDeleteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memset(&ClearWriteUserFileCompleteDelegate_Params, 0, sizeof(ClearWriteUserFileCompleteDelegate_Params));
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memset(&AddWriteUserFileCompleteDelegate_Params, 0, sizeof(AddWriteUserFileCompleteDelegate_Params));
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, sizeof(AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate), &WriteUserFileCompleteDelegate, sizeof(WriteUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[30368])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteUserFile_Params WriteUserFile_Params;
	memset(&WriteUserFile_Params, 0, sizeof(WriteUserFile_Params));
	memcpy_s(&WriteUserFile_Params.UserId, sizeof(WriteUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFile_Params.Filename, sizeof(WriteUserFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnWriteUserFile->iNative = 0;
	uFnWriteUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);
	uFnWriteUserFile->FunctionFlags |= 0x400;
	uFnWriteUserFile->iNative = 30368;

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFile_Params.FileContents, sizeof(WriteUserFile_Params.FileContents));

	return WriteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	memset(&OnWriteUserFileComplete_Params, 0, sizeof(OnWriteUserFileComplete_Params));
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, sizeof(OnWriteUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, sizeof(OnWriteUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memset(&ClearReadUserFileCompleteDelegate_Params, 0, sizeof(ClearReadUserFileCompleteDelegate_Params));
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memset(&AddReadUserFileCompleteDelegate_Params, 0, sizeof(AddReadUserFileCompleteDelegate_Params));
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, sizeof(AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate), &ReadUserFileCompleteDelegate, sizeof(ReadUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26889])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadUserFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadUserFile_Params ReadUserFile_Params;
	memset(&ReadUserFile_Params, 0, sizeof(ReadUserFile_Params));
	memcpy_s(&ReadUserFile_Params.UserId, sizeof(ReadUserFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ReadUserFile_Params.Filename, sizeof(ReadUserFile_Params.Filename), &Filename, sizeof(Filename));

	uFnReadUserFile->iNative = 0;
	uFnReadUserFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);
	uFnReadUserFile->FunctionFlags |= 0x400;
	uFnReadUserFile->iNative = 26889;

	return ReadUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	memset(&OnReadUserFileComplete_Params, 0, sizeof(OnReadUserFileComplete_Params));
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, sizeof(OnReadUserFileComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadUserFileComplete_Params.Filename, sizeof(OnReadUserFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[22059])
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FEmsFile>  UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetUserFileList_Params GetUserFileList_Params;
	memset(&GetUserFileList_Params, 0, sizeof(GetUserFileList_Params));
	memcpy_s(&GetUserFileList_Params.UserId, sizeof(GetUserFileList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles), &UserFiles, sizeof(UserFiles));

	uFnGetUserFileList->iNative = 0;
	uFnGetUserFileList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);
	uFnGetUserFileList->FunctionFlags |= 0x400;
	uFnGetUserFileList->iNative = 22059;

	memcpy_s(&UserFiles, sizeof(UserFiles), &GetUserFileList_Params.UserFiles, sizeof(GetUserFileList_Params.UserFiles));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memset(&ClearEnumerateUserFileCompleteDelegate_Params, 0, sizeof(ClearEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memset(&AddEnumerateUserFileCompleteDelegate_Params, 0, sizeof(AddEnumerateUserFileCompleteDelegate_Params));
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, sizeof(AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate), &EnumerateUserFileCompleteDelegate, sizeof(EnumerateUserFileCompleteDelegate));

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[20427])
// Parameter Info:
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(const class FString& UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memset(&EnumerateUserFiles_Params, 0, sizeof(EnumerateUserFiles_Params));
	memcpy_s(&EnumerateUserFiles_Params.UserId, sizeof(EnumerateUserFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnEnumerateUserFiles->iNative = 0;
	uFnEnumerateUserFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);
	uFnEnumerateUserFiles->FunctionFlags |= 0x400;
	uFnEnumerateUserFiles->iNative = 20427;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	memset(&OnEnumerateUserFilesComplete_Params, 0, sizeof(OnEnumerateUserFilesComplete_Params));
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, sizeof(OnEnumerateUserFilesComplete_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18364])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFile(const class FString& UserId, const class FString& Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFile_Params ClearFile_Params;
	memset(&ClearFile_Params, 0, sizeof(ClearFile_Params));
	memcpy_s(&ClearFile_Params.UserId, sizeof(ClearFile_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&ClearFile_Params.Filename, sizeof(ClearFile_Params.Filename), &Filename, sizeof(Filename));

	uFnClearFile->iNative = 0;
	uFnClearFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);
	uFnClearFile->FunctionFlags |= 0x400;
	uFnClearFile->iNative = 18364;

	return ClearFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18365])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFiles(const class FString& UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFiles_Params ClearFiles_Params;
	memset(&ClearFiles_Params, 0, sizeof(ClearFiles_Params));
	memcpy_s(&ClearFiles_Params.UserId, sizeof(ClearFiles_Params.UserId), &UserId, sizeof(UserId));

	uFnClearFiles->iNative = 0;
	uFnClearFiles->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);
	uFnClearFiles->FunctionFlags |= 0x400;
	uFnClearFiles->iNative = 18365;

	return ClearFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21731])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetFileContents_Params GetFileContents_Params;
	memset(&GetFileContents_Params, 0, sizeof(GetFileContents_Params));
	memcpy_s(&GetFileContents_Params.UserId, sizeof(GetFileContents_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetFileContents_Params.Filename, sizeof(GetFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetFileContents->iNative = 0;
	uFnGetFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);
	uFnGetFileContents->FunctionFlags |= 0x400;
	uFnGetFileContents->iNative = 21731;

	memcpy_s(&FileContents, sizeof(FileContents), &GetFileContents_Params.FileContents, sizeof(GetFileContents_Params.FileContents));

	return GetFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35273])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserId                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFileInternal = nullptr;

	if (!uFnWriteUserFileInternal)
	{
		uFnWriteUserFileInternal = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params WriteUserFileInternal_Params;
	memset(&WriteUserFileInternal_Params, 0, sizeof(WriteUserFileInternal_Params));
	memcpy_s(&WriteUserFileInternal_Params.UserId, sizeof(WriteUserFileInternal_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&WriteUserFileInternal_Params.Filename, sizeof(WriteUserFileInternal_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnWriteUserFileInternal->iNative = 0;
	uFnWriteUserFileInternal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteUserFileInternal, &WriteUserFileInternal_Params, nullptr);
	uFnWriteUserFileInternal->FunctionFlags |= 0x400;
	uFnWriteUserFileInternal->iNative = 35273;

	memcpy_s(&FileContents, sizeof(FileContents), &WriteUserFileInternal_Params.FileContents, sizeof(WriteUserFileInternal_Params.FileContents));

	return WriteUserFileInternal_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35083])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            FriendUID                      (CPF_Parm)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(const struct FUniqueNetId& FriendUID, class FString& ServerURL, class FString& ServerUID)
{
	static UFunction* uFnGetFriendJoinURL = nullptr;

	if (!uFnGetFriendJoinURL)
	{
		uFnGetFriendJoinURL = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params GetFriendJoinURL_Params;
	memset(&GetFriendJoinURL_Params, 0, sizeof(GetFriendJoinURL_Params));
	memcpy_s(&GetFriendJoinURL_Params.FriendUID, sizeof(GetFriendJoinURL_Params.FriendUID), &FriendUID, sizeof(FriendUID));
	memcpy_s(&GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL), &ServerURL, sizeof(ServerURL));
	memcpy_s(&GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnGetFriendJoinURL->iNative = 0;
	uFnGetFriendJoinURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendJoinURL, &GetFriendJoinURL_Params, nullptr);
	uFnGetFriendJoinURL->FunctionFlags |= 0x400;
	uFnGetFriendJoinURL->iNative = 35083;

	memcpy_s(&ServerURL, sizeof(ServerURL), &GetFriendJoinURL_Params.ServerURL, sizeof(GetFriendJoinURL_Params.ServerURL));
	memcpy_s(&ServerUID, sizeof(ServerUID), &GetFriendJoinURL_Params.ServerUID, sizeof(GetFriendJoinURL_Params.ServerUID));

	return GetFriendJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35082])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bMarkAsJoined                  (CPF_Parm)
// class FString                  ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(bool bMarkAsJoined, class FString& ServerURL, class FString& ServerUID)
{
	static UFunction* uFnGetCommandlineJoinURL = nullptr;

	if (!uFnGetCommandlineJoinURL)
	{
		uFnGetCommandlineJoinURL = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params GetCommandlineJoinURL_Params;
	memset(&GetCommandlineJoinURL_Params, 0, sizeof(GetCommandlineJoinURL_Params));
	GetCommandlineJoinURL_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL), &ServerURL, sizeof(ServerURL));
	memcpy_s(&GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID), &ServerUID, sizeof(ServerUID));

	uFnGetCommandlineJoinURL->iNative = 0;
	uFnGetCommandlineJoinURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Params, nullptr);
	uFnGetCommandlineJoinURL->FunctionFlags |= 0x400;
	uFnGetCommandlineJoinURL->iNative = 35082;

	memcpy_s(&ServerURL, sizeof(ServerURL), &GetCommandlineJoinURL_Params.ServerURL, sizeof(GetCommandlineJoinURL_Params.ServerURL));
	memcpy_s(&ServerUID, sizeof(ServerUID), &GetCommandlineJoinURL_Params.ServerUID, sizeof(GetCommandlineJoinURL_Params.ServerUID));

	return GetCommandlineJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35091])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(const class FString& UIDString, struct FUniqueNetId& OutUID)
{
	static UFunction* uFnInt64ToUniqueNetId = nullptr;

	if (!uFnInt64ToUniqueNetId)
	{
		uFnInt64ToUniqueNetId = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params Int64ToUniqueNetId_Params;
	memset(&Int64ToUniqueNetId_Params, 0, sizeof(Int64ToUniqueNetId_Params));
	memcpy_s(&Int64ToUniqueNetId_Params.UIDString, sizeof(Int64ToUniqueNetId_Params.UIDString), &UIDString, sizeof(UIDString));
	memcpy_s(&Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID), &OutUID, sizeof(OutUID));

	uFnInt64ToUniqueNetId->iNative = 0;
	uFnInt64ToUniqueNetId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Params, nullptr);
	uFnInt64ToUniqueNetId->FunctionFlags |= 0x400;
	uFnInt64ToUniqueNetId->iNative = 35091;

	memcpy_s(&OutUID, sizeof(OutUID), &Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID));

	return Int64ToUniqueNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35260])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToInt64 = nullptr;

	if (!uFnUniqueNetIdToInt64)
	{
		uFnUniqueNetIdToInt64 = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params UniqueNetIdToInt64_Params;
	memset(&UniqueNetIdToInt64_Params, 0, sizeof(UniqueNetIdToInt64_Params));
	memcpy_s(&UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToInt64->iNative = 0;
	uFnUniqueNetIdToInt64->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Params, nullptr);
	uFnUniqueNetIdToInt64->FunctionFlags |= 0x400;
	uFnUniqueNetIdToInt64->iNative = 35260;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid));

	return UniqueNetIdToInt64_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetLobbyInterface
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 NewInterface                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::eventSetLobbyInterface(class UObject* NewInterface)
{
	static UFunction* uFnSetLobbyInterface = nullptr;

	if (!uFnSetLobbyInterface)
	{
		uFnSetLobbyInterface = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_eventSetLobbyInterface_Params SetLobbyInterface_Params;
	memset(&SetLobbyInterface_Params, 0, sizeof(SetLobbyInterface_Params));
	SetLobbyInterface_Params.NewInterface = NewInterface;

	this->ProcessEvent(uFnSetLobbyInterface, &SetLobbyInterface_Params, nullptr);

	return SetLobbyInterface_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35188])
// Parameter Info:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* uFnNotifyVOIPPlaybackFinished = nullptr;

	if (!uFnNotifyVOIPPlaybackFinished)
	{
		uFnNotifyVOIPPlaybackFinished = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params NotifyVOIPPlaybackFinished_Params;
	memset(&NotifyVOIPPlaybackFinished_Params, 0, sizeof(NotifyVOIPPlaybackFinished_Params));
	NotifyVOIPPlaybackFinished_Params.VOIPAudioComponent = VOIPAudioComponent;

	uFnNotifyVOIPPlaybackFinished->iNative = 0;
	uFnNotifyVOIPPlaybackFinished->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Params, nullptr);
	uFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
	uFnNotifyVOIPPlaybackFinished->iNative = 35188;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UAudioComponent*         AC                             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* uFnOnVOIPPlaybackFinished = nullptr;

	if (!uFnOnVOIPPlaybackFinished)
	{
		uFnOnVOIPPlaybackFinished = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params OnVOIPPlaybackFinished_Params;
	memset(&OnVOIPPlaybackFinished_Params, 0, sizeof(OnVOIPPlaybackFinished_Params));
	OnVOIPPlaybackFinished_Params.AC = AC;

	this->ProcessEvent(uFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[35241])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowProfileUI(uint8_t LocalUserNum, const class FString& SubURL, const struct FUniqueNetId& PlayerUID)
{
	static UFunction* uFnShowProfileUI = nullptr;

	if (!uFnShowProfileUI)
	{
		uFnShowProfileUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Params ShowProfileUI_Params;
	memset(&ShowProfileUI_Params, 0, sizeof(ShowProfileUI_Params));
	memcpy_s(&ShowProfileUI_Params.LocalUserNum, sizeof(ShowProfileUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowProfileUI_Params.SubURL, sizeof(ShowProfileUI_Params.SubURL), &SubURL, sizeof(SubURL));
	memcpy_s(&ShowProfileUI_Params.PlayerUID, sizeof(ShowProfileUI_Params.PlayerUID), &PlayerUID, sizeof(PlayerUID));

	uFnShowProfileUI->iNative = 0;
	uFnShowProfileUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowProfileUI, &ShowProfileUI_Params, nullptr);
	uFnShowProfileUI->FunctionFlags |= 0x400;
	uFnShowProfileUI->iNative = 35241;

	return ShowProfileUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35261])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToPlayerName = nullptr;

	if (!uFnUniqueNetIdToPlayerName)
	{
		uFnUniqueNetIdToPlayerName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params UniqueNetIdToPlayerName_Params;
	memset(&UniqueNetIdToPlayerName_Params, 0, sizeof(UniqueNetIdToPlayerName_Params));
	memcpy_s(&UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToPlayerName->iNative = 0;
	uFnUniqueNetIdToPlayerName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Params, nullptr);
	uFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;
	uFnUniqueNetIdToPlayerName->iNative = 35261;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid));

	return UniqueNetIdToPlayerName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35057])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)
// int32_t                        ProgressCount                  (CPF_Parm)
// int32_t                        MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress)
{
	static UFunction* uFnDisplayAchievementProgress = nullptr;

	if (!uFnDisplayAchievementProgress)
	{
		uFnDisplayAchievementProgress = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params DisplayAchievementProgress_Params;
	memset(&DisplayAchievementProgress_Params, 0, sizeof(DisplayAchievementProgress_Params));
	memcpy_s(&DisplayAchievementProgress_Params.AchievementId, sizeof(DisplayAchievementProgress_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&DisplayAchievementProgress_Params.ProgressCount, sizeof(DisplayAchievementProgress_Params.ProgressCount), &ProgressCount, sizeof(ProgressCount));
	memcpy_s(&DisplayAchievementProgress_Params.MaxProgress, sizeof(DisplayAchievementProgress_Params.MaxProgress), &MaxProgress, sizeof(MaxProgress));

	uFnDisplayAchievementProgress->iNative = 0;
	uFnDisplayAchievementProgress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisplayAchievementProgress, &DisplayAchievementProgress_Params, nullptr);
	uFnDisplayAchievementProgress->FunctionFlags |= 0x400;
	uFnDisplayAchievementProgress->iNative = 35057;

	return DisplayAchievementProgress_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35039])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  LeaderboardName                (CPF_Parm | CPF_NeedCtorLink)
// ELeaderboardSortType           SortType                       (CPF_Parm)
// ELeaderboardFormat             DisplayFormat                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(const class FString& LeaderboardName, ELeaderboardSortType SortType, ELeaderboardFormat DisplayFormat)
{
	static UFunction* uFnCreateLeaderboard = nullptr;

	if (!uFnCreateLeaderboard)
	{
		uFnCreateLeaderboard = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Params CreateLeaderboard_Params;
	memset(&CreateLeaderboard_Params, 0, sizeof(CreateLeaderboard_Params));
	memcpy_s(&CreateLeaderboard_Params.LeaderboardName, sizeof(CreateLeaderboard_Params.LeaderboardName), &LeaderboardName, sizeof(LeaderboardName));
	memcpy_s(&CreateLeaderboard_Params.SortType, sizeof(CreateLeaderboard_Params.SortType), &SortType, sizeof(SortType));
	memcpy_s(&CreateLeaderboard_Params.DisplayFormat, sizeof(CreateLeaderboard_Params.DisplayFormat), &DisplayFormat, sizeof(DisplayFormat));

	uFnCreateLeaderboard->iNative = 0;
	uFnCreateLeaderboard->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateLeaderboard, &CreateLeaderboard_Params, nullptr);
	uFnCreateLeaderboard->FunctionFlags |= 0x400;
	uFnCreateLeaderboard->iNative = 35039;

	return CreateLeaderboard_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[8501])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static UFunction* uFnResetStats = nullptr;

	if (!uFnResetStats)
	{
		uFnResetStats = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execResetStats_Params ResetStats_Params;
	memset(&ResetStats_Params, 0, sizeof(ResetStats_Params));
	ResetStats_Params.bResetAchievements = bResetAchievements;

	uFnResetStats->iNative = 0;
	uFnResetStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetStats, &ResetStats_Params, nullptr);
	uFnResetStats->FunctionFlags |= 0x400;
	uFnResetStats->iNative = 8501;

	return ResetStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& EditableMessage, class TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memset(&ShowCustomMessageUI_Params, 0, sizeof(ShowCustomMessageUI_Params));
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, sizeof(ShowCustomMessageUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, sizeof(ShowCustomMessageUI_Params.MessageTitle), &MessageTitle, sizeof(MessageTitle));
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, sizeof(ShowCustomMessageUI_Params.NonEditableMessage), &NonEditableMessage, sizeof(NonEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, sizeof(ShowCustomMessageUI_Params.EditableMessage), &EditableMessage, sizeof(EditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients), &Recipients, sizeof(Recipients));

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, sizeof(Recipients), &ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients));

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memset(&ClearCrossTitleProfileSettings_Params, 0, sizeof(ClearCrossTitleProfileSettings_Params));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ClearCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, sizeof(ClearCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memset(&GetCrossTitleProfileSettings_Params, 0, sizeof(GetCrossTitleProfileSettings_Params));
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, sizeof(GetCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, sizeof(GetCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memset(&OnReadCrossTitleProfileSettingsComplete_Params, 0, sizeof(OnReadCrossTitleProfileSettingsComplete_Params));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.TitleId), &TitleId, sizeof(TitleId));
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memset(&ReadCrossTitleProfileSettings_Params, 0, sizeof(ReadCrossTitleProfileSettings_Params));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ReadCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, sizeof(ReadCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadCrossTitleProfileSettings_Params.ProfileSettings = ProfileSettings;

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AvatarItemId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId)
{
	static UFunction* uFnUnlockAvatarAward = nullptr;

	if (!uFnUnlockAvatarAward)
	{
		uFnUnlockAvatarAward = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params UnlockAvatarAward_Params;
	memset(&UnlockAvatarAward_Params, 0, sizeof(UnlockAvatarAward_Params));
	memcpy_s(&UnlockAvatarAward_Params.LocalUserNum, sizeof(UnlockAvatarAward_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAvatarAward_Params.AvatarItemId, sizeof(UnlockAvatarAward_Params.AvatarItemId), &AvatarItemId, sizeof(AvatarItemId));

	this->ProcessEvent(uFnUnlockAvatarAward, &UnlockAvatarAward_Params, nullptr);

	return UnlockAvatarAward_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[35087])
// Parameter Info:
// class TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(class TArray<struct FSteamPlayerClanData>& Results)
{
	static UFunction* uFnGetSteamClanData = nullptr;

	if (!uFnGetSteamClanData)
	{
		uFnGetSteamClanData = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Params GetSteamClanData_Params;
	memset(&GetSteamClanData_Params, 0, sizeof(GetSteamClanData_Params));
	memcpy_s(&GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results), &Results, sizeof(Results));

	uFnGetSteamClanData->iNative = 0;
	uFnGetSteamClanData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSteamClanData, &GetSteamClanData_Params, nullptr);
	uFnGetSteamClanData->FunctionFlags |= 0x400;
	uFnGetSteamClanData->iNative = 35087;

	memcpy_s(&Results, sizeof(Results), &GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnClearGetNumberOfCurrentPlayersCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params ClearGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnAddGetNumberOfCurrentPlayersCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params AddGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memset(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params, 0, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params));
	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, sizeof(AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate), &GetNumberOfCurrentPlayersCompleteDelegate, sizeof(GetNumberOfCurrentPlayersCompleteDelegate));

	this->ProcessEvent(uFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers)
{
	static UFunction* uFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		uFnOnGetNumberOfCurrentPlayersComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params OnGetNumberOfCurrentPlayersComplete_Params;
	memset(&OnGetNumberOfCurrentPlayersComplete_Params, 0, sizeof(OnGetNumberOfCurrentPlayersComplete_Params));
	memcpy_s(&OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers, sizeof(OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers), &TotalPlayers, sizeof(TotalPlayers));

	this->ProcessEvent(uFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21845])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* uFnGetNumberOfCurrentPlayers = nullptr;

	if (!uFnGetNumberOfCurrentPlayers)
	{
		uFnGetNumberOfCurrentPlayers = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params GetNumberOfCurrentPlayers_Params;
	memset(&GetNumberOfCurrentPlayers_Params, 0, sizeof(GetNumberOfCurrentPlayers_Params));

	uFnGetNumberOfCurrentPlayers->iNative = 0;
	uFnGetNumberOfCurrentPlayers->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Params, nullptr);
	uFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;
	uFnGetNumberOfCurrentPlayers->iNative = 21845;

	return GetNumberOfCurrentPlayers_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[35216])
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// int32_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int32_t Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* uFnReadOnlineAvatar = nullptr;

	if (!uFnReadOnlineAvatar)
	{
		uFnReadOnlineAvatar = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params ReadOnlineAvatar_Params;
	memset(&ReadOnlineAvatar_Params, 0, sizeof(ReadOnlineAvatar_Params));
	memcpy_s(&ReadOnlineAvatar_Params.PlayerNetId, sizeof(ReadOnlineAvatar_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&ReadOnlineAvatar_Params.Size, sizeof(ReadOnlineAvatar_Params.Size), &Size, sizeof(Size));
	memcpy_s(&ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate), &ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatarCompleteDelegate));

	uFnReadOnlineAvatar->iNative = 0;
	uFnReadOnlineAvatar->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineAvatar, &ReadOnlineAvatar_Params, nullptr);
	uFnReadOnlineAvatar->FunctionFlags |= 0x400;
	uFnReadOnlineAvatar->iNative = 35216;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// class UTexture2D*              Avatar                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static UFunction* uFnOnReadOnlineAvatarComplete = nullptr;

	if (!uFnOnReadOnlineAvatarComplete)
	{
		uFnOnReadOnlineAvatarComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params OnReadOnlineAvatarComplete_Params;
	memset(&OnReadOnlineAvatarComplete_Params, 0, sizeof(OnReadOnlineAvatarComplete_Params));
	memcpy_s(&OnReadOnlineAvatarComplete_Params.PlayerNetId, sizeof(OnReadOnlineAvatarComplete_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	OnReadOnlineAvatarComplete_Params.Avatar = Avatar;

	this->ProcessEvent(uFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[28299])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memset(&ShowCustomPlayersUI_Params, 0, sizeof(ShowCustomPlayersUI_Params));
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, sizeof(ShowCustomPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomPlayersUI_Params.Title, sizeof(ShowCustomPlayersUI_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowCustomPlayersUI_Params.Description, sizeof(ShowCustomPlayersUI_Params.Description), &Description, sizeof(Description));
	memcpy_s(&ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players), &Players, sizeof(Players));

	uFnShowCustomPlayersUI->iNative = 0;
	uFnShowCustomPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);
	uFnShowCustomPlayersUI->FunctionFlags |= 0x400;
	uFnShowCustomPlayersUI->iNative = 28299;

	memcpy_s(&Players, sizeof(Players), &ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players));

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21578])
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, class TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetAchievements_Params GetAchievements_Params;
	memset(&GetAchievements_Params, 0, sizeof(GetAchievements_Params));
	memcpy_s(&GetAchievements_Params.LocalUserNum, sizeof(GetAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetAchievements_Params.TitleId, sizeof(GetAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements), &Achievements, sizeof(Achievements));

	uFnGetAchievements->iNative = 0;
	uFnGetAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);
	uFnGetAchievements->FunctionFlags |= 0x400;
	uFnGetAchievements->iNative = 21578;

	memcpy_s(&Achievements, sizeof(Achievements), &GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements));

	return static_cast<EOnlineEnumerationReadState>(GetAchievements_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memset(&ClearReadAchievementsCompleteDelegate_Params, 0, sizeof(ClearReadAchievementsCompleteDelegate_Params));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memset(&AddReadAchievementsCompleteDelegate_Params, 0, sizeof(AddReadAchievementsCompleteDelegate_Params));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, sizeof(OnReadAchievementsComplete_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26851])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadAchievements_Params ReadAchievements_Params;
	memset(&ReadAchievements_Params, 0, sizeof(ReadAchievements_Params));
	memcpy_s(&ReadAchievements_Params.LocalUserNum, sizeof(ReadAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadAchievements_Params.TitleId, sizeof(ReadAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->iNative = 0;
	uFnReadAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);
	uFnReadAchievements->FunctionFlags |= 0x400;
	uFnReadAchievements->iNative = 26851;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28328])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Params ShowPlayersUI_Params;
	memset(&ShowPlayersUI_Params, 0, sizeof(ShowPlayersUI_Params));
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, sizeof(ShowPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowPlayersUI->iNative = 0;
	uFnShowPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);
	uFnShowPlayersUI->FunctionFlags |= 0x400;
	uFnShowPlayersUI->iNative = 28328;

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28307])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memset(&ShowFriendsInviteUI_Params, 0, sizeof(ShowFriendsInviteUI_Params));
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, sizeof(ShowFriendsInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, sizeof(ShowFriendsInviteUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFriendsInviteUI->iNative = 0;
	uFnShowFriendsInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);
	uFnShowFriendsInviteUI->FunctionFlags |= 0x400;
	uFnShowFriendsInviteUI->iNative = 28307;

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28308])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Params ShowFriendsUI_Params;
	memset(&ShowFriendsUI_Params, 0, sizeof(ShowFriendsUI_Params));
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, sizeof(ShowFriendsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowFriendsUI->iNative = 0;
	uFnShowFriendsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);
	uFnShowFriendsUI->FunctionFlags |= 0x400;
	uFnShowFriendsUI->iNative = 28308;

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memset(&ClearProfileDataChangedDelegate_Params, 0, sizeof(ClearProfileDataChangedDelegate_Params));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, sizeof(ClearProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memset(&AddProfileDataChangedDelegate_Params, 0, sizeof(AddProfileDataChangedDelegate_Params));
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, sizeof(AddProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params OnProfileDataChanged_Params;
	memset(&OnProfileDataChanged_Params, 0, sizeof(OnProfileDataChanged_Params));

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29767])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memset(&UnlockGamerPicture_Params, 0, sizeof(UnlockGamerPicture_Params));
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, sizeof(UnlockGamerPicture_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockGamerPicture_Params.PictureId, sizeof(UnlockGamerPicture_Params.PictureId), &PictureId, sizeof(PictureId));

	uFnUnlockGamerPicture->iNative = 0;
	uFnUnlockGamerPicture->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);
	uFnUnlockGamerPicture->FunctionFlags |= 0x400;
	uFnUnlockGamerPicture->iNative = 29767;

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memset(&ClearUnlockAchievementCompleteDelegate_Params, 0, sizeof(ClearUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memset(&AddUnlockAchievementCompleteDelegate_Params, 0, sizeof(AddUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(AddUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	memset(&OnUnlockAchievementComplete_Params, 0, sizeof(OnUnlockAchievementComplete_Params));
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[29764])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, sizeof(UnlockAchievement_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAchievement_Params.AchievementId, sizeof(UnlockAchievement_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&UnlockAchievement_Params.PercentComplete, sizeof(UnlockAchievement_Params.PercentComplete), &PercentComplete, sizeof(PercentComplete));

	uFnUnlockAchievement->iNative = 0;
	uFnUnlockAchievement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
	uFnUnlockAchievement->FunctionFlags |= 0x400;
	uFnUnlockAchievement->iNative = 29764;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[22889])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int32_t DeviceID, int32_t SizeNeeded)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Params IsDeviceValid_Params;
	memset(&IsDeviceValid_Params, 0, sizeof(IsDeviceValid_Params));
	memcpy_s(&IsDeviceValid_Params.DeviceID, sizeof(IsDeviceValid_Params.DeviceID), &DeviceID, sizeof(DeviceID));
	memcpy_s(&IsDeviceValid_Params.SizeNeeded, sizeof(IsDeviceValid_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));

	uFnIsDeviceValid->iNative = 0;
	uFnIsDeviceValid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);
	uFnIsDeviceValid->FunctionFlags |= 0x400;
	uFnIsDeviceValid->iNative = 22889;

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21717])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlineSubsystemSteamworks::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memset(&GetDeviceSelectionResults_Params, 0, sizeof(GetDeviceSelectionResults_Params));
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, sizeof(GetDeviceSelectionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName), &DeviceName, sizeof(DeviceName));

	uFnGetDeviceSelectionResults->iNative = 0;
	uFnGetDeviceSelectionResults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);
	uFnGetDeviceSelectionResults->FunctionFlags |= 0x400;
	uFnGetDeviceSelectionResults->iNative = 21717;

	memcpy_s(&DeviceName, sizeof(DeviceName), &GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName));

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memset(&ClearDeviceSelectionDoneDelegate_Params, 0, sizeof(ClearDeviceSelectionDoneDelegate_Params));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(ClearDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memset(&AddDeviceSelectionDoneDelegate_Params, 0, sizeof(AddDeviceSelectionDoneDelegate_Params));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(AddDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(AddDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28303])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// uint32_t                       bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool bManageStorage)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memset(&ShowDeviceSelectionUI_Params, 0, sizeof(ShowDeviceSelectionUI_Params));
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, sizeof(ShowDeviceSelectionUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, sizeof(ShowDeviceSelectionUI_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));
	ShowDeviceSelectionUI_Params.bManageStorage = bManageStorage;

	uFnShowDeviceSelectionUI->iNative = 0;
	uFnShowDeviceSelectionUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);
	uFnShowDeviceSelectionUI->FunctionFlags |= 0x400;
	uFnShowDeviceSelectionUI->iNative = 28303;

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28320])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMembershipMarketplaceUI = nullptr;

	if (!uFnShowMembershipMarketplaceUI)
	{
		uFnShowMembershipMarketplaceUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params ShowMembershipMarketplaceUI_Params;
	memset(&ShowMembershipMarketplaceUI_Params, 0, sizeof(ShowMembershipMarketplaceUI_Params));
	memcpy_s(&ShowMembershipMarketplaceUI_Params.LocalUserNum, sizeof(ShowMembershipMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowMembershipMarketplaceUI->iNative = 0;
	uFnShowMembershipMarketplaceUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Params, nullptr);
	uFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;
	uFnShowMembershipMarketplaceUI->iNative = 28320;

	return ShowMembershipMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28296])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t CategoryMask, int32_t OfferId)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memset(&ShowContentMarketplaceUI_Params, 0, sizeof(ShowContentMarketplaceUI_Params));
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, sizeof(ShowContentMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowContentMarketplaceUI_Params.CategoryMask, sizeof(ShowContentMarketplaceUI_Params.CategoryMask), &CategoryMask, sizeof(CategoryMask));
	memcpy_s(&ShowContentMarketplaceUI_Params.OfferId, sizeof(ShowContentMarketplaceUI_Params.OfferId), &OfferId, sizeof(OfferId));

	uFnShowContentMarketplaceUI->iNative = 0;
	uFnShowContentMarketplaceUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);
	uFnShowContentMarketplaceUI->FunctionFlags |= 0x400;
	uFnShowContentMarketplaceUI->iNative = 28296;

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28314])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(uint8_t LocalUserNum, const class FString& InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, sizeof(ShowInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowInviteUI_Params.InviteText, sizeof(ShowInviteUI_Params.InviteText), &InviteText, sizeof(InviteText));

	uFnShowInviteUI->iNative = 0;
	uFnShowInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);
	uFnShowInviteUI->FunctionFlags |= 0x400;
	uFnShowInviteUI->iNative = 28314;

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28293])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memset(&ShowAchievementsUI_Params, 0, sizeof(ShowAchievementsUI_Params));
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, sizeof(ShowAchievementsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowAchievementsUI->iNative = 0;
	uFnShowAchievementsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);
	uFnShowAchievementsUI->FunctionFlags |= 0x400;
	uFnShowAchievementsUI->iNative = 28293;

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28321])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Params ShowMessagesUI_Params;
	memset(&ShowMessagesUI_Params, 0, sizeof(ShowMessagesUI_Params));
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, sizeof(ShowMessagesUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowMessagesUI->iNative = 0;
	uFnShowMessagesUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);
	uFnShowMessagesUI->FunctionFlags |= 0x400;
	uFnShowMessagesUI->iNative = 28321;

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28309])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memset(&ShowGamerCardUI_Params, 0, sizeof(ShowGamerCardUI_Params));
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, sizeof(ShowGamerCardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowGamerCardUI_Params.PlayerID, sizeof(ShowGamerCardUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowGamerCardUI->iNative = 0;
	uFnShowGamerCardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);
	uFnShowGamerCardUI->FunctionFlags |= 0x400;
	uFnShowGamerCardUI->iNative = 28309;

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28304])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memset(&ShowFeedbackUI_Params, 0, sizeof(ShowFeedbackUI_Params));
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, sizeof(ShowFeedbackUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, sizeof(ShowFeedbackUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFeedbackUI->iNative = 0;
	uFnShowFeedbackUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);
	uFnShowFeedbackUI->FunctionFlags |= 0x400;
	uFnShowFeedbackUI->iNative = 28304;

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.LocalUserNum, sizeof(DeleteMessage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DeleteMessage_Params.MessageIndex, sizeof(DeleteMessage_Params.MessageIndex), &MessageIndex, sizeof(MessageIndex));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	memcpy_s(&UnmuteAll_Params.LocalUserNum, sizeof(UnmuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	memcpy_s(&MuteAll_Params.LocalUserNum, sizeof(MuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class TArray<struct FDouble>   Mus                            (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FDouble>   Sigmas                         (CPF_Parm | CPF_NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (CPF_Parm | CPF_OutParm)
// struct FDouble                 OutAggregateSigma              (CPF_Parm | CPF_OutParm)

void UOnlineSubsystemSteamworks::CalcAggregateSkill(const class TArray<struct FDouble>& Mus, const class TArray<struct FDouble>& Sigmas, struct FDouble& OutAggregateMu, struct FDouble& OutAggregateSigma)
{
	static UFunction* uFnCalcAggregateSkill = nullptr;

	if (!uFnCalcAggregateSkill)
	{
		uFnCalcAggregateSkill = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Params CalcAggregateSkill_Params;
	memset(&CalcAggregateSkill_Params, 0, sizeof(CalcAggregateSkill_Params));
	memcpy_s(&CalcAggregateSkill_Params.Mus, sizeof(CalcAggregateSkill_Params.Mus), &Mus, sizeof(Mus));
	memcpy_s(&CalcAggregateSkill_Params.Sigmas, sizeof(CalcAggregateSkill_Params.Sigmas), &Sigmas, sizeof(Sigmas));
	memcpy_s(&CalcAggregateSkill_Params.OutAggregateMu, sizeof(CalcAggregateSkill_Params.OutAggregateMu), &OutAggregateMu, sizeof(OutAggregateMu));
	memcpy_s(&CalcAggregateSkill_Params.OutAggregateSigma, sizeof(CalcAggregateSkill_Params.OutAggregateSigma), &OutAggregateSigma, sizeof(OutAggregateSigma));

	this->ProcessEvent(uFnCalcAggregateSkill, &CalcAggregateSkill_Params, nullptr);

	memcpy_s(&OutAggregateMu, sizeof(OutAggregateMu), &CalcAggregateSkill_Params.OutAggregateMu, sizeof(CalcAggregateSkill_Params.OutAggregateMu));
	memcpy_s(&OutAggregateSigma, sizeof(OutAggregateSigma), &CalcAggregateSkill_Params.OutAggregateSigma, sizeof(CalcAggregateSkill_Params.OutAggregateSigma));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[27028])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// class FString                  ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, class FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memset(&RegisterStatGuid_Params, 0, sizeof(RegisterStatGuid_Params));
	memcpy_s(&RegisterStatGuid_Params.PlayerID, sizeof(RegisterStatGuid_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid), &ClientStatGuid, sizeof(ClientStatGuid));

	uFnRegisterStatGuid->iNative = 0;
	uFnRegisterStatGuid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);
	uFnRegisterStatGuid->FunctionFlags |= 0x400;
	uFnRegisterStatGuid->iNative = 27028;

	memcpy_s(&ClientStatGuid, sizeof(ClientStatGuid), &RegisterStatGuid_Params.ClientStatGuid, sizeof(RegisterStatGuid_Params.ClientStatGuid));

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21649])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Params GetClientStatGuid_Params;
	memset(&GetClientStatGuid_Params, 0, sizeof(GetClientStatGuid_Params));

	uFnGetClientStatGuid->iNative = 0;
	uFnGetClientStatGuid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);
	uFnGetClientStatGuid->FunctionFlags |= 0x400;
	uFnGetClientStatGuid->iNative = 21649;

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memset(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, 0, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params));
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memset(&AddRegisterHostStatGuidCompleteDelegate_Params, 0, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params));
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, sizeof(AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate), &RegisterHostStatGuidCompleteDelegate, sizeof(RegisterHostStatGuidCompleteDelegate));

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	memset(&OnRegisterHostStatGuidComplete_Params, 0, sizeof(OnRegisterHostStatGuidComplete_Params));
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[27014])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(class FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memset(&RegisterHostStatGuid_Params, 0, sizeof(RegisterHostStatGuid_Params));
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid), &HostStatGuid, sizeof(HostStatGuid));

	uFnRegisterHostStatGuid->iNative = 0;
	uFnRegisterHostStatGuid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);
	uFnRegisterHostStatGuid->FunctionFlags |= 0x400;
	uFnRegisterHostStatGuid->iNative = 27014;

	memcpy_s(&HostStatGuid, sizeof(HostStatGuid), &RegisterHostStatGuid_Params.HostStatGuid, sizeof(RegisterHostStatGuid_Params.HostStatGuid));

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21776])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Params GetHostStatGuid_Params;
	memset(&GetHostStatGuid_Params, 0, sizeof(GetHostStatGuid_Params));

	uFnGetHostStatGuid->iNative = 0;
	uFnGetHostStatGuid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);
	uFnGetHostStatGuid->FunctionFlags |= 0x400;
	uFnGetHostStatGuid->iNative = 21776;

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memset(&ClearFriendMessageReceivedDelegate_Params, 0, sizeof(ClearFriendMessageReceivedDelegate_Params));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(ClearFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memset(&AddFriendMessageReceivedDelegate_Params, 0, sizeof(AddFriendMessageReceivedDelegate_Params));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendMessageReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, sizeof(AddFriendMessageReceivedDelegate_Params.MessageDelegate), &MessageDelegate, sizeof(MessageDelegate));

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm)
// class FString                  SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(uint8_t LocalUserNum, const struct FUniqueNetId& SendingPlayer, const class FString& SendingNick, const class FString& Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memset(&OnFriendMessageReceived_Params, 0, sizeof(OnFriendMessageReceived_Params));
	memcpy_s(&OnFriendMessageReceived_Params.LocalUserNum, sizeof(OnFriendMessageReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, sizeof(OnFriendMessageReceived_Params.SendingPlayer), &SendingPlayer, sizeof(SendingPlayer));
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, sizeof(OnFriendMessageReceived_Params.SendingNick), &SendingNick, sizeof(SendingNick));
	memcpy_s(&OnFriendMessageReceived_Params.Message, sizeof(OnFriendMessageReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(uint8_t LocalUserNum, class TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetFriendMessages_Params GetFriendMessages_Params;
	memset(&GetFriendMessages_Params, 0, sizeof(GetFriendMessages_Params));
	memcpy_s(&GetFriendMessages_Params.LocalUserNum, sizeof(GetFriendMessages_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages), &FriendMessages, sizeof(FriendMessages));

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&FriendMessages, sizeof(FriendMessages), &GetFriendMessages_Params.FriendMessages, sizeof(GetFriendMessages_Params.FriendMessages));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memset(&ClearJoinFriendGameCompleteDelegate_Params, 0, sizeof(ClearJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memset(&AddJoinFriendGameCompleteDelegate_Params, 0, sizeof(AddJoinFriendGameCompleteDelegate_Params));
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, sizeof(AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate), &JoinFriendGameCompleteDelegate, sizeof(JoinFriendGameCompleteDelegate));

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	memset(&OnJoinFriendGameComplete_Params, 0, sizeof(OnJoinFriendGameComplete_Params));
	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23004])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::JoinFriendGame(uint8_t LocalUserNum, const struct FUniqueNetId& Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execJoinFriendGame_Params JoinFriendGame_Params;
	memset(&JoinFriendGame_Params, 0, sizeof(JoinFriendGame_Params));
	memcpy_s(&JoinFriendGame_Params.LocalUserNum, sizeof(JoinFriendGame_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&JoinFriendGame_Params.Friend, sizeof(JoinFriendGame_Params.Friend), &Friend, sizeof(Friend));

	uFnJoinFriendGame->iNative = 0;
	uFnJoinFriendGame->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);
	uFnJoinFriendGame->FunctionFlags |= 0x400;
	uFnJoinFriendGame->iNative = 23004;

	return JoinFriendGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memset(&ClearReceivedGameInviteDelegate_Params, 0, sizeof(ClearReceivedGameInviteDelegate_Params));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(ClearReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memset(&AddReceivedGameInviteDelegate_Params, 0, sizeof(AddReceivedGameInviteDelegate_Params));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.LocalUserNum, sizeof(AddReceivedGameInviteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, sizeof(AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate), &ReceivedGameInviteDelegate, sizeof(ReceivedGameInviteDelegate));

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(uint8_t LocalUserNum, const class FString& InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memset(&OnReceivedGameInvite_Params, 0, sizeof(OnReceivedGameInvite_Params));
	memcpy_s(&OnReceivedGameInvite_Params.LocalUserNum, sizeof(OnReceivedGameInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, sizeof(OnReceivedGameInvite_Params.InviterName), &InviterName, sizeof(InviterName));

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[27671])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FUniqueNetId> Friends                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(uint8_t LocalUserNum, const class TArray<struct FUniqueNetId>& Friends, const class FString& Text)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memset(&SendGameInviteToFriends_Params, 0, sizeof(SendGameInviteToFriends_Params));
	memcpy_s(&SendGameInviteToFriends_Params.LocalUserNum, sizeof(SendGameInviteToFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriends_Params.Friends, sizeof(SendGameInviteToFriends_Params.Friends), &Friends, sizeof(Friends));
	memcpy_s(&SendGameInviteToFriends_Params.Text, sizeof(SendGameInviteToFriends_Params.Text), &Text, sizeof(Text));

	uFnSendGameInviteToFriends->iNative = 0;
	uFnSendGameInviteToFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);
	uFnSendGameInviteToFriends->FunctionFlags |= 0x400;
	uFnSendGameInviteToFriends->iNative = 27671;

	return SendGameInviteToFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[27670])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& Text)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memset(&SendGameInviteToFriend_Params, 0, sizeof(SendGameInviteToFriend_Params));
	memcpy_s(&SendGameInviteToFriend_Params.LocalUserNum, sizeof(SendGameInviteToFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendGameInviteToFriend_Params.Friend, sizeof(SendGameInviteToFriend_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendGameInviteToFriend_Params.Text, sizeof(SendGameInviteToFriend_Params.Text), &Text, sizeof(Text));

	uFnSendGameInviteToFriend->iNative = 0;
	uFnSendGameInviteToFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);
	uFnSendGameInviteToFriend->FunctionFlags |= 0x400;
	uFnSendGameInviteToFriend->iNative = 27670;

	return SendGameInviteToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27678])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendMessageToFriendW(uint8_t LocalUserNum, const struct FUniqueNetId& Friend, const class FString& Message)
{
	static UFunction* uFnSendMessageToFriendW = nullptr;

	if (!uFnSendMessageToFriendW)
	{
		uFnSendMessageToFriendW = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSendMessageToFriendW_Params SendMessageToFriendW_Params;
	memset(&SendMessageToFriendW_Params, 0, sizeof(SendMessageToFriendW_Params));
	memcpy_s(&SendMessageToFriendW_Params.LocalUserNum, sizeof(SendMessageToFriendW_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SendMessageToFriendW_Params.Friend, sizeof(SendMessageToFriendW_Params.Friend), &Friend, sizeof(Friend));
	memcpy_s(&SendMessageToFriendW_Params.Message, sizeof(SendMessageToFriendW_Params.Message), &Message, sizeof(Message));

	uFnSendMessageToFriendW->iNative = 0;
	uFnSendMessageToFriendW->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendMessageToFriendW, &SendMessageToFriendW_Params, nullptr);
	uFnSendMessageToFriendW->FunctionFlags |= 0x400;
	uFnSendMessageToFriendW->iNative = 27678;

	return SendMessageToFriendW_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memset(&ClearFriendInviteReceivedDelegate_Params, 0, sizeof(ClearFriendInviteReceivedDelegate_Params));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(ClearFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(ClearFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memset(&AddFriendInviteReceivedDelegate_Params, 0, sizeof(AddFriendInviteReceivedDelegate_Params));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.LocalUserNum, sizeof(AddFriendInviteReceivedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, sizeof(AddFriendInviteReceivedDelegate_Params.InviteDelegate), &InviteDelegate, sizeof(InviteDelegate));

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)
// class FString                  RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const class FString& RequestingNick, const class FString& Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memset(&OnFriendInviteReceived_Params, 0, sizeof(OnFriendInviteReceived_Params));
	memcpy_s(&OnFriendInviteReceived_Params.LocalUserNum, sizeof(OnFriendInviteReceived_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, sizeof(OnFriendInviteReceived_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, sizeof(OnFriendInviteReceived_Params.RequestingNick), &RequestingNick, sizeof(RequestingNick));
	memcpy_s(&OnFriendInviteReceived_Params.Message, sizeof(OnFriendInviteReceived_Params.Message), &Message, sizeof(Message));

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[19565])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memset(&DenyFriendInvite_Params, 0, sizeof(DenyFriendInvite_Params));
	memcpy_s(&DenyFriendInvite_Params.LocalUserNum, sizeof(DenyFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, sizeof(DenyFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	uFnDenyFriendInvite->iNative = 0;
	uFnDenyFriendInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);
	uFnDenyFriendInvite->FunctionFlags |= 0x400;
	uFnDenyFriendInvite->iNative = 19565;

	return DenyFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[14413])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(uint8_t LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memset(&AcceptFriendInvite_Params, 0, sizeof(AcceptFriendInvite_Params));
	memcpy_s(&AcceptFriendInvite_Params.LocalUserNum, sizeof(AcceptFriendInvite_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, sizeof(AcceptFriendInvite_Params.RequestingPlayer), &RequestingPlayer, sizeof(RequestingPlayer));

	uFnAcceptFriendInvite->iNative = 0;
	uFnAcceptFriendInvite->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);
	uFnAcceptFriendInvite->FunctionFlags |= 0x400;
	uFnAcceptFriendInvite->iNative = 14413;

	return AcceptFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27087])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RemoveFriend(uint8_t LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRemoveFriend_Params RemoveFriend_Params;
	memset(&RemoveFriend_Params, 0, sizeof(RemoveFriend_Params));
	memcpy_s(&RemoveFriend_Params.LocalUserNum, sizeof(RemoveFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&RemoveFriend_Params.FormerFriend, sizeof(RemoveFriend_Params.FormerFriend), &FormerFriend, sizeof(FormerFriend));

	uFnRemoveFriend->iNative = 0;
	uFnRemoveFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);
	uFnRemoveFriend->FunctionFlags |= 0x400;
	uFnRemoveFriend->iNative = 27087;

	return RemoveFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memset(&ClearAddFriendByNameCompleteDelegate_Params, 0, sizeof(ClearAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memset(&AddAddFriendByNameCompleteDelegate_Params, 0, sizeof(AddAddFriendByNameCompleteDelegate_Params));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.LocalUserNum, sizeof(AddAddFriendByNameCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, sizeof(AddAddFriendByNameCompleteDelegate_Params.FriendDelegate), &FriendDelegate, sizeof(FriendDelegate));

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	memset(&OnAddFriendByNameComplete_Params, 0, sizeof(OnAddFriendByNameComplete_Params));
	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[14564])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriendByName(uint8_t LocalUserNum, const class FString& FriendName, const class FString& Message)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFriendByName_Params AddFriendByName_Params;
	memset(&AddFriendByName_Params, 0, sizeof(AddFriendByName_Params));
	memcpy_s(&AddFriendByName_Params.LocalUserNum, sizeof(AddFriendByName_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendByName_Params.FriendName, sizeof(AddFriendByName_Params.FriendName), &FriendName, sizeof(FriendName));
	memcpy_s(&AddFriendByName_Params.Message, sizeof(AddFriendByName_Params.Message), &Message, sizeof(Message));

	uFnAddFriendByName->iNative = 0;
	uFnAddFriendByName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);
	uFnAddFriendByName->FunctionFlags |= 0x400;
	uFnAddFriendByName->iNative = 14564;

	return AddFriendByName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[14563])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm)
// class FString                  Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriend(uint8_t LocalUserNum, const struct FUniqueNetId& NewFriend, const class FString& Message)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFriend_Params AddFriend_Params;
	memset(&AddFriend_Params, 0, sizeof(AddFriend_Params));
	memcpy_s(&AddFriend_Params.LocalUserNum, sizeof(AddFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriend_Params.NewFriend, sizeof(AddFriend_Params.NewFriend), &NewFriend, sizeof(NewFriend));
	memcpy_s(&AddFriend_Params.Message, sizeof(AddFriend_Params.Message), &Message, sizeof(Message));

	uFnAddFriend->iNative = 0;
	uFnAddFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);
	uFnAddFriend->FunctionFlags |= 0x400;
	uFnAddFriend->iNative = 14563;

	return AddFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memset(&GetKeyboardInputResults_Params, 0, sizeof(GetKeyboardInputResults_Params));
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled), &bWasCanceled, sizeof(bWasCanceled));

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, sizeof(bWasCanceled), &GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled));

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memset(&ClearKeyboardInputDoneDelegate_Params, 0, sizeof(ClearKeyboardInputDoneDelegate_Params));
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(ClearKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memset(&AddKeyboardInputDoneDelegate_Params, 0, sizeof(AddKeyboardInputDoneDelegate_Params));
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(AddKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28315])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const class FString& DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memset(&ShowKeyboardUI_Params, 0, sizeof(ShowKeyboardUI_Params));
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, sizeof(ShowKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowKeyboardUI_Params.TitleText, sizeof(ShowKeyboardUI_Params.TitleText), &TitleText, sizeof(TitleText));
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, sizeof(ShowKeyboardUI_Params.DescriptionText), &DescriptionText, sizeof(DescriptionText));
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, sizeof(ShowKeyboardUI_Params.DefaultText), &DefaultText, sizeof(DefaultText));
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, sizeof(ShowKeyboardUI_Params.MaxResultLength), &MaxResultLength, sizeof(MaxResultLength));

	uFnShowKeyboardUI->iNative = 0;
	uFnShowKeyboardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);
	uFnShowKeyboardUI->FunctionFlags |= 0x400;
	uFnShowKeyboardUI->iNative = 28315;

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[28065])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// class TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, class TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memset(&SetOnlineStatus_Params, 0, sizeof(SetOnlineStatus_Params));
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, sizeof(SetOnlineStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetOnlineStatus_Params.StatusId, sizeof(SetOnlineStatus_Params.StatusId), &StatusId, sizeof(StatusId));
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings), &LocalizedStringSettings, sizeof(LocalizedStringSettings));
	memcpy_s(&SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties), &Properties, sizeof(Properties));

	uFnSetOnlineStatus->iNative = 0;
	uFnSetOnlineStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);
	uFnSetOnlineStatus->FunctionFlags |= 0x400;
	uFnSetOnlineStatus->iNative = 28065;

	memcpy_s(&LocalizedStringSettings, sizeof(LocalizedStringSettings), &SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings));
	memcpy_s(&Properties, sizeof(Properties), &SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<class FString>    Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(class TArray<class FString>& Accounts)
{
	static UFunction* uFnGetLocalAccountNames = nullptr;

	if (!uFnGetLocalAccountNames)
	{
		uFnGetLocalAccountNames = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params GetLocalAccountNames_Params;
	memset(&GetLocalAccountNames_Params, 0, sizeof(GetLocalAccountNames_Params));
	memcpy_s(&GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts), &Accounts, sizeof(Accounts));

	this->ProcessEvent(uFnGetLocalAccountNames, &GetLocalAccountNames_Params, nullptr);

	memcpy_s(&Accounts, sizeof(Accounts), &GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts));

	return GetLocalAccountNames_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(const class FString& UserName, const class FString& Password)
{
	static UFunction* uFnDeleteLocalAccount = nullptr;

	if (!uFnDeleteLocalAccount)
	{
		uFnDeleteLocalAccount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params DeleteLocalAccount_Params;
	memset(&DeleteLocalAccount_Params, 0, sizeof(DeleteLocalAccount_Params));
	memcpy_s(&DeleteLocalAccount_Params.UserName, sizeof(DeleteLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&DeleteLocalAccount_Params.Password, sizeof(DeleteLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnDeleteLocalAccount, &DeleteLocalAccount_Params, nullptr);

	return DeleteLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& Password)
{
	static UFunction* uFnRenameLocalAccount = nullptr;

	if (!uFnRenameLocalAccount)
	{
		uFnRenameLocalAccount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Params RenameLocalAccount_Params;
	memset(&RenameLocalAccount_Params, 0, sizeof(RenameLocalAccount_Params));
	memcpy_s(&RenameLocalAccount_Params.NewUserName, sizeof(RenameLocalAccount_Params.NewUserName), &NewUserName, sizeof(NewUserName));
	memcpy_s(&RenameLocalAccount_Params.OldUserName, sizeof(RenameLocalAccount_Params.OldUserName), &OldUserName, sizeof(OldUserName));
	memcpy_s(&RenameLocalAccount_Params.Password, sizeof(RenameLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnRenameLocalAccount, &RenameLocalAccount_Params, nullptr);

	return RenameLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateLocalAccount(const class FString& UserName, const class FString& Password)
{
	static UFunction* uFnCreateLocalAccount = nullptr;

	if (!uFnCreateLocalAccount)
	{
		uFnCreateLocalAccount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Params CreateLocalAccount_Params;
	memset(&CreateLocalAccount_Params, 0, sizeof(CreateLocalAccount_Params));
	memcpy_s(&CreateLocalAccount_Params.UserName, sizeof(CreateLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateLocalAccount_Params.Password, sizeof(CreateLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnCreateLocalAccount, &CreateLocalAccount_Params, nullptr);

	return CreateLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		uFnClearCreateOnlineAccountCompletedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params ClearCreateOnlineAccountCompletedDelegate_Params;
	memset(&ClearCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		uFnAddCreateOnlineAccountCompletedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params AddCreateOnlineAccountCompletedDelegate_Params;
	memset(&AddCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(AddCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineAccountCreateStatus     ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus)
{
	static UFunction* uFnOnCreateOnlineAccountCompleted = nullptr;

	if (!uFnOnCreateOnlineAccountCompleted)
	{
		uFnOnCreateOnlineAccountCompleted = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params OnCreateOnlineAccountCompleted_Params;
	memset(&OnCreateOnlineAccountCompleted_Params, 0, sizeof(OnCreateOnlineAccountCompleted_Params));
	memcpy_s(&OnCreateOnlineAccountCompleted_Params.ErrorStatus, sizeof(OnCreateOnlineAccountCompleted_Params.ErrorStatus), &ErrorStatus, sizeof(ErrorStatus));

	this->ProcessEvent(uFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[18984])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(const class FString& UserName, const class FString& Password, const class FString& EmailAddress, const class FString& ProductKey)
{
	static UFunction* uFnCreateOnlineAccount = nullptr;

	if (!uFnCreateOnlineAccount)
	{
		uFnCreateOnlineAccount = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params CreateOnlineAccount_Params;
	memset(&CreateOnlineAccount_Params, 0, sizeof(CreateOnlineAccount_Params));
	memcpy_s(&CreateOnlineAccount_Params.UserName, sizeof(CreateOnlineAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateOnlineAccount_Params.Password, sizeof(CreateOnlineAccount_Params.Password), &Password, sizeof(Password));
	memcpy_s(&CreateOnlineAccount_Params.EmailAddress, sizeof(CreateOnlineAccount_Params.EmailAddress), &EmailAddress, sizeof(EmailAddress));
	memcpy_s(&CreateOnlineAccount_Params.ProductKey, sizeof(CreateOnlineAccount_Params.ProductKey), &ProductKey, sizeof(ProductKey));

	uFnCreateOnlineAccount->iNative = 0;
	uFnCreateOnlineAccount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateOnlineAccount, &CreateOnlineAccount_Params, nullptr);
	uFnCreateOnlineAccount->FunctionFlags |= 0x400;
	uFnCreateOnlineAccount->iNative = 18984;

	return CreateOnlineAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[22034])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetTitleFileContents->iNative = 0;
	uFnGetTitleFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);
	uFnGetTitleFileContents->FunctionFlags |= 0x400;
	uFnGetTitleFileContents->iNative = 22034;

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memset(&ClearReadTitleFileCompleteDelegate_Params, 0, sizeof(ClearReadTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memset(&AddReadTitleFileCompleteDelegate_Params, 0, sizeof(AddReadTitleFileCompleteDelegate_Params));
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26886])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	uFnReadTitleFile->iNative = 0;
	uFnReadTitleFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);
	uFnReadTitleFile->FunctionFlags |= 0x400;
	uFnReadTitleFile->iNative = 26886;

	return ReadTitleFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memset(&ClearStorageDeviceChangeDelegate_Params, 0, sizeof(ClearStorageDeviceChangeDelegate_Params));
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memset(&AddStorageDeviceChangeDelegate_Params, 0, sizeof(AddStorageDeviceChangeDelegate_Params));
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;
	memset(&OnStorageDeviceChange_Params, 0, sizeof(OnStorageDeviceChange_Params));

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineSubsystemSteamworks::GetLocale()
{
	static UFunction* uFnGetLocale = nullptr;

	if (!uFnGetLocale)
	{
		uFnGetLocale = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetLocale_Params GetLocale_Params;
	memset(&GetLocale_Params, 0, sizeof(GetLocale_Params));

	this->ProcessEvent(uFnGetLocale, &GetLocale_Params, nullptr);

	return GetLocale_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[12714])
// Parameter Info:
// ENATType                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENATType UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetNATType_Params GetNATType_Params;
	memset(&GetNATType_Params, 0, sizeof(GetNATType_Params));

	uFnGetNATType->iNative = 0;
	uFnGetNATType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);
	uFnGetNATType->FunctionFlags |= 0x400;
	uFnGetNATType->iNative = 12714;

	return static_cast<ENATType>(GetNATType_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memset(&ClearConnectionStatusChangeDelegate_Params, 0, sizeof(ClearConnectionStatusChangeDelegate_Params));
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memset(&AddConnectionStatusChangeDelegate_Params, 0, sizeof(AddConnectionStatusChangeDelegate_Params));
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memset(&OnConnectionStatusChange_Params, 0, sizeof(OnConnectionStatusChange_Params));
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, sizeof(OnConnectionStatusChange_Params.ConnectionStatus), &ConnectionStatus, sizeof(ConnectionStatus));

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22881])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Params IsControllerConnected_Params;
	memset(&IsControllerConnected_Params, 0, sizeof(IsControllerConnected_Params));
	memcpy_s(&IsControllerConnected_Params.ControllerId, sizeof(IsControllerConnected_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	uFnIsControllerConnected->iNative = 0;
	uFnIsControllerConnected->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);
	uFnIsControllerConnected->FunctionFlags |= 0x400;
	uFnIsControllerConnected->iNative = 22881;

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memset(&ClearControllerChangeDelegate_Params, 0, sizeof(ClearControllerChangeDelegate_Params));
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(ClearControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memset(&AddControllerChangeDelegate_Params, 0, sizeof(AddControllerChangeDelegate_Params));
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(AddControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	memcpy_s(&OnControllerChange_Params.ControllerId, sizeof(OnControllerChange_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28059])
// Parameter Info:
// ENetworkNotificationPosition   NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memset(&SetNetworkNotificationPosition_Params, 0, sizeof(SetNetworkNotificationPosition_Params));
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, sizeof(SetNetworkNotificationPosition_Params.NewPos), &NewPos, sizeof(NewPos));

	uFnSetNetworkNotificationPosition->iNative = 0;
	uFnSetNetworkNotificationPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
	uFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
	uFnSetNetworkNotificationPosition->iNative = 28059;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENetworkNotificationPosition UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;
	memset(&GetNetworkNotificationPosition_Params, 0, sizeof(GetNetworkNotificationPosition_Params));

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return static_cast<ENetworkNotificationPosition>(GetNetworkNotificationPosition_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memset(&ClearExternalUIChangeDelegate_Params, 0, sizeof(ClearExternalUIChangeDelegate_Params));
	memcpy_s(&ClearExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(ClearExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memset(&AddExternalUIChangeDelegate_Params, 0, sizeof(AddExternalUIChangeDelegate_Params));
	memcpy_s(&AddExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(AddExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memset(&ClearLinkStatusChangeDelegate_Params, 0, sizeof(ClearLinkStatusChangeDelegate_Params));
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memset(&AddLinkStatusChangeDelegate_Params, 0, sizeof(AddLinkStatusChangeDelegate_Params));
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(AddLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[12744])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Params HasLinkConnection_Params;
	memset(&HasLinkConnection_Params, 0, sizeof(HasLinkConnection_Params));

	uFnHasLinkConnection->iNative = 0;
	uFnHasLinkConnection->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);
	uFnHasLinkConnection->FunctionFlags |= 0x400;
	uFnHasLinkConnection->iNative = 12744;

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[30356])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// class TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const class FName& SessionName, int32_t LeaderboardId, class TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memset(&WriteOnlinePlayerScores_Params, 0, sizeof(WriteOnlinePlayerScores_Params));
	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, sizeof(WriteOnlinePlayerScores_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlinePlayerScores_Params.LeaderboardId, sizeof(WriteOnlinePlayerScores_Params.LeaderboardId), &LeaderboardId, sizeof(LeaderboardId));
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores), &PlayerScores, sizeof(PlayerScores));

	uFnWriteOnlinePlayerScores->iNative = 0;
	uFnWriteOnlinePlayerScores->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);
	uFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;
	uFnWriteOnlinePlayerScores->iNative = 30356;

	memcpy_s(&PlayerScores, sizeof(PlayerScores), &WriteOnlinePlayerScores_Params.PlayerScores, sizeof(WriteOnlinePlayerScores_Params.PlayerScores));

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memset(&ClearFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memset(&AddFlushOnlineStatsCompleteDelegate_Params, 0, sizeof(AddFlushOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, sizeof(AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate), &FlushOnlineStatsCompleteDelegate, sizeof(FlushOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(const class FName& SessionName, bool bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memset(&OnFlushOnlineStatsComplete_Params, 0, sizeof(OnFlushOnlineStatsComplete_Params));
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, sizeof(OnFlushOnlineStatsComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21155])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(const class FName& SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memset(&FlushOnlineStats_Params, 0, sizeof(FlushOnlineStats_Params));
	memcpy_s(&FlushOnlineStats_Params.SessionName, sizeof(FlushOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));

	uFnFlushOnlineStats->iNative = 0;
	uFnFlushOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);
	uFnFlushOnlineStats->FunctionFlags |= 0x400;
	uFnFlushOnlineStats->iNative = 21155;

	return FlushOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30357])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const class FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memset(&WriteOnlineStats_Params, 0, sizeof(WriteOnlineStats_Params));
	memcpy_s(&WriteOnlineStats_Params.SessionName, sizeof(WriteOnlineStats_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&WriteOnlineStats_Params.Player, sizeof(WriteOnlineStats_Params.Player), &Player, sizeof(Player));
	WriteOnlineStats_Params.StatsWrite = StatsWrite;

	uFnWriteOnlineStats->iNative = 0;
	uFnWriteOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);
	uFnWriteOnlineStats->FunctionFlags |= 0x400;
	uFnWriteOnlineStats->iNative = 30357;

	return WriteOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21363])
// Parameter Info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execFreeStats_Params FreeStats_Params;
	memset(&FreeStats_Params, 0, sizeof(FreeStats_Params));
	FreeStats_Params.StatsRead = StatsRead;

	uFnFreeStats->iNative = 0;
	uFnFreeStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);
	uFnFreeStats->FunctionFlags |= 0x400;
	uFnFreeStats->iNative = 21363;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memset(&ClearReadOnlineStatsCompleteDelegate_Params, 0, sizeof(ClearReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memset(&AddReadOnlineStatsCompleteDelegate_Params, 0, sizeof(AddReadOnlineStatsCompleteDelegate_Params));
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, sizeof(AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate), &ReadOnlineStatsCompleteDelegate, sizeof(ReadOnlineStatsCompleteDelegate));

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	memset(&OnReadOnlineStatsComplete_Params, 0, sizeof(OnReadOnlineStatsComplete_Params));
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26870])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memset(&ReadOnlineStatsByRankAroundPlayer_Params, 0, sizeof(ReadOnlineStatsByRankAroundPlayer_Params));
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadOnlineStatsByRankAroundPlayer_Params.StatsRead = StatsRead;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, sizeof(ReadOnlineStatsByRankAroundPlayer_Params.NumRows), &NumRows, sizeof(NumRows));

	uFnReadOnlineStatsByRankAroundPlayer->iNative = 0;
	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);
	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;
	uFnReadOnlineStatsByRankAroundPlayer->iNative = 26870;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26869])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memset(&ReadOnlineStatsByRank_Params, 0, sizeof(ReadOnlineStatsByRank_Params));
	ReadOnlineStatsByRank_Params.StatsRead = StatsRead;
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, sizeof(ReadOnlineStatsByRank_Params.StartIndex), &StartIndex, sizeof(StartIndex));
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, sizeof(ReadOnlineStatsByRank_Params.NumToRead), &NumToRead, sizeof(NumToRead));

	uFnReadOnlineStatsByRank->iNative = 0;
	uFnReadOnlineStatsByRank->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);
	uFnReadOnlineStatsByRank->FunctionFlags |= 0x400;
	uFnReadOnlineStatsByRank->iNative = 26869;

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26872])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memset(&ReadOnlineStatsForFriends_Params, 0, sizeof(ReadOnlineStatsForFriends_Params));
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, sizeof(ReadOnlineStatsForFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadOnlineStatsForFriends_Params.StatsRead = StatsRead;

	uFnReadOnlineStatsForFriends->iNative = 0;
	uFnReadOnlineStatsForFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);
	uFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;
	uFnReadOnlineStatsForFriends->iNative = 26872;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[26868])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(class UOnlineStatsRead* StatsRead, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadOnlineStats_Params ReadOnlineStats_Params;
	memset(&ReadOnlineStats_Params, 0, sizeof(ReadOnlineStats_Params));
	ReadOnlineStats_Params.StatsRead = StatsRead;
	memcpy_s(&ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players), &Players, sizeof(Players));

	uFnReadOnlineStats->iNative = 0;
	uFnReadOnlineStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);
	uFnReadOnlineStats->FunctionFlags |= 0x400;
	uFnReadOnlineStats->iNative = 26868;

	memcpy_s(&Players, sizeof(Players), &ReadOnlineStats_Params.Players, sizeof(ReadOnlineStats_Params.Players));

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28157])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memset(&SetSpeechRecognitionObject_Params, 0, sizeof(SetSpeechRecognitionObject_Params));
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, sizeof(SetSpeechRecognitionObject_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	SetSpeechRecognitionObject_Params.SpeechRecogObj = SpeechRecogObj;

	uFnSetSpeechRecognitionObject->iNative = 0;
	uFnSetSpeechRecognitionObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);
	uFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;
	uFnSetSpeechRecognitionObject->iNative = 28157;

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27663])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSelectVocabulary_Params SelectVocabulary_Params;
	memset(&SelectVocabulary_Params, 0, sizeof(SelectVocabulary_Params));
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, sizeof(SelectVocabulary_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SelectVocabulary_Params.VocabularyId, sizeof(SelectVocabulary_Params.VocabularyId), &VocabularyId, sizeof(VocabularyId));

	uFnSelectVocabulary->iNative = 0;
	uFnSelectVocabulary->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);
	uFnSelectVocabulary->FunctionFlags |= 0x400;
	uFnSelectVocabulary->iNative = 27663;

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memset(&ClearRecognitionCompleteDelegate_Params, 0, sizeof(ClearRecognitionCompleteDelegate_Params));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(ClearRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(ClearRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memset(&AddRecognitionCompleteDelegate_Params, 0, sizeof(AddRecognitionCompleteDelegate_Params));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, sizeof(AddRecognitionCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, sizeof(AddRecognitionCompleteDelegate_Params.RecognitionDelegate), &RecognitionDelegate, sizeof(RecognitionDelegate));

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params OnRecognitionComplete_Params;
	memset(&OnRecognitionComplete_Params, 0, sizeof(OnRecognitionComplete_Params));

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21943])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(uint8_t LocalUserNum, class TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memset(&GetRecognitionResults_Params, 0, sizeof(GetRecognitionResults_Params));
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, sizeof(GetRecognitionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words), &Words, sizeof(Words));

	uFnGetRecognitionResults->iNative = 0;
	uFnGetRecognitionResults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);
	uFnGetRecognitionResults->FunctionFlags |= 0x400;
	uFnGetRecognitionResults->iNative = 21943;

	memcpy_s(&Words, sizeof(Words), &GetRecognitionResults_Params.Words, sizeof(GetRecognitionResults_Params.Words));

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28962])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memset(&StopSpeechRecognition_Params, 0, sizeof(StopSpeechRecognition_Params));
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, sizeof(StopSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStopSpeechRecognition->iNative = 0;
	uFnStopSpeechRecognition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);
	uFnStopSpeechRecognition->FunctionFlags |= 0x400;
	uFnStopSpeechRecognition->iNative = 28962;

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28834])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memset(&StartSpeechRecognition_Params, 0, sizeof(StartSpeechRecognition_Params));
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, sizeof(StartSpeechRecognition_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStartSpeechRecognition->iNative = 0;
	uFnStartSpeechRecognition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);
	uFnStartSpeechRecognition->FunctionFlags |= 0x400;
	uFnStartSpeechRecognition->iNative = 28834;

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28958])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memset(&StopNetworkedVoice_Params, 0, sizeof(StopNetworkedVoice_Params));
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, sizeof(StopNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStopNetworkedVoice->iNative = 0;
	uFnStopNetworkedVoice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);
	uFnStopNetworkedVoice->FunctionFlags |= 0x400;
	uFnStopNetworkedVoice->iNative = 28958;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28815])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memset(&StartNetworkedVoice_Params, 0, sizeof(StartNetworkedVoice_Params));
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, sizeof(StartNetworkedVoice_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnStartNetworkedVoice->iNative = 0;
	uFnStartNetworkedVoice->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);
	uFnStartNetworkedVoice->FunctionFlags |= 0x400;
	uFnStartNetworkedVoice->iNative = 28815;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memset(&ClearPlayerTalkingDelegate_Params, 0, sizeof(ClearPlayerTalkingDelegate_Params));
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(ClearPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memset(&AddPlayerTalkingDelegate_Params, 0, sizeof(AddPlayerTalkingDelegate_Params));
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, sizeof(AddPlayerTalkingDelegate_Params.TalkerDelegate), &TalkerDelegate, sizeof(TalkerDelegate));

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            Player                         (CPF_Parm)
// uint32_t                       bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[29772])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memset(&UnmuteRemoteTalker_Params, 0, sizeof(UnmuteRemoteTalker_Params));
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, sizeof(UnmuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, sizeof(UnmuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	UnmuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnUnmuteRemoteTalker->iNative = 0;
	uFnUnmuteRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);
	uFnUnmuteRemoteTalker->FunctionFlags |= 0x400;
	uFnUnmuteRemoteTalker->iNative = 29772;

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24390])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// uint32_t                       bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memset(&MuteRemoteTalker_Params, 0, sizeof(MuteRemoteTalker_Params));
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, sizeof(MuteRemoteTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, sizeof(MuteRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	MuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnMuteRemoteTalker->iNative = 0;
	uFnMuteRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);
	uFnMuteRemoteTalker->FunctionFlags |= 0x400;
	uFnMuteRemoteTalker->iNative = 24390;

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28120])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memset(&SetRemoteTalkerPriority_Params, 0, sizeof(SetRemoteTalkerPriority_Params));
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, sizeof(SetRemoteTalkerPriority_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, sizeof(SetRemoteTalkerPriority_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, sizeof(SetRemoteTalkerPriority_Params.Priority), &Priority, sizeof(Priority));

	uFnSetRemoteTalkerPriority->iNative = 0;
	uFnSetRemoteTalkerPriority->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);
	uFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;
	uFnSetRemoteTalkerPriority->iNative = 28120;

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22908])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memset(&IsHeadsetPresent_Params, 0, sizeof(IsHeadsetPresent_Params));
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, sizeof(IsHeadsetPresent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnIsHeadsetPresent->iNative = 0;
	uFnIsHeadsetPresent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);
	uFnIsHeadsetPresent->FunctionFlags |= 0x400;
	uFnIsHeadsetPresent->iNative = 22908;

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22964])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memset(&IsRemotePlayerTalking_Params, 0, sizeof(IsRemotePlayerTalking_Params));
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, sizeof(IsRemotePlayerTalking_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsRemotePlayerTalking->iNative = 0;
	uFnIsRemotePlayerTalking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);
	uFnIsRemotePlayerTalking->FunctionFlags |= 0x400;
	uFnIsRemotePlayerTalking->iNative = 22964;

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22929])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memset(&IsLocalPlayerTalking_Params, 0, sizeof(IsLocalPlayerTalking_Params));
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, sizeof(IsLocalPlayerTalking_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnIsLocalPlayerTalking->iNative = 0;
	uFnIsLocalPlayerTalking->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);
	uFnIsLocalPlayerTalking->FunctionFlags |= 0x400;
	uFnIsLocalPlayerTalking->iNative = 22929;

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29788])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memset(&UnregisterRemoteTalker_Params, 0, sizeof(UnregisterRemoteTalker_Params));
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, sizeof(UnregisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnUnregisterRemoteTalker->iNative = 0;
	uFnUnregisterRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);
	uFnUnregisterRemoteTalker->FunctionFlags |= 0x400;
	uFnUnregisterRemoteTalker->iNative = 29788;

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27024])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memset(&RegisterRemoteTalker_Params, 0, sizeof(RegisterRemoteTalker_Params));
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, sizeof(RegisterRemoteTalker_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnRegisterRemoteTalker->iNative = 0;
	uFnRegisterRemoteTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);
	uFnRegisterRemoteTalker->FunctionFlags |= 0x400;
	uFnRegisterRemoteTalker->iNative = 27024;

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29781])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memset(&UnregisterLocalTalker_Params, 0, sizeof(UnregisterLocalTalker_Params));
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, sizeof(UnregisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnUnregisterLocalTalker->iNative = 0;
	uFnUnregisterLocalTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);
	uFnUnregisterLocalTalker->FunctionFlags |= 0x400;
	uFnUnregisterLocalTalker->iNative = 29781;

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27016])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memset(&RegisterLocalTalker_Params, 0, sizeof(RegisterLocalTalker_Params));
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, sizeof(RegisterLocalTalker_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnRegisterLocalTalker->iNative = 0;
	uFnRegisterLocalTalker->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);
	uFnRegisterLocalTalker->FunctionFlags |= 0x400;
	uFnRegisterLocalTalker->iNative = 27016;

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[21754])
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FOnlineFriend> Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, class TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Params GetFriendsList_Params;
	memset(&GetFriendsList_Params, 0, sizeof(GetFriendsList_Params));
	memcpy_s(&GetFriendsList_Params.LocalUserNum, sizeof(GetFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendsList_Params.Count, sizeof(GetFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&GetFriendsList_Params.StartingAt, sizeof(GetFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));
	memcpy_s(&GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends), &Friends, sizeof(Friends));

	uFnGetFriendsList->iNative = 0;
	uFnGetFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);
	uFnGetFriendsList->FunctionFlags |= 0x400;
	uFnGetFriendsList->iNative = 21754;

	memcpy_s(&Friends, sizeof(Friends), &GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends));

	return static_cast<EOnlineEnumerationReadState>(GetFriendsList_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memset(&ClearReadFriendsCompleteDelegate_Params, 0, sizeof(ClearReadFriendsCompleteDelegate_Params));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memset(&AddReadFriendsCompleteDelegate_Params, 0, sizeof(AddReadFriendsCompleteDelegate_Params));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[26864])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Params ReadFriendsList_Params;
	memset(&ReadFriendsList_Params, 0, sizeof(ReadFriendsList_Params));
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, sizeof(ReadFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadFriendsList_Params.Count, sizeof(ReadFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadFriendsList_Params.StartingAt, sizeof(ReadFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));

	uFnReadFriendsList->iNative = 0;
	uFnReadFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);
	uFnReadFriendsList->FunctionFlags |= 0x400;
	uFnReadFriendsList->iNative = 26864;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memset(&ClearWritePlayerStorageCompleteDelegate_Params, 0, sizeof(ClearWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memset(&AddWritePlayerStorageCompleteDelegate_Params, 0, sizeof(AddWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, sizeof(OnWritePlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memset(&WritePlayerStorage_Params, 0, sizeof(WritePlayerStorage_Params));
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, sizeof(WritePlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	WritePlayerStorage_Params.PlayerStorage = PlayerStorage;
	memcpy_s(&WritePlayerStorage_Params.DeviceID, sizeof(WritePlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memset(&GetPlayerStorage_Params, 0, sizeof(GetPlayerStorage_Params));
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, sizeof(GetPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&AddReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memset(&OnReadPlayerStorageForNetIdComplete_Params, 0, sizeof(OnReadPlayerStorageForNetIdComplete_Params));
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, sizeof(OnReadPlayerStorageForNetIdComplete_Params.NetId), &NetId, sizeof(NetId));
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memset(&ReadPlayerStorageForNetId_Params, 0, sizeof(ReadPlayerStorageForNetId_Params));
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, sizeof(ReadPlayerStorageForNetId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, sizeof(ReadPlayerStorageForNetId_Params.NetId), &NetId, sizeof(NetId));
	ReadPlayerStorageForNetId_Params.PlayerStorage = PlayerStorage;

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memset(&AddReadPlayerStorageCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, sizeof(OnReadPlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memset(&ReadPlayerStorage_Params, 0, sizeof(ReadPlayerStorage_Params));
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, sizeof(ReadPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadPlayerStorage_Params.PlayerStorage = PlayerStorage;
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, sizeof(ReadPlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memset(&ClearWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memset(&AddWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(AddWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memset(&OnWriteProfileSettingsComplete_Params, 0, sizeof(OnWriteProfileSettingsComplete_Params));
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, sizeof(OnWriteProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[30360])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memset(&WriteProfileSettings_Params, 0, sizeof(WriteProfileSettings_Params));
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, sizeof(WriteProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	WriteProfileSettings_Params.ProfileSettings = ProfileSettings;

	uFnWriteProfileSettings->iNative = 0;
	uFnWriteProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);
	uFnWriteProfileSettings->FunctionFlags |= 0x400;
	uFnWriteProfileSettings->iNative = 30360;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, sizeof(GetProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memset(&AddReadProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memset(&OnReadProfileSettingsComplete_Params, 0, sizeof(OnReadProfileSettingsComplete_Params));
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26879])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, sizeof(ReadProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadProfileSettings_Params.ProfileSettings = ProfileSettings;

	uFnReadProfileSettings->iNative = 0;
	uFnReadProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
	uFnReadProfileSettings->FunctionFlags |= 0x400;
	uFnReadProfileSettings->iNative = 26879;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memset(&ClearFriendsChangeDelegate_Params, 0, sizeof(ClearFriendsChangeDelegate_Params));
	memcpy_s(&ClearFriendsChangeDelegate_Params.LocalUserNum, sizeof(ClearFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, sizeof(ClearFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memset(&AddFriendsChangeDelegate_Params, 0, sizeof(AddFriendsChangeDelegate_Params));
	memcpy_s(&AddFriendsChangeDelegate_Params.LocalUserNum, sizeof(AddFriendsChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, sizeof(AddFriendsChangeDelegate_Params.FriendsDelegate), &FriendsDelegate, sizeof(FriendsDelegate));

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memset(&ClearMutingChangeDelegate_Params, 0, sizeof(ClearMutingChangeDelegate_Params));
	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, sizeof(ClearMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memset(&AddMutingChangeDelegate_Params, 0, sizeof(AddMutingChangeDelegate_Params));
	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, sizeof(AddMutingChangeDelegate_Params.MutingDelegate), &MutingDelegate, sizeof(MutingDelegate));

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memset(&ClearLoginCancelledDelegate_Params, 0, sizeof(ClearLoginCancelledDelegate_Params));
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, sizeof(ClearLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memset(&AddLoginCancelledDelegate_Params, 0, sizeof(AddLoginCancelledDelegate_Params));
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, sizeof(AddLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memset(&ClearLoginStatusChangeDelegate_Params, 0, sizeof(ClearLoginStatusChangeDelegate_Params));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(ClearLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memset(&AddLoginStatusChangeDelegate_Params, 0, sizeof(AddLoginStatusChangeDelegate_Params));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(AddLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(AddLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, sizeof(OnLoginStatusChange_Params.NewStatus), &NewStatus, sizeof(NewStatus));
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memset(&ClearLoginChangeDelegate_Params, 0, sizeof(ClearLoginChangeDelegate_Params));
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, sizeof(ClearLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memset(&AddLoginChangeDelegate_Params, 0, sizeof(AddLoginChangeDelegate_Params));
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, sizeof(AddLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsMuted_Params IsMuted_Params;
	memset(&IsMuted_Params, 0, sizeof(IsMuted_Params));
	memcpy_s(&IsMuted_Params.LocalUserNum, sizeof(IsMuted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsMuted_Params.PlayerID, sizeof(IsMuted_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[15050])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FFriendsQuery> Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Params AreAnyFriends_Params;
	memset(&AreAnyFriends_Params, 0, sizeof(AreAnyFriends_Params));
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, sizeof(AreAnyFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query), &Query, sizeof(Query));

	uFnAreAnyFriends->iNative = 0;
	uFnAreAnyFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);
	uFnAreAnyFriends->FunctionFlags |= 0x400;
	uFnAreAnyFriends->iNative = 15050;

	memcpy_s(&Query, sizeof(Query), &AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query));

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[22902])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsFriend_Params IsFriend_Params;
	memset(&IsFriend_Params, 0, sizeof(IsFriend_Params));
	memcpy_s(&IsFriend_Params.LocalUserNum, sizeof(IsFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsFriend_Params.PlayerID, sizeof(IsFriend_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsFriend->iNative = 0;
	uFnIsFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);
	uFnIsFriend->FunctionFlags |= 0x400;
	uFnIsFriend->iNative = 22902;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanShowPresenceInformation(uint8_t LocalUserNum)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memset(&CanShowPresenceInformation_Params, 0, sizeof(CanShowPresenceInformation_Params));
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, sizeof(CanShowPresenceInformation_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanShowPresenceInformation_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanViewPlayerProfiles(uint8_t LocalUserNum)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memset(&CanViewPlayerProfiles_Params, 0, sizeof(CanViewPlayerProfiles_Params));
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, sizeof(CanViewPlayerProfiles_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanViewPlayerProfiles_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanPurchaseContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memset(&CanPurchaseContent_Params, 0, sizeof(CanPurchaseContent_Params));
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, sizeof(CanPurchaseContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanPurchaseContent_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanDownloadUserContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memset(&CanDownloadUserContent_Params, 0, sizeof(CanDownloadUserContent_Params));
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, sizeof(CanDownloadUserContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanDownloadUserContent_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18105])
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanCommunicate(uint8_t LocalUserNum)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanCommunicate_Params CanCommunicate_Params;
	memset(&CanCommunicate_Params, 0, sizeof(CanCommunicate_Params));
	memcpy_s(&CanCommunicate_Params.LocalUserNum, sizeof(CanCommunicate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnCanCommunicate->iNative = 0;
	uFnCanCommunicate->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);
	uFnCanCommunicate->FunctionFlags |= 0x400;
	uFnCanCommunicate->iNative = 18105;

	return static_cast<EFeaturePrivilegeLevel>(CanCommunicate_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[18114])
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanPlayOnline(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execCanPlayOnline_Params CanPlayOnline_Params;
	memset(&CanPlayOnline_Params, 0, sizeof(CanPlayOnline_Params));
	memcpy_s(&CanPlayOnline_Params.LocalUserNum, sizeof(CanPlayOnline_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnCanPlayOnline->iNative = 0;
	uFnCanPlayOnline->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);
	uFnCanPlayOnline->FunctionFlags |= 0x400;
	uFnCanPlayOnline->iNative = 18114;

	return static_cast<EFeaturePrivilegeLevel>(CanPlayOnline_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memset(&GetPlayerNickname_Params, 0, sizeof(GetPlayerNickname_Params));
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, sizeof(GetPlayerNickname_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, sizeof(GetUniquePlayerId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalLogin = nullptr;

	if (!uFnIsLocalLogin)
	{
		uFnIsLocalLogin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsLocalLogin_Params IsLocalLogin_Params;
	memset(&IsLocalLogin_Params, 0, sizeof(IsLocalLogin_Params));
	memcpy_s(&IsLocalLogin_Params.LocalUserNum, sizeof(IsLocalLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsLocalLogin, &IsLocalLogin_Params, nullptr);

	return IsLocalLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Params IsGuestLogin_Params;
	memset(&IsGuestLogin_Params, 0, sizeof(IsGuestLogin_Params));
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, sizeof(IsGuestLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[12710])
// Parameter Info:
// ELoginStatus                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

ELoginStatus UOnlineSubsystemSteamworks::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Params GetLoginStatus_Params;
	memset(&GetLoginStatus_Params, 0, sizeof(GetLoginStatus_Params));
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, sizeof(GetLoginStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetLoginStatus->iNative = 0;
	uFnGetLoginStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);
	uFnGetLoginStatus->FunctionFlags |= 0x400;
	uFnGetLoginStatus->iNative = 12710;

	return static_cast<ELoginStatus>(GetLoginStatus_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memset(&ClearLogoutCompletedDelegate_Params, 0, sizeof(ClearLogoutCompletedDelegate_Params));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, sizeof(ClearLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(ClearLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memset(&AddLogoutCompletedDelegate_Params, 0, sizeof(AddLogoutCompletedDelegate_Params));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, sizeof(AddLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(AddLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	memset(&OnLogoutCompleted_Params, 0, sizeof(OnLogoutCompleted_Params));
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23599])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execLogout_Params Logout_Params;
	memset(&Logout_Params, 0, sizeof(Logout_Params));
	memcpy_s(&Logout_Params.LocalUserNum, sizeof(Logout_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnLogout->iNative = 0;
	uFnLogout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);
	uFnLogout->FunctionFlags |= 0x400;
	uFnLogout->iNative = 23599;

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memset(&ClearLoginFailedDelegate_Params, 0, sizeof(ClearLoginFailedDelegate_Params));
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, sizeof(ClearLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(ClearLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memset(&AddLoginFailedDelegate_Params, 0, sizeof(AddLoginFailedDelegate_Params));
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, sizeof(AddLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(AddLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineServerConnectionStatus  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Params OnLoginFailed_Params;
	memset(&OnLoginFailed_Params, 0, sizeof(OnLoginFailed_Params));
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, sizeof(OnLoginFailed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnLoginFailed_Params.ErrorCode, sizeof(OnLoginFailed_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[15157])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execAutoLogin_Params AutoLogin_Params;
	memset(&AutoLogin_Params, 0, sizeof(AutoLogin_Params));

	uFnAutoLogin->iNative = 0;
	uFnAutoLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);
	uFnAutoLogin->FunctionFlags |= 0x400;
	uFnAutoLogin->iNative = 15157;

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[12782])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	memcpy_s(&Login_Params.LocalUserNum, sizeof(Login_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&Login_Params.LoginName, sizeof(Login_Params.LoginName), &LoginName, sizeof(LoginName));
	memcpy_s(&Login_Params.Password, sizeof(Login_Params.Password), &Password, sizeof(Password));
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->iNative = 0;
	uFnLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);
	uFnLogin->FunctionFlags |= 0x400;
	uFnLogin->iNative = 12782;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28317])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(bool bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Params ShowLoginUI_Params;
	memset(&ShowLoginUI_Params, 0, sizeof(ShowLoginUI_Params));
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	uFnShowLoginUI->iNative = 0;
	uFnShowLoginUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);
	uFnShowLoginUI->FunctionFlags |= 0x400;
	uFnShowLoginUI->iNative = 28317;

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params.LocalUserNum, sizeof(OnLoginChange_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[763])
// Parameter Info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_eventExit_Params Exit_Params;
	memset(&Exit_Params, 0, sizeof(Exit_Params));

	uFnExit->iNative = 0;
	uFnExit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);
	uFnExit->FunctionFlags |= 0x400;
	uFnExit->iNative = 763;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[762])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = reinterpret_cast<UFunction*>(UObject::GObjObjects()->at(IDX_CLASS_ONLINESUBSYSTEMSTEAMWORKS_ONLINESUBSYSTEMSTEAMWORKS));
	}

	UOnlineSubsystemSteamworks_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->iNative = 0;
	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;
	uFnInit->iNative = 762;

	return Init_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
