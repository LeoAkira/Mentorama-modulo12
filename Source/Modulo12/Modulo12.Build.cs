// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Modulo12 : ModuleRules
{
	public Modulo12(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
