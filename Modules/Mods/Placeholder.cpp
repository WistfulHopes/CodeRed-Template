#include "Placeholder.hpp"
#include "../Components/Includes.hpp"

PlaceholderModule::PlaceholderModule(const std::string& name, const std::string& description, uint32_t states) : Module(name, description, states)
{
	m_placeholder = false;
	m_someValue = 0;
}

PlaceholderModule::~PlaceholderModule() {}

void PlaceholderModule::UpdateSettings()
{
	SetInitialized(false);
	m_placeholder = Manager.GetSetting(VariableIds::PLACEHOLDER_ENABLED)->GetBoolValue();
	m_someValue = Manager.GetSetting(VariableIds::PLACEHOLDER_SOME_VALUE)->GetIntValue();
	SetInitialized(true);
}

void PlaceholderModule::DoAThing()
{
	if (IsInitialized() && IsAllowed())
	{
		if (m_placeholder)
		{
			Console.Success("Wow! Did a thing!");
		}
	}
}

void PlaceholderModule::GetRoomMembers()
{
	if (IsInitialized() && IsAllowed())
	{
		auto NetworkRoom = Instances.IUREDGfxMoviePlayer_MenuNetworkRoom();
		if (!NetworkRoom)
		{
			Console.Notify("No room active!");
			return;
		}

		Console.Notify("Getting current room members...");
		for (auto FocusInfo : NetworkRoom->FocusInfo)
		{
			Console.Notify("Member: " + FocusInfo.FocusName.ToString());
		}
	}
}
