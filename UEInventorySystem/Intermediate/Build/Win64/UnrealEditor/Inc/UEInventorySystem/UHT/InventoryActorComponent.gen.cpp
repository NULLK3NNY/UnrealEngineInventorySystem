// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryActorComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryActorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryActorComponent();
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryActorComponent Function CheckForInteractables ******************
struct Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function to check for the closest Interactable in sight and in range. */" },
#endif
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to check for the closest Interactable in sight and in range." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "CheckForInteractables", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execCheckForInteractables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckForInteractables();
	P_NATIVE_END;
}
// ********** End Class UInventoryActorComponent Function CheckForInteractables ********************

// ********** Begin Class UInventoryActorComponent Function OnOverlapBegin *************************
struct Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics
{
	struct InventoryActorComponent_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// declare overlap begin function\n" },
#endif
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declare overlap begin function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InventoryActorComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryActorComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "OnOverlapBegin", Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::InventoryActorComponent_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::InventoryActorComponent_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UInventoryActorComponent Function OnOverlapBegin ***************************

// ********** Begin Class UInventoryActorComponent Function OnOverlapEnd ***************************
struct Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics
{
	struct InventoryActorComponent_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// declare overlap end function\n" },
#endif
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declare overlap end function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "OnOverlapEnd", Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::InventoryActorComponent_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::InventoryActorComponent_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UInventoryActorComponent Function OnOverlapEnd *****************************

// ********** Begin Class UInventoryActorComponent *************************************************
void UInventoryActorComponent::StaticRegisterNativesUInventoryActorComponent()
{
	UClass* Class = UInventoryActorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckForInteractables", &UInventoryActorComponent::execCheckForInteractables },
		{ "OnOverlapBegin", &UInventoryActorComponent::execOnOverlapBegin },
		{ "OnOverlapEnd", &UInventoryActorComponent::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryActorComponent;
UClass* UInventoryActorComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryActorComponent;
	if (!Z_Registration_Info_UClass_UInventoryActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryActorComponent"),
			Z_Registration_Info_UClass_UInventoryActorComponent.InnerSingleton,
			StaticRegisterNativesUInventoryActorComponent,
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
	return Z_Registration_Info_UClass_UInventoryActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister()
{
	return UInventoryActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryActorComponent.h" },
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the pickup collision component whcih overlaps with pickupable objects only\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the pickup collision component whcih overlaps with pickupable objects only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxRange_MetaData[] = {
		{ "Category", "Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//used for the raycast when we are overlapping to point to a pickable object\n" },
#endif
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used for the raycast when we are overlapping to point to a pickable object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverlappingPickup_MetaData[] = {
		{ "Category", "InventoryActorComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//use to state the overlapping of this and pickupable objects\n" },
#endif
		{ "ModuleRelativePath", "InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "use to state the overlapping of this and pickupable objects" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRange;
	static void NewProp_bIsOverlappingPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverlappingPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryActorComponent_CheckForInteractables, "CheckForInteractables" }, // 2142255152
		{ &Z_Construct_UFunction_UInventoryActorComponent_OnOverlapBegin, "OnOverlapBegin" }, // 1868458935
		{ &Z_Construct_UFunction_UInventoryActorComponent_OnOverlapEnd, "OnOverlapEnd" }, // 2333823481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSphere_MetaData), NewProp_CollectionSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_maxRange = { "maxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, maxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxRange_MetaData), NewProp_maxRange_MetaData) };
void Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_bIsOverlappingPickup_SetBit(void* Obj)
{
	((UInventoryActorComponent*)Obj)->bIsOverlappingPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_bIsOverlappingPickup = { "bIsOverlappingPickup", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryActorComponent), &Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_bIsOverlappingPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverlappingPickup_MetaData), NewProp_bIsOverlappingPickup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CollectionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_maxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_bIsOverlappingPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryActorComponent_Statics::ClassParams = {
	&UInventoryActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryActorComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton, Z_Construct_UClass_UInventoryActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryActorComponent);
UInventoryActorComponent::~UInventoryActorComponent() {}
// ********** End Class UInventoryActorComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h__Script_UEInventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryActorComponent, UInventoryActorComponent::StaticClass, TEXT("UInventoryActorComponent"), &Z_Registration_Info_UClass_UInventoryActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryActorComponent), 2720301040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h__Script_UEInventorySystem_1617120703(TEXT("/Script/UEInventorySystem"),
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h__Script_UEInventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h__Script_UEInventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
