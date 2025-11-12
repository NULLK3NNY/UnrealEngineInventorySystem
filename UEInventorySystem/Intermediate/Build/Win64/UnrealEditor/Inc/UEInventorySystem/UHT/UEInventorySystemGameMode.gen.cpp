// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEInventorySystemGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUEInventorySystemGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AUEInventorySystemGameMode();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AUEInventorySystemGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUEInventorySystemGameMode ***********************************************
void AUEInventorySystemGameMode::StaticRegisterNativesAUEInventorySystemGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUEInventorySystemGameMode;
UClass* AUEInventorySystemGameMode::GetPrivateStaticClass()
{
	using TClass = AUEInventorySystemGameMode;
	if (!Z_Registration_Info_UClass_AUEInventorySystemGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UEInventorySystemGameMode"),
			Z_Registration_Info_UClass_AUEInventorySystemGameMode.InnerSingleton,
			StaticRegisterNativesAUEInventorySystemGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUEInventorySystemGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUEInventorySystemGameMode_NoRegister()
{
	return AUEInventorySystemGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUEInventorySystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEInventorySystemGameMode.h" },
		{ "ModuleRelativePath", "UEInventorySystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEInventorySystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUEInventorySystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUEInventorySystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEInventorySystemGameMode_Statics::ClassParams = {
	&AUEInventorySystemGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUEInventorySystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUEInventorySystemGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUEInventorySystemGameMode()
{
	if (!Z_Registration_Info_UClass_AUEInventorySystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEInventorySystemGameMode.OuterSingleton, Z_Construct_UClass_AUEInventorySystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUEInventorySystemGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUEInventorySystemGameMode);
AUEInventorySystemGameMode::~AUEInventorySystemGameMode() {}
// ********** End Class AUEInventorySystemGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_UEInventorySystemGameMode_h__Script_UEInventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUEInventorySystemGameMode, AUEInventorySystemGameMode::StaticClass, TEXT("AUEInventorySystemGameMode"), &Z_Registration_Info_UClass_AUEInventorySystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEInventorySystemGameMode), 1288690600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_UEInventorySystemGameMode_h__Script_UEInventorySystem_1106182829(TEXT("/Script/UEInventorySystem"),
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_UEInventorySystemGameMode_h__Script_UEInventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_UEInventorySystemGameMode_h__Script_UEInventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
