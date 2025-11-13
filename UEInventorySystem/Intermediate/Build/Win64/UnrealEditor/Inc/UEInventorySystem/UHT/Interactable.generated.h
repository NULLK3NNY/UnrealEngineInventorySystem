// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"

#ifdef UEINVENTORYSYSTEM_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define UEINVENTORYSYSTEM_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;

// ********** Begin Class AInteractable ************************************************************
#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractText); \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_CALLBACK_WRAPPERS
UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInteractable_NoRegister();

#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEInventorySystem"), Z_Construct_UClass_AInteractable_NoRegister) \
	DECLARE_SERIALIZER(AInteractable)


#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractable(AInteractable&&) = delete; \
	AInteractable(const AInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable) \
	NO_API virtual ~AInteractable();


#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_13_PROLOG
#define FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_CALLBACK_WRAPPERS \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractable;

// ********** End Class AInteractable **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
