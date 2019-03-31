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
  struct Item I = { 4.4,275,0,10,2,"Royal Apples" };
  printf("UpdateItem Tester with abort.\nEnter following values:\n"
    "       Name: abc\n"
    "      Price: 1\n"
    "   Quantity: 1\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Overwrite old data? (Y)es,(N)o: n\n"
    "----------------------------------------------------\n"
    );
  updateItem(&I);
  printf("==============================================\nThe above should match the following:\n==============================================\n"
    "Enter new data:\n"
    "        SKU: 275\n"
    "       Name: abc\n"
    "      Price: 1\n"
    "   Quantity: 1\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Overwrite old data? (Y)es,(N)o: n\n"
    "Overwrite Aborted!\n"
    "----------------------------------------------------\n"
  );
  pause();
  cls();
  printf("----------------------------------------------------\n");
  displayItem(I);
  printf("==============================================\nAnd the above should match the following:\n==============================================\n"
    "        SKU: 275\n"
    "       Name: Royal Apples\n"
    "      Price: 4.40\n"
    "   Quantity: 10\n"
    "Minimum Qty: 2\n"
    "   Is Taxed: No\n"
    );
  printf("----------------------------------------------------\n");
  pause();
  cls();
  printf("UpdateItem Tester with Overwrite.\nEnter following values:\n"
    "       Name: Marker\n"
    "      Price: 1.99\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: y\n"
    "Overwrite old data? (Y)es,(N)o: Y\n"
    "----------------------------------------------------\n"
  );
  updateItem(&I);
  printf("----------------------------------------------------\n");
  displayItem(I);
  printf("==============================================\nThe above should match the following:\n==============================================\n"
    "        SKU: 275\n"
    "       Name: Marker\n"
    "      Price: 1.99\n"
    "   Quantity: 11\n"
    "Minimum Qty: 1\n"
    "   Is Taxed: Yes\n"
  );
  printf("----------------------------------------------------\n");
  return 0;
}


