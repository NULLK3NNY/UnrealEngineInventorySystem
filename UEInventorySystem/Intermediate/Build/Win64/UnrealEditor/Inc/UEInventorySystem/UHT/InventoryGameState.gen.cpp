// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventoryGameState();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventoryGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInventoryGameState ******************************************************
void AInventoryGameState::StaticRegisterNativesAInventoryGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInventoryGameState;
UClass* AInventoryGameState::GetPrivateStaticClass()
{
	using TClass = AInventoryGameState;
	if (!Z_Registration_Info_UClass_AInventoryGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryGameState"),
			Z_Registration_Info_UClass_AInventoryGameState.InnerSingleton,
			StaticRegisterNativesAInventoryGameState,
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
	return Z_Registration_Info_UClass_AInventoryGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AInventoryGameState_NoRegister()
{
	return AInventoryGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInventoryGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InventoryGameState.h" },
		{ "ModuleRelativePath", "InventoryGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InventoryGameState" },
		{ "ModuleRelativePath", "InventoryGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryGameState_Statics::NewProp_ItemDB = { "ItemDB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryGameState, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDB_MetaData), NewProp_ItemDB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryGameState_Statics::NewProp_ItemDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInventoryGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryGameState_Statics::ClassParams = {
	&AInventoryGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInventoryGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventoryGameState()
{
	if (!Z_Registration_Info_UClass_AInventoryGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryGameState.OuterSingleton, Z_Construct_UClass_AInventoryGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventoryGameState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryGameState);
AInventoryGameState::~AInventoryGameState() {}
// ********** End Class AInventoryGameState ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryGameState_h__Script_UEInventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryGameState, AInventoryGameState::StaticClass, TEXT("AInventoryGameState"), &Z_Registration_Info_UClass_AInventoryGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryGameState), 15305552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryGameState_h__Script_UEInventorySystem_792479753(TEXT("/Script/UEInventorySystem"),
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryGameState_h__Script_UEInventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryGameState_h__Script_UEInventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
