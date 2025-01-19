#define NOMINMAX
#include "Placeholder.hpp"

#include <future>

#include "../Components/Includes.hpp"

using namespace std::chrono_literals;
 
PlaceholderModule::PlaceholderModule(const std::string& name, const std::string& description, uint32_t states) : Module(name, description, states)
{
	m_placeholder = false;
	m_someValue = 0;
	m_consoleInput = std::thread(&PlaceholderModule::GetConsoleInput, this);
}

PlaceholderModule::~PlaceholderModule() {}

void PlaceholderModule::OnCreateVariables()
{	
	// When someone uses the command "placeholder_do_thing", this will trigger the function "DoAThing" in "PlaceholderModule".
	Manager.CreateCommand("placeholder_do_thing", new Command(VariableIds::PLACEHOLDER_DO_THING, "Calls the \"DoAThing\" function in the placeholder module."))->BindCallback([&]() { Manager.PlaceholderMod->OnSettingChanged(); });

	// When changes the setting "placeholder_can_do_thing true", we automatically callback to "PlaceholderModule" and tell it to update its settings stored in that class.
	Manager.CreateSetting("placeholder_can_do_thing", new Setting(VariableIds::PLACEHOLDER_ENABLED, SettingTypes::Bool, "Enable disable a boolean in the placeholder module.", "false", true))->BindCallback([&]() { Manager.PlaceholderMod->OnSettingChanged(); });

	// Integer setting that has a minimum value of "0" and a maximum value of "100".
	Manager.CreateSetting("placeholder_some_value", new Setting(VariableIds::PLACEHOLDER_SOME_VALUE, SettingTypes::Int32, "Some random integer value with a custom range.", "0", true))->SetInt32Range(0, 100)->BindCallback([&]() { Manager.PlaceholderMod->OnSettingChanged(); });

	// Gets room members if in a network room.
	Manager.CreateCommand("get_room_members", new Command(VariableIds::NETWORK_GET_ROOM_MEMBERS, "Gets room members if in a network room."))->BindCallback([&]() { Manager.PlaceholderMod->GetRoomMembers(); });
}

void PlaceholderModule::OnSettingChanged()
{
	SetInitialized(false);
	m_placeholder = Manager.GetSetting(VariableIds::PLACEHOLDER_ENABLED)->GetBoolValue();
	m_someValue = Manager.GetSetting(VariableIds::PLACEHOLDER_SOME_VALUE)->GetInt32Value();
	SetInitialized(true);
}

void PlaceholderModule::OnCanvasDraw(class UCanvas* unrealCanvas)
{
	if (IsInitialized() && IsAllowed())
	{
		if (unrealCanvas)
		{
			// Draw with the canvas here!
		}
	}
}

static std::string GetInput()
{    
	std::string input;
	getline(std::cin,input);
	return input;
}

void PlaceholderModule::GetConsoleInput()
{
	std::future<std::string> future = std::async(GetInput);

	std::future_status status;
	do
	{
		status = future.wait_for(1s);
	}
	while (status != std::future_status::ready);

	const std::string input = future.get();

	Manager.ConsoleCommand(input);

	GetConsoleInput();
}

void PlaceholderModule::DoAThing()
{
	if (IsInitialized() && IsAllowed())
	{
		if (m_placeholder)
		{
			Console.Success("(DoAThing) Wow! Placeholder is set to true!");
		}
		else
		{
			Console.Error("(DoAThing) Wow! Placeholder is set to false!");
		}
	}
}

void PlaceholderModule::GetRoomMembers()
{
	if (IsInitialized() && IsAllowed())
	{
		auto LobbyInterface = Instances.GetInstanceOf<UOnlineLobbyInterfaceSteamworks>();
		if (!LobbyInterface)
		{
			Console.Error("Lobby interface invalid!");
			return;
		}

		auto OnlineInterface = Instances.GetInstanceOf<UOnlineSubsystemSteamworks>();
		if (!OnlineInterface)
		{
			Console.Error("Online interface invalid!");
			return;
		}
		
		Console.Notify("Getting current room members...");
		for (auto ActiveLobby : LobbyInterface->ActiveLobbies)
		{
			for (auto Member : ActiveLobby.Members)
			{
				Console.Notify("Member: " + OnlineInterface->UniqueNetIdToPlayerName(Member.PlayerUID).ToString());
			}
		}
		
		auto GameCommon = Instances.GetInstanceOf<UREDGameCommon>();
		Console.Notify("Test " + std::to_string((int)GameCommon->GetGameMode()));
	}
}
