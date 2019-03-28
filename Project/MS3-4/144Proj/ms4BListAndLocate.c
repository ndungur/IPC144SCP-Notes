
// Final Project Milestone 4
// Student defined values tester
// Version 1.0
// Date	2019/03/20
// Author	Fardad Soleimanloo
// Description
// This program test the list and locate item
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "grapp.h"
#include "item.h"
#include "interface.h"
void cls(void) {
  system("cls");
}
int main() {
  struct Item I[20] = {
     { 4.4,275,0,10,2,"Royal Apples" },
     { 5.99,386,0,20,4,"Watermelon" },
     { 3.99,240,0,30,5,"Blueberries" },
     { 4.49,355,1,20,5,"Chicken Alfredo" },
     { 5.49,846,1,3,5,"Veal Parmigiana" },
     { 5.29,359,1,40,5,"Beffsteak Pie" },
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
  int searchIndex;
  printf("Listing Items, your ouput must match the programs.\nYours:\n");
  listItems(I, 6);
  printf("=========================================================================\n"
         "Program's:\n");
  printf(
        "Row |SKU| Name               | Price  |Taxed| Qty | Min |   Total    |Atn\n"
        "----+---+--------------------+--------+-----+-----+-----+------------|---\n"
        "1   |275|Royal Apples        |    4.40|   No|  10 |   2 |       44.00|\n"
        "2   |386|Watermelon          |    5.99|   No|  20 |   4 |      119.80|\n"
        "3   |240|Blueberries         |    3.99|   No|  30 |   5 |      119.70|\n"
        "4   |355|Chicken Alfredo     |    4.49|  Yes|  20 |   5 |      101.47|\n"
        "5   |846|Veal Parmigiana     |    5.49|  Yes|   3 |   5 |       18.61|***\n"
        "6   |359|Beffsteak Pie       |    5.29|  Yes|  40 |   5 |      239.11|\n"
        "--------------------------------------------------------+----------------\n"
        "                                           Grand Total: |      642.69\n"
  );
  pause();
  cls();
  printf("Locate Item, successful search:\n");
  printf("Yours:\n");
  searchIndex = locateItem(I, 20, 835);
  if (searchIndex != -1)  {
    printf("Found the item 835 at index: %d\n", searchIndex);
  }
  else {
    printf("No item with the sku 835 is in the array!\n");
  }
  printf("program's:\nFound the item 835 at index: 19\n");
    pause();
  cls();
  printf("Locate Item, unsuccessful search:\n");
  printf("Yours:\n");
  searchIndex = locateItem(I, 21, 999);
  if (searchIndex != -1) {
    printf("Found the item at index: %d\n", searchIndex);
  }
  else {
    printf("No item with the sku 999 is in the array!\n");
  }
  printf("Program's:\nNo item with the sku 999 is in the array!\n");
  return 0;
}


