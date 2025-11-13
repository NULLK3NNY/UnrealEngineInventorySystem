// Fill out your copyright notice in the Description page of Project Settings.
#include "InventoryActorComponent.h"
#include "Interactable.h"
#include "ManPickup.h"

#include "UEInventorySystemPlayerController.h"

#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UInventoryActorComponent::UInventoryActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Create the collection/pickup sphere default size, adjust in the editor
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->InitSphereRadius(100.0f);

	CollectionSphere->SetGenerateOverlapEvents(true);

	//may need a custom collsision channel
	CollectionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);


	//setup delegates/eventlistener handlers
	CollectionSphere->OnComponentBeginOverlap.AddDynamic(this, &UInventoryActorComponent::OnOverlapBegin);
	CollectionSphere->OnComponentEndOverlap.AddDynamic(this, &UInventoryActorComponent::OnOverlapEnd);

	//initialise these variables
	maxRange = 500.f;
	bIsOverlappingPickup = false;

	//initialise player controller properly in the Begin Play()
	//playerController = nullptr;

}

//setup and overlap event with our collision sphere and the object's sphere
void UInventoryActorComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != ParentActor) && OtherComp)
	{
		// Log the names of the overlapping components and actors
		FString OverlappedCompName = OverlappedComp ? OverlappedComp->GetName() : TEXT("None");
		FString OtherCompName = OtherComp ? OtherComp->GetName() : TEXT("None");

		UE_LOG(LogTemp, Warning, TEXT("Overlapped Component: %s"), *OverlappedCompName);
		UE_LOG(LogTemp, Warning, TEXT("Other Component: %s"), *OtherCompName);

		if (OtherActor->IsA(AManPickup::StaticClass()))
		{
			bIsOverlappingPickup = true;
		}

		AInteractable* Interactable = Cast<AInteractable>(OtherActor);
		if (Interactable)
		{
			playerController->CurrentInteractable = Interactable;
			UE_LOG(LogTemp, Warning, TEXT("Hit the sphere component of an interactable object!"));
		}

		//comment once tested 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ovelapping true"));

	}
}

void UInventoryActorComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != ParentActor) && OtherComp)
	{
		//comment out once working
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ovelapping false"));

		bIsOverlappingPickup = false;
		playerController->CurrentInteractable = nullptr;
	}
}


// Called when the game starts
void UInventoryActorComponent::BeginPlay()
{
	Super::BeginPlay();

	//Only WHEN we BeginPlay should we get a reference to the character owner of the component
	//as this is a component, it cant exist without a parent ,
	ParentActor = this->GetOwner();

	//get the player controller of the parent actor (character)
	playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(ParentActor, 0));

	if (ParentActor)	//exists?
	{
		//attach the component to the actor's root scene-component
		CollectionSphere->AttachToComponent(ParentActor->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		UE_LOG(LogTemp, Warning, TEXT("CollectionSphere->AttachToComponent"))
	}

}


// Called every frame
void UInventoryActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	//if we are overlapping with a pickupable/collectable/interactable thing then call the function, saves calling every tick
	if (bIsOverlappingPickup)
	{
		//CollectAutoPickups();
		CheckForInteractables();
	}

}

//note this is run everytick to see what actors we overlap with
void UInventoryActorComponent::CheckForInteractables()
{
	//get the vectors for the raycast/linetrace	based on our playercontroller position in the world.
	FVector Location;
	FRotator Rotation;
	playerController->GetPlayerViewPoint(Location, Rotation);		//even though its a void, it gets the &location &rotation
	FVector End = Location + Rotation.Vector() * maxRange;		//end vector is the location + vector scaled

	//setup the linetrace..

	//set up the struct of the hitresult
	FHitResult HitResult;
	FCollisionQueryParams QueryParams;//setup the collision params for the trace...


	QueryParams.AddIgnoredActor(ParentActor); //ignores the parent actor 


	//use the mesh to test for collisions, will skip the collisionsphere...slower but more accurate
	QueryParams.bTraceComplex = true;
	// Use the appropriate collision channel
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Location, End, ECC_Visibility, QueryParams))
	{
		// Check if the hit actor is of type AInteractable or AManPickup
		if (HitResult.GetActor())
		{

			if (HitResult.GetActor()->IsA(AManPickup::StaticClass()))
			{
				//GREEN LASER LINE - REMOVE ONCE WORKING
				DrawDebugLine(GetWorld(), Location, End, FColor::Green, false, 0.5f, 0, 5.0f);


				// Dealw ith the  collisions with either AInteractable or APickup
				AInteractable* Interactable = Cast<AInteractable>(HitResult.GetActor());


				// If the cast is successful, we have a valid object
				if (Interactable)
				{
					//assign the currentInteractable based on what we are colliding with, ready for interact() event to be called
					playerController->CurrentInteractable = Interactable;

					UE_LOG(LogTemp, Warning, TEXT("CurrentInteractable is %s"), *Interactable->GetName())
						return;
				}
			}
			////otherwise...
			playerController->CurrentInteractable = nullptr;
			UE_LOG(LogTemp, Warning, TEXT("CurrentInteractable is nullptr"))
		}
	}

}