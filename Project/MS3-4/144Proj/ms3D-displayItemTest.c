#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "interface.h"
void cls(void) {
  system("cls");
}
int main(void) {
  struct Item itmNoTax = { 1.23,123,0,23,20,"Apple" };
  struct Item itmTaxed = { 1.23,123,1,23,20,"Cookies" };
  struct Item itmLowQty = { 1.23,123,1,23,34,"Cookies" };
  printf("Item that is not taxed: \n");
  displayItem(itmNoTax);
  printf("The above must match the following: \n"
    "        SKU: 123\n"
    "       Name: Apple\n"
    "      Price: 1.23\n"
    "   Quantity: 23\n"
    "Minimum Qty: 20\n"
    "   Is Taxed: No\n"
  );
  pause();
  cls();
  printf("Taxed Item:\n");
  displayItem(itmTaxed);
  printf("The above must match the following: \n"
    "        SKU: 123\n"
    "       Name: Coolies\n"
    "      Price: 1.23\n"
    "   Quantity: 23\n"
    "Minimum Qty: 20\n"
    "   Is Taxed: Yes\n"
  );
  pause();
  cls();
  printf("Low Quantity Taxed Item:\n");
  displayItem(itmLowQty);
  printf("The above must match the following: \n"
    "        SKU: 123\n"
    "       Name: Coolies\n"
    "      Price: 1.23\n"
    "   Quantity: 23\n"
    "Minimum Qty: 34\n"
    "   Is Taxed: Yes\n"
    "WARNING: Quantity low, please order ASAP!!!\n"
  );
  pause();
  cls();
  return 0;
}
