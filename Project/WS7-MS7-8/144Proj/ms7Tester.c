// Final Project Milestone 7
// Student defined values tester
// Version 1.0
// Date	2019/04/05
// Author	Fardad Soleimanloo
// Description
// This program test milestone 7 functions
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
  struct Item item;
  struct Item I[6] = {
          { 4.4,275,0,10,2,"Royal Apples" },
          { 5.99,386,0,20,4,"Watermelon" },
          { 3.99,240,0,30,5,"Blueberries" },
          { 4.49,355,1,20,5,"Chicken Alfredo" },
          { 5.49,846,1,3,5,"Veal Parmigiana" },
          { 5.29,359,1,40,5,"Beefsteak Pie" }
  };
  int i;
  FILE* file = fopen("testdata.txt", "w");
  fclose(file);
  file = fopen("testdata.txt", "r");
  printf("Testing Read failure:\n");
  hr();
  if (loadItem(&item, file)) {
    displayItem(item);
  }
  else {
    printf("Could not read from file!\n");
  }
  hr();
  fclose(file);
  file = fopen("testdata.txt", "w");
  printf("Testing Save Item\n");
  for (i = 0; i < 4; i++) {
    saveItem(I[i], file);
  }
  fclose(file);
  showFileContent("testdata.txt");
  hr();
  printf("Testing load Item\n");
  createFile("testdata.txt");
  file = fopen("testdata.txt", "r");
  while (loadItem(&item,file)) {
    displayItemInLine(item);
  }
  fclose(file);
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