// Final Project Milestone 8
// Student defined values tester
// Version 1.0
// Date	2019/04/05
// Author	Fardad Soleimanloo
// Description
// This program test milestone 8 functions
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "grfile.h"
#include "item.h"
#include "interface.h"
void showFileContent(const char* fname);
void createFile(const char* fname);
void match(void);
void cls(void);
void next(void);
void hr();

int main() {
  struct Item I[6] = {
   { 10.56,916,0,20,3,"Seedless Grapes" },
   { 2.5,385,0,5,2,"Pomegranate" },
   { 0.44,495,0,100,30,"Banana" },
   { 0.5,316,0,123,10,"Kiwifruit" },
   { 4.79,127,1,30,3,"Curry Checken" },
   { 16.99,238,1,10,2,"Tide Detergent" }
  };
  int i;
  printf("Testing Save Items\n");
  saveItems(I, "testdata.txt", 6);
  hr();
  showFileContent("testdata.txt");
  match();
  printf(
    "916,20,3,10.56,0,Seedless Grapes\n"
    "385,5,2,2.50,0,Pomegranate\n"
    "495,100,30,0.44,0,Banana\n"
    "316,123,10,0.50,0,Kiwifruit\n"
    "127,30,3,4.79,1,Curry Checken\n"
    "238,10,2,16.99,1,Tide Detergent\n"
  );
  hr();
  next();
  printf("Testing load Items\n");
  hr();
  createFile("testdata.txt");
  loadItems(I, "testdata.txt", &i);
  while (i) {
    displayItemInLine(I[6 - i]);
    i--;
  }
  match();
  printf(
    "|275|Royal Apples        |    4.40|   No|  10 |   2 |       44.00|\n"
    "|386|Watermelon          |    5.99|   No|  20 |   4 |      119.80|\n"
    "|240|Blueberries         |    3.99|   No|  30 |   5 |      119.70|\n"
    "|355|Chicken Alfredo     |    4.49|  Yes|  20 |   5 |      101.47|\n"
    "|846|Veal Parmigiana     |    5.49|  Yes|   3 |   5 |       18.61|***\n"
    "|359|Beefsteak Pie       |    5.29|  Yes|  40 |   5 |      239.11| \n"
  );
  hr();
  next();
  return 0;
}

void showFileContent(const char* fname) {
  FILE* file = fopen(fname, "r");
  char ch;
  while ((ch = fgetc(file)) != EOF) putchar(ch);
  fclose(file);
}

void createFile(const char* fname) {
  FILE* file = fopen(fname, "w");
  fprintf(file,
    "275,10,2,4.40,0,Royal Apples\n"
    "386,20,4,5.99,0,Watermelon\n"
    "240,30,5,3.99,0,Blueberries\n"
    "355,20,5,4.49,1,Chicken Alfredo\n"
    "846,3,5,5.49,1,Veal Parmigiana\n"
    "359,40,5,5.29,1,Beefsteak Pie\n"
  );
  fclose(file);
}
void match(void) {
  printf("============================================================\n"
    "The above (your output) should match the folloiwng:\n"
    "============================================================\n");
}
void cls(void) {
  system("cls");
}
void next(void) {
  pause();
  cls();
}
void hr() {
  printf("--------------------------------------------------------------------------\n");
}