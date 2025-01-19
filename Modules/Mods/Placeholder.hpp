#pragma once
#include "../Module.hpp"

// This is an example module.
class PlaceholderModule : public Module
{
private:
	std::thread m_consoleInput;
	bool m_placeholder;
	int32_t m_someValue;

public:
	PlaceholderModule(const std::string& name, const std::string& description, uint32_t states);
	~PlaceholderModule() override;

public:
	void OnCreateVariables() override;
	void OnSettingChanged() override;
	void OnCanvasDraw(class UCanvas* unrealCanvas) override;
	void GetConsoleInput();

public:
	void DoAThing();
	void GetRoomMembers();
};