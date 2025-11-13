// Fill out your copyright notice in the Description page of Project Settings.


#include "ManPickup.h"
#include "Components/StaticMeshComponent.h"
#include "UEInventorySystemPlayerController.h"

AManPickup::AManPickup()
{
	//set the mesh for an object
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	PickupMesh->SetupAttachment(RootComponent);

	//set the Man pickup specific property
	//RowName = TEXT("No ID assigned, please set according to ItemDB entries");

	//set the Interactable inherited properties
	Super::Name = "Change me, ";
	Super::Action = "Pick up";
}



//c++ version of the Interact
void AManPickup::Interact_Implementation(APlayerController* Controller)
{
	AUEInventorySystemPlayerController* IController = Cast<AUEInventorySystemPlayerController>(Controller);

	if (IController)// != nullptr)	//orig
	{
		if (IController->AddItemToInventoryByID(RowName)) //bool return,  add item to inventory, according to the rowname  - set
			this->Destroy(); //destroys the actor in world - its been "picked up" and is in the inventory.
	}
}

void AManPickup::Use_Implementation()
{
	//call the BP version
}