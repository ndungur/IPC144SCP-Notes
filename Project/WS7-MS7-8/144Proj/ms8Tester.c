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
  showFileContent("testdata.txt");
  hr();
  printf("Testing load Items\n");
  createFile("testdata.txt");
  loadItems(I, "testdata.txt", &i);
  while (i) {
    displayItemInLine(I[6 - i]);
    i--;
  }
  hr();
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
void hr() {
  printf("--------------------------------------------------------------------------\n");
}