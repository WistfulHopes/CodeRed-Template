#include "Core.hpp"
#include "../Includes.hpp"

CoreComponent::CoreComponent() : Component("Core", "Initializes globals, components, and modules.") { OnCreate(); }

CoreComponent::~CoreComponent() { OnDestroy(); }

void CoreComponent::OnCreate()
{
	m_mainThread = nullptr;
}

void CoreComponent::OnDestroy() {}

void CoreComponent::InitializeThread()
{
	m_mainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(InitializeGlobals), nullptr, 0, nullptr);
}

void CoreComponent::InitializeGlobals(HMODULE hModule)
{
	// Disables the DLL_THREAD_ATTACH and DLL_THREAD_DETACH notifications.
	DisableThreadLibraryCalls(hModule);

#ifdef WALKTHROUGH
	Console.Notify("\"Components\\Components\\Core.cpp -> CoreComponent::InitializeGlobals\". Looks like you forgot to check this file, this is important for initializing your sdk, components, and modules!");
	return;
#endif

	// Initialize the console file which also opens the standard out stream.
	Console.Initialize(std::filesystem::current_path(), "CodeRed.log");

	// Populate the GObject and GName addresses, remember to replace "PlaceholderGame" with your game.
	uintptr_t entryPoint = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
	GObjects = reinterpret_cast<TArray<UObject*>*>(GetModuleHandle(NULL) + GObjects_Offset / 4);
	GNames = reinterpret_cast<TArray<FNameEntry*>*>(GetModuleHandle(NULL) + GNames_Offset / 4);

	// Verifies the global addresses are correct before continuing.
	if (AreGlobalsValid())
	{
		// You can use either a pattern for Process Event or its place in the VfTable index (not both).
		void** unrealVTable = reinterpret_cast<void**>(UObject::StaticClass()->VfTableObject.Dummy);
		//EventsComponent::AttachDetour(reinterpret_cast<ProcessEventType>(unrealVTable[66])); // Index method.
		EventsComponent::AttachDetour(reinterpret_cast<ProcessEventType>(CodeRed::Memory::FindPattern(GetModuleHandleW(NULL), ProcessEvent_Pattern, ProcessEvent_Mask) - 0xDF)); // Find pattern method.

		Console.Notify("[Core Module] Entry Point " + CodeRed::Format::ToHex(reinterpret_cast<void*>(entryPoint)));
		Console.Notify("[Core Module] Global Objects: " + CodeRed::Format::ToHex(GObjects));
		Console.Notify("[Core Module] Global Names: " + CodeRed::Format::ToHex(GNames));
		Console.Write("[Core Module] Initialized!");

		Instances.Initialize(); // Initialize class instances that aren't automatically set by function hooks.
		Manager.Initialize(); // Initialize settings, commands, and mods.
		Events.Initialize(); // Initialize hooking function events to voids.
	}
	else
	{
		Console.Error("[Core Module] GObject and GNames are not valid, wrong address detected!");
	}
}

bool CoreComponent::AreGlobalsValid()
{
	return (AreGObjectsValid() && AreGNamesValid());
}

bool CoreComponent::AreGObjectsValid()
{
	if (GObjects
		&& !UObject::GObjObjects()->empty()
		&& (UObject::GObjObjects()->capacity() > UObject::GObjObjects()->size()))
	{
		return true;
	}

	return false;
}

bool CoreComponent::AreGNamesValid()
{
	if (GNames
		&& !FName::Names()->empty()
		&& (FName::Names()->capacity() > FName::Names()->size()))
	{
		return true;
	}

	return false;
}

class CoreComponent Core{};