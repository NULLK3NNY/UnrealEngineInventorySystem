// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryActorComponent.h"

#ifdef UEINVENTORYSYSTEM_InventoryActorComponent_generated_h
#error "InventoryActorComponent.generated.h already included, missing '#pragma once' in InventoryActorComponent.h"
#endif
#define UEINVENTORYSYSTEM_InventoryActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UInventoryActorComponent *************************************************
#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execCheckForInteractables);


UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister();

#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryActorComponent(); \
	friend struct Z_Construct_UClass_UInventoryActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEInventorySystem"), Z_Construct_UClass_UInventoryActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryActorComponent)


#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryActorComponent(UInventoryActorComponent&&) = delete; \
	UInventoryActorComponent(const UInventoryActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryActorComponent) \
	NO_API virtual ~UInventoryActorComponent();


#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_13_PROLOG
#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryActorComponent;

// ********** End Class UInventoryActorComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryActorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
