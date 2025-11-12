// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
UPackage* Z_Construct_UPackage__Script_UEInventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInventoryItem ****************************************************
static_assert(std::is_polymorphic<FInventoryItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItem cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_UEInventorySystem(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// a ref to the type of class we picked up so we call its use\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Item type\")\n//TSubclassOf<AManPickup> PickupClass;\n" },
#endif
		{ "ModuleRelativePath", "InventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a ref to the type of class we picked up so we call its use\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Item type\")\nTSubclassOf<AManPickup> PickupClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "InventoryItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//hard ref - the actual value is provided in the ItemDB\n" },
#endif
		{ "ModuleRelativePath", "InventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hard ref - the actual value is provided in the ItemDB" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEInventorySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryItem",
	Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
	sizeof(FInventoryItem),
	alignof(FInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton;
}
// ********** End ScriptStruct FInventoryItem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryItem_h__Script_UEInventorySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_FInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 281236975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryItem_h__Script_UEInventorySystem_3146870937(TEXT("/Script/UEInventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryItem_h__Script_UEInventorySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenny_Documents_GitHub_UnrealEngineInventorySystem_UEInventorySystem_Source_UEInventorySystem_InventoryItem_h__Script_UEInventorySystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
