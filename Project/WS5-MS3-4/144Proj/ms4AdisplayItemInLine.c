
// Final Project Milestone 4
// Student defined values tester
// Version 1.0
// Date	2019/03/20
// Author	Fardad Soleimanloo
// Description
// This program test display item in line
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "interface.h"
int main() {
  struct Item I[2] = {
     { 4.4,275,0,10,2,"Royal Apples" },
     { 6.49,835,1,20,2,"7up 24 pack" }
  };
  printf("Testing Display item in line:\nYour output must match output of the program:\nYours, No Tax item:\n");
  displayItemInLine(I[0]);
  printf("Programs:\n");
  printf("|275|Royal Apples        |    4.40|   No|  10 |   2 |       44.00|\n");
  printf("\n-----------------------------------------------------------------\n"
         "Yours, Taxed item:\n");
  displayItemInLine(I[1]);
  printf("Programs:\n");
  printf("|835|7up 24 pack         |    6.49|  Yes|  20 |   2 |      146.67|\n");
  I[1].minQuantity = 40;
  printf("\n-----------------------------------------------------------------\n"
    "Yours, Taxed item and low in quantity:\n");
  displayItemInLine(I[1]);
  printf("Programs:\n");
  printf("|835|7up 24 pack         |    6.49|  Yes|  20 |  40 |      146.67|***\n");
  return 0;
}


