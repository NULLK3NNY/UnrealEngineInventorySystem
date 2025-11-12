// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEInventorySystem : ModuleRules
{
	public UEInventorySystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UEInventorySystem",
			"UEInventorySystem/Variant_Platforming",
			"UEInventorySystem/Variant_Platforming/Animation",
			"UEInventorySystem/Variant_Combat",
			"UEInventorySystem/Variant_Combat/AI",
			"UEInventorySystem/Variant_Combat/Animation",
			"UEInventorySystem/Variant_Combat/Gameplay",
			"UEInventorySystem/Variant_Combat/Interfaces",
			"UEInventorySystem/Variant_Combat/UI",
			"UEInventorySystem/Variant_SideScrolling",
			"UEInventorySystem/Variant_SideScrolling/AI",
			"UEInventorySystem/Variant_SideScrolling/Gameplay",
			"UEInventorySystem/Variant_SideScrolling/Interfaces",
			"UEInventorySystem/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
