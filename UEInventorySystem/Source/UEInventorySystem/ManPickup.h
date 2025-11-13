// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "ManPickup.generated.h"

/**
 *
 */

 //forward declarations
class UStaticmeshComponent;	//mesh

UCLASS()
class UEINVENTORYSYSTEM_API AManPickup : public AInteractable
{
	GENERATED_BODY()

public:
	AManPickup();

	virtual void Interact_Implementation(APlayerController* Controller);	//this is to be defined per type of object


	//fully BP version
	UFUNCTION(BlueprintNativeEvent)	//needs a _Implementation c++ function too
		void Use();	//define in a BP deriviative of ManPickup and setup there. per object, eg apple banana etc

	//C++
	virtual void Use_Implementation();

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	UStaticMeshComponent* PickupMesh;

	//note:EditInstanceOnly  means set this in the instance of a the class, eg BP_food is derived from C++ manpickup class. 
	//choose a rowname number according to the ItemDB entries. 
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Default")	//only edit from the instance detail panel
		FName RowName; // passed to the Add to InventorybyID function, shows up in the Man pickup BP details panel
};