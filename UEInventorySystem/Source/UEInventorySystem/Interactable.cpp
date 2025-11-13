#include "Interactable.h"
#include "Components/BillboardComponent.h"

#include "Components/SphereComponent.h"	//for collision


//set defaults, override with the blueprint derivative 
AInteractable::AInteractable()
{
	//this is used for initial detection
	InteractableSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Interactive sphere for interactables "));
	RootComponent = InteractableSphere; //set to root
	InteractableSphere->SetGenerateOverlapEvents(true);
	InteractableSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	//may need a custom collision channel
	InteractableSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	//setup billboard visual component for when there is nothing selected
	InteractableBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Simple Billboard Component"));
	InteractableBillboard->SetupAttachment(InteractableSphere);

	Name = "replace me -from interactable";	//defaults
	Action = "replace me -from interactable ";
}


//this does nothing rn, so use the BP version in the BP object.

//to be implemented by pure Interactable class types eg switch/lever/keycards?
void AInteractable::Interact_Implementation(APlayerController* Controller)
{
	//Interact(Controller);//call the BP version
	return;
}

//called from the WB_ingame BP
FString AInteractable::GetInteractText() const
{
	return FString::Printf(TEXT("%s: press interact to %s"), *Name, *Action); //update in the editor
}