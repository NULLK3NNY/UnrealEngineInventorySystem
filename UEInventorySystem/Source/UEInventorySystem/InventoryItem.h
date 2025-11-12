
//ItemDB uses this class for the structure only.
#pragma once

#include "Engine/DataTable.h"
//#include "ManPickup.h"
#include "InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FInventoryItem();								//constructor, set defaults here

	// a ref to the type of class we picked up so we call its use
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item type")
	//TSubclassOf<AManPickup> PickupClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Thumbnail; //hard ref - the actual value is provided in the ItemDB

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> StaticMesh;	//soft ref points to the path not the object
};
