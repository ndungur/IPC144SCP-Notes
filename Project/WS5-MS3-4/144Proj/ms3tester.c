
// Final Project Milestone 3
// Student defined values tester
// Version 1.0
// Date	2019/03/20
// Author	Fardad Soleimanloo
// Description
// This program test the student implementation of the main
// Interface and item related functions
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "interface.h"
void showItem(struct Item I);
void defines(void);
void calcs(void);
void EntryTester(void);
void displayItemTest(void);

int main(void) {
  defines();
  calcs();
  EntryTester();
  displayItemTest();
  return 0;
}

void defines(void) {
  printf("Testing Define statements:\n");
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
}
void calcs(void) {
  struct Item itm = { 123.45, 123, 1, 10, 2, "testing" };
  printf("Calcs----------------------------------------------\n");
  printf("totalAfterTax: %.2lf\n", totalAfterTax(itm));
  printf("isLowQuantity: %s\n", isLowQuantity(itm) ? "Yes" : "No");
  itm.minQuantity = 20;
  printf("isLowQuantity: %s\n", isLowQuantity(itm) ? "Yes" : "No");
  printf("end Calcs------------------------------------------\n");
}

void EntryTester(void) {
  struct Item itm;
  printf("EntryTester----------------------------------------\n");
  printf("Errorless entry testing:\n"
    "Enter the following values:\n"
    "             123\n"
    "Start here:------>\n"
    "             Apple\n"
    "             1.23\n"
    "             23\n"
    "             20\n"
    "             n\n"
    "--------------------------------------------------\n"
  );
  itm = itemEntry(123);
  printf("Values entered into the Item structure: \n");
  displayItem(itm);
  pause();
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
  printf("Values entered into the Item structure: \n");
  displayItem(itm);
  printf("end EntryTester------------------------------------\n");
}
void displayItemTest(void) {
  struct Item itmNoTax = { 1.23,123,0,23,20,"Apple" };
  struct Item itmTaxed = { 1.23,123,1,23,20,"Cookies" };
  struct Item itmLowQty = { 1.23,123,1,23,34,"Cookies" };
  printf("displayItemTest------------------------------------\n");
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
  printf("--------------------------------------------------------\n");
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
  printf("--------------------------------------------------------\n");
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
  printf("end displayItemTest--------------------------------\n");
}
