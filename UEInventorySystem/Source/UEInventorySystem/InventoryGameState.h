#pragma once
#include "GameFramework/GameStateBase.h"
#include "InventoryItem.h"
#include "InventoryGameState.generated.h"

/**
 *
 */

class UDataTable;

UCLASS()
class UEINVENTORYSYSTEM_API AInventoryGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	AInventoryGameState();

	inline UDataTable* GetItemDB() const { return ItemDB; };

protected:
	UPROPERTY(EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	UDataTable* ItemDB;
};
