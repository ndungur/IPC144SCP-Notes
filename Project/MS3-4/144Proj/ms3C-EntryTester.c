#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "interface.h"
void cls(void) {
  system("cls");
}
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
int main(void) {
  struct Item itm;
  struct Item goodItem = { 1.23,123,0,23,34,"Apple" };
  struct Item badItem = { 1.23,123,1,10,20,"A name to be too lon" };
  printf("Errorless entry testing:\n"
    "Enter the following values:\n"
    "             123\n"
    "Start here:------>\n"
    "             Apple\n"
    "             1.23\n"
    "             23\n"
    "             34\n"
    "             n\n"
    "--------------------------------------------------\n"
  );
  itm = itemEntry(123);
  printf("Your above entery must match the following:\n"
    "        SKU: 123\n"
    "       Name: Apple\n"
    "      Price: 1.23\n"
    "   Quantity: 23\n"
    "Minimum Qty: 34\n"
    "   Is Taxed: n\n"
  );
  pause();
  cls();
  printf("Values entered into the Item structure: \n");
  showItem(itm);
  printf("The above values must match the following: \n");
  showItem(goodItem);
  pause();
  cls();
  printf("Erroneous entry testing:\n"
    "Enter the following values\n"
    "             123\n"
    "Start here:------>\n"
    "             A name to be too long for this entry\n"
    "             abc\n"
    "                                  1.23\n"
    "             abc\n"
    "                                   1000\n"
    "                                10\n"
    "             200\n"
    "                                20\n"
    "             x\n"
    "                                   y\n"
    "--------------------------------------------------\n"
  );
  itm = itemEntry(123);
  printf("--------------------------------------------------\n"
    "Your above entery must match the following:\n"
    "--------------------------------------------------\n"
    "        SKU: 123\n"
    "       Name: A name to be too long for this entry\n"
    "      Price: abc\n"
    "Invalid number, please try again: 1.23\n"
    "   Quantity: abc\n"
    "Invalid integer, please try again: 1000\n"
    "Invalid value, 1 < value < 999: 10\n"
    "Minimum Qty: 200\n"
    "Invalid value, 0 < value < 100: 20\n"
    "   Is Taxed: x\n"
    "Only (Y)es or (N)o are acceptable: y\n"
    "--------------------------------------------------\n"
  );
  pause();
  cls();
  printf("Values entered into the Item structure: \n");
  showItem(itm);
  printf("The above values must match the following: \n");
  showItem(badItem);

  return 0;
}
