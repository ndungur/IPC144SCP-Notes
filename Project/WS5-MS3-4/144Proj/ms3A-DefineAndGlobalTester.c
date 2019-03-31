#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "item.h"
void showItem(struct Item I) {
  printf("----------------------------------\n");
  printf("sku: %d\n", I.sku);
  printf("name: %s\n", I.name);
  printf("price: %.2lf\n", I.price);
  printf("quantity: %d\n", I.quantity);
  printf("minimum quantity: %d\n", I.minQuantity);
  printf("isTaxed: %d\n", I.isTaxed);
  printf("----------------------------------\n");
}
int main() {
  struct Item itm = { 123.45, 123, 1, 10, 2, "testing" };
  printf("Testing Define statements:\n\n");
  printf("----------------------------\n");
  printf("LINEAR: %d, FORM: %d\n", LINEAR, FORM);
  printf("STOCK: %d\n", STOCK);
  printf("CHECKOUT: %d\n", CHECKOUT);
  printf("MAX_ITEM_NO: %d\n", MAX_ITEM_NO);
  printf("MAX_QTY: %d\n", MAX_QTY);
  printf("SKU_MAX: %d\n", SKU_MAX);
  printf("SKU_MIN: %d\n", SKU_MIN);
  printf("Global TAX: %.2lf\n", TAX);
  printf("----------------------------\n");
  printf("The above output should be exactly as below:\n"
    "----------------------------\n"
    "LINEAR: 1, FORM : 0\n"
    "STOCK : 1\n"
    "CHECKOUT : 0\n"
    "MAX_ITEM_NO : 21\n"
    "MAX_QTY : 999\n"
    "SKU_MAX : 999\n"
    "SKU_MIN : 100\n"
    "Global TAX : 0.13\n"
    "----------------------------\n"
  );
  showItem(itm);
  return 0;
}
