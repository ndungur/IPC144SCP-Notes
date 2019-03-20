
// Final Project Milestone 3
// Student defined values tester
// Version 1.0
// Date	2019/03/20
// Author	Fardad Soleimanloo
// Description
// This program test the student implementation of the UI tools
//
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

int main(void) {
  defines();
  calcs();
  EntryTester();
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
  printf("calcs----------------------------------------------\n");
  struct Item itm = { 123.45, 123, 1, 10, 2, "testing" };
  printf("totalAfterTax: %.2lf\n", totalAfterTax(itm));
  printf("isLowQuantity: %s\n", isLowQuantity(itm) ? "Yes" : "No");
  itm.minQuantity = 20;
  printf("isLowQuantity: %s\n", isLowQuantity(itm) ? "Yes" : "No");
  printf("---------------------------------------------------\n");
}

void EntryTester(void) {
  struct Item itm;
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
}
