// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4GitTest : ModuleRules
{
	public UE4GitTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
