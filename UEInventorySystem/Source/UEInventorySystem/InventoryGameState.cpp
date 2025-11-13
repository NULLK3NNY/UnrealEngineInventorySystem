#include "InventoryGameState.h"

#include "Engine/DataTable.h"


//constructor
AInventoryGameState::AInventoryGameState()
{
	//setup your ITemDB first as a misc/datatable in the editor, 
	static ConstructorHelpers::FObjectFinder<UDataTable> BP_ItemDB(TEXT("DataTable'/Game/Data/ItemDB.ItemDB'"));

	if (BP_ItemDB.Succeeded())
	{
		ItemDB = BP_ItemDB.Object;
		UE_LOG(LogTemp, Warning, TEXT("we found the ITemDB"));
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("no item DB found in the DATA folder in the editor. Add it via misc / datatable"));
}

