#include "InventoryItem.h"

FInventoryItem::FInventoryItem()
{
	//set defaults
	this->ItemName = FText::FromString("No Name");
	this->Weight = 1;
	this->Value = 1;
	this->Description = FText::FromString("Edit Description");

}