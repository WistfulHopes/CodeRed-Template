/*
#############################################################################################
# Guilty Gear Xrd Rev 2 (GGXRD-R2) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.5
# ========================================================================================= #
# File: XAudio2_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once

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

// Class XAudio2.XAudio2Device
// 0x009C (0x02C4 - 0x0360)
class UXAudio2Device : public UAudioDevice
{
public:
	uint8_t                                            UnknownData00[0x9C];                            // 0x02C4 (0x009C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class XAudio2.XAudio2Device");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
