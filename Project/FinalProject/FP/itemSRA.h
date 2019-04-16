#ifndef ITEMSRA_H__
#define ITEMSRA_H__

#include "item.h"
int findItemIndex(const struct Item item[], int numOfRecs, int* indexPtr);
int updateItem(struct Item* itemptr);
int addItem(struct Item item[], int *NoOfRecs, int sku);


#endif