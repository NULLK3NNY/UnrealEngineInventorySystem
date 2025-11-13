// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interactable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInteractable();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractable Function GetInteractText ***********************************
struct Z_Construct_UFunction_AInteractable_GetInteractText_Statics
{
	struct Interactable_eventGetInteractText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//shows up under the list of functions\n" },
#endif
		{ "ModuleRelativePath", "Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "shows up under the list of functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AInteractable_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_GetInteractText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_GetInteractText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_GetInteractText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "GetInteractText", Z_Construct_UFunction_AInteractable_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractable_GetInteractText_Statics::Interactable_eventGetInteractText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_GetInteractText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_GetInteractText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractable_GetInteractText_Statics::Interactable_eventGetInteractText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_GetInteractText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_GetInteractText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execGetInteractText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInteractText();
	P_NATIVE_END;
}
// ********** End Class AInteractable Function GetInteractText *************************************

// ********** Begin Class AInteractable Function Interact ******************************************
struct Interactable_eventInteract_Parms
{
	APlayerController* Controller;
};
static FName NAME_AInteractable_Interact = FName(TEXT("Interact"));
void AInteractable::Interact(APlayerController* Controller)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_Interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Interactable_eventInteract_Parms Parms;
		Parms.Controller=Controller;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Interact_Implementation(Controller);
	}
}
struct Z_Construct_UFunction_AInteractable_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//blueprintnativeEvent means BP & C++ versions avaiable\n" },
#endif
		{ "ModuleRelativePath", "Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blueprintnativeEvent means BP & C++ versions avaiable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventInteract_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Interact_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interact", Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::PropPointers), sizeof(Interactable_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Interactable_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execInteract)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class AInteractable Function Interact ********************************************

// ********** Begin Class AInteractable ************************************************************
void AInteractable::StaticRegisterNativesAInteractable()
{
	UClass* Class = AInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractText", &AInteractable::execGetInteractText },
		{ "Interact", &AInteractable::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractable;
UClass* AInteractable::GetPrivateStaticClass()
{
	using TClass = AInteractable;
	if (!Z_Registration_Info_UClass_AInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interactable"),
			Z_Registration_Info_UClass_AInteractable.InnerSingleton,
			StaticRegisterNativesAInteractable,
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
	return Z_Registration_Info_UClass_AInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractable_NoRegister()
{
	return AInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableBillboard_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableSphere_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableBillboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableSphere;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_GetInteractText, "GetInteractText" }, // 899991231
		{ &Z_Construct_UFunction_AInteractable_Interact, "Interact" }, // 3894200758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableBillboard = { "InteractableBillboard", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, InteractableBillboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableBillboard_MetaData), NewProp_InteractableBillboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableSphere = { "InteractableSphere", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, InteractableSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableSphere_MetaData), NewProp_InteractableSphere_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, Action), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableBillboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
	&AInteractable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractable()
{
	if (!Z_Registration_Info_UClass_AInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable.OuterSingleton, Z_Construct_UClass_AInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
AInteractable::~AInteractable() {}
// ********** End Class AInteractable **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h__Script_UEInventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable, AInteractable::StaticClass, TEXT("AInteractable"), &Z_Registration_Info_UClass_AInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable), 2412964523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h__Script_UEInventorySystem_3676443800(TEXT("/Script/UEInventorySystem"),
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h__Script_UEInventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h__Script_UEInventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
