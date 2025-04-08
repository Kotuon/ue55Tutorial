// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue55tutorial : ModuleRules
{
	public ue55tutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
