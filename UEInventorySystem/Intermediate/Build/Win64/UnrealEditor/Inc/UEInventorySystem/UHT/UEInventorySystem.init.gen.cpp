// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEInventorySystem_init() {}
	UEINVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UEInventorySystem_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UEInventorySystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UEInventorySystem()
	{
		if (!Z_Registration_Info_UPackage__Script_UEInventorySystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UEInventorySystem_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UEInventorySystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x97C0364C,
				0x9F6D3A8B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UEInventorySystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UEInventorySystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UEInventorySystem(Z_Construct_UPackage__Script_UEInventorySystem, TEXT("/Script/UEInventorySystem"), Z_Registration_Info_UPackage__Script_UEInventorySystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x97C0364C, 0x9F6D3A8B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
