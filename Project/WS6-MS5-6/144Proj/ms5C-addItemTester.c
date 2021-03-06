// Final Project Milestone 5
// Student defined values tester
// Version 1.0
// Date	2019/03/27
// Author	Fardad Soleimanloo
// Description
// This program test milestone 5 functions
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "itemSRA.h"
#include "interface.h"
void cls(void) {
  system("cls");
}
int main() {
  struct Item I[21] = {
   { 4.4,275,0,10,2,"Royal Apples" },
   { 5.99,386,0,20,4,"Watermelon" },
   { 3.99,240,0,30,5,"Blueberries" },
   { 4.49,355,1,20,5,"Chicken Alfredo" },
   { 5.49,846,1,3,5,"Veal Parmigiana" },
   { 5.29,359,1,40,5,"Beefsteak Pie" },
   { 10.56,916,0,20,3,"Seedless Grapes" },
   { 2.5,385,0,5,2,"Pomegranate" },
   { 0.44,495,0,100,30,"Banana" },
   { 0.5,316,0,123,10,"Kiwifruit" },
   { 4.79,127,1,30,3,"Curry Checken" },
   { 16.99,238,1,10,2,"Tide Detergent" },
   { 10.49,324,1,40,5,"Tide Liq. Pods" },
   { 10.99,491,1,50,5,"Tide Powder Det." },
   { 3.69,538,1,1,5,"Lays Chips S&V" },
   { 3.29,649,1,15,5,"Joe Org Chips" },
   { 1.79,731,1,100,10,"Allen's Apple Juice" },
   { 6.69,984,1,30,3,"Coke 24 Pack" },
   { 7.29,350,1,50,5,"Nestea 24 Pack" },
   { 6.49,835,1,20,2,"7up 24 pack" }
  };
  int recNo = 20;
  printf("Add Item Tester with Abort:\n");
  printf("Enter the following:\n"
    "       Name: Marker\n"
    "      Price: 1.11\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Add Item? (Y)es/(N)o: n\n"
  );
  printf("-------------------------------------------------------------\n");
  addItem(I, &recNo, 999);
  printf(
    "=============================================================\n"
    "The above should match the following:\n"
    "=============================================================\n"
    "        SKU: 999\n"
    "       Name: Marker\n"
    "      Price: 1.11\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Add Item? (Y)es/(N)o: n\n"
    "Aborted!\n"
  );
  printf("-------------------------------------------------------------\n");
  pause();
  cls();
  printf("Add Item Tester:\n");
  printf("Enter the following:\n"
    "       Name: Marker\n"
    "      Price: 1.11\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Add Item? (Y)es/(N)o: Y\n"
  );
  printf("-------------------------------------------------------------\n");
  addItem(I, &recNo, 999);
  printf(
    "=============================================================\n"
    "The above should match the following:\n"
    "=============================================================\n"
    "        SKU: 999\n"
    "       Name: Marker\n"
    "      Price: 1.11\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Add Item? (Y)es/(N)o: Y\n"
    "Item Added!\n"
  );
  printf("-------------------------------------------------------------\n");
  pause();
  cls();
  printf("-------------------------------------------------------------\n");
  displayItem(I[20]);
  printf(
    "=============================================================\n"
    "And the above should match the following:\n"
    "=============================================================\n"
    "        SKU: 999\n"
    "       Name: Marker\n"
    "      Price: 1.11\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: Yes\n"
  );
  printf("-------------------------------------------------------------\n");
  pause();
  cls();
  printf("Add Item Tester with full array:\n");
  printf("-------------------------------------------------------------\n");
  addItem(I, &recNo, 999);
  printf(
    "=============================================================\n"
    "The above should match the following:\n"
    "=============================================================\n"
    "Can not add new item; Storage Full!\n"
  );
  printf("-------------------------------------------------------------\n");
  return 0;
}


