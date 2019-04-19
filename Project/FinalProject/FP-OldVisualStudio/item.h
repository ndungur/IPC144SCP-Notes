#ifndef ITEM_H__
#define ITEM_H__

struct Item {
  double price;
  int sku;
  int isTaxed;
  int quantity;
  int minQuantity;
  char name[21];
};

#define LINEAR 1
#define FORM 0
#define STOCK 1
#define CHECKOUT 0
#define MAX_ITEM_NO 21
#define MAX_QTY 999
#define SKU_MAX 999
#define SKU_MIN 100

double totalAfterTax(struct Item item);
int isLowQuantity(struct Item item);
struct Item itemEntry(int sku);
void displayItemInLine(struct Item item);
void displayItem(struct Item item);
void listItems(const struct Item item[], int NoOfItems);
int locateItem(const struct Item item[], int NoOfRecs, int sku);




extern const double TAX; 
#endif