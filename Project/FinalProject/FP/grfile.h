#ifndef GRFILE_H__
#define GRFILE_H__
#include <stdio.h>
#include "item.h"
void saveItem(struct Item item, FILE* dataFile);
int loadItem(struct Item* item, FILE* dataFile);
int saveItems(const struct Item item[], char fileName[], int NoOfRecs);
int loadItems(struct Item item[], char fileName[], int* NoOfRecsPtr);
#endif