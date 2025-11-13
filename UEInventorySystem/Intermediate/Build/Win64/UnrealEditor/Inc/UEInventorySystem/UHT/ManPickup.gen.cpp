// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManPickup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeManPickup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInteractable();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AManPickup();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AManPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AManPickup Function Use **************************************************
static FName NAME_AManPickup_Use = FName(TEXT("Use"));
void AManPickup::Use()
{
	UFunction* Func = FindFunctionChecked(NAME_AManPickup_Use);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Use_Implementation();
	}
}
struct Z_Construct_UFunction_AManPickup_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//fully BP version\n//needs a _Implementation c++ function too\n" },
#endif
		{ "ModuleRelativePath", "ManPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fully BP version\nneeds a _Implementation c++ function too" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManPickup_Use_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManPickup, nullptr, "Use", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManPickup_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManPickup_Use_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AManPickup_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManPickup_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManPickup::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use_Implementation();
	P_NATIVE_END;
}
// ********** End Class AManPickup Function Use ****************************************************

// ********** Begin Class AManPickup ***************************************************************
void AManPickup::StaticRegisterNativesAManPickup()
{
	UClass* Class = AManPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Use", &AManPickup::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AManPickup;
UClass* AManPickup::GetPrivateStaticClass()
{
	using TClass = AManPickup;
	if (!Z_Registration_Info_UClass_AManPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ManPickup"),
			Z_Registration_Info_UClass_AManPickup.InnerSingleton,
			StaticRegisterNativesAManPickup,
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
	return Z_Registration_Info_UClass_AManPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_AManPickup_NoRegister()
{
	return AManPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AManPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mesh\n" },
#endif
		{ "IncludePath", "ManPickup.h" },
		{ "ModuleRelativePath", "ManPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "ManPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//note:EditInstanceOnly  means set this in the instance of a the class, eg BP_food is derived from C++ manpickup class. \n//choose a rowname number according to the ItemDB entries. \n//only edit from the instance detail panel\n" },
#endif
		{ "ModuleRelativePath", "ManPickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "note:EditInstanceOnly  means set this in the instance of a the class, eg BP_food is derived from C++ manpickup class.\nchoose a rowname number according to the ItemDB entries.\nonly edit from the instance detail panel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AManPickup_Use, "Use" }, // 9808551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManPickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AManPickup_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManPickup, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManPickup_Statics::NewProp_PickupMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManPickup_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AManPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInteractable,
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AManPickup_Statics::ClassParams = {
	&AManPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AManPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AManPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AManPickup()
{
	if (!Z_Registration_Info_UClass_AManPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManPickup.OuterSingleton, Z_Construct_UClass_AManPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AManPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AManPickup);
AManPickup::~AManPickup() {}
// ********** End Class AManPickup *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_ManPickup_h__Script_UEInventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AManPickup, AManPickup::StaticClass, TEXT("AManPickup"), &Z_Registration_Info_UClass_AManPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManPickup), 3248919253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_ManPickup_h__Script_UEInventorySystem_2312980741(TEXT("/Script/UEInventorySystem"),
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_ManPickup_h__Script_UEInventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_ManPickup_h__Script_UEInventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
