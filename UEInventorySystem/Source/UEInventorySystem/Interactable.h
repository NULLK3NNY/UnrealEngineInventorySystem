#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

class BillboardComponent;

class USphereComponent;		//collision

class AMyPlayerController;

UCLASS()
class UEINVENTORYSYSTEM_API AInteractable : public AActor
{
	GENERATED_BODY()

public:
	AInteractable();

	UFUNCTION(BlueprintNativeEvent)					//blueprintnativeEvent means BP & C++ versions avaiable
		void Interact(APlayerController* Controller);

	//pure c++ version of the above, needs the _Implementation ?
	virtual void Interact_Implementation(APlayerController* Controller);	//not overriding anything, just make a concrete version if needed


protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	UBillboardComponent* InteractableBillboard;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USphereComponent* InteractableSphere;

	UPROPERTY(EditInstanceOnly)
	FString Name;

	UPROPERTY(EditInstanceOnly)
	FString Action;

	UFUNCTION(BlueprintCallable, Category = "Interactable")//shows up under the list of functions
		FString GetInteractText() const;	//returned object is read only
};