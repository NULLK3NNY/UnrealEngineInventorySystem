

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "UEInventorySystemPlayerController.h"					//replace with your own playercontoller class
#include "InventoryActorComponent.generated.h"

class USphereComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UEINVENTORYSYSTEM_API UInventoryActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryActorComponent();


	// Called when the game starts
	virtual void BeginPlay() override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:

	//the pickup collision component whcih overlaps with pickupable objects only
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Misc)
	class USphereComponent* CollectionSphere;



private:
	AActor* ParentActor; //the (character) actor we are attached to 

	AMyPlayerController* playerController;	//reference to the playercontroller - holds the player inventory array

public:

	/** Function to check for the closest Interactable in sight and in range. */
	UFUNCTION()
	void CheckForInteractables();

	//used for the raycast when we are overlapping to point to a pickable object
	UPROPERTY(EditAnywhere, Category = "Utils")
	float maxRange;

	// declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// declare overlap end function
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//use to state the overlapping of this and pickupable objects
	UPROPERTY(BluePrintReadOnly)
	bool bIsOverlappingPickup;
};