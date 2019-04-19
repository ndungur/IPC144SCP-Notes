#define _CRT_SECURE_NO_WARNINGS
#include "grapp.h"
#include <stdio.h>
void showFile(void) {
  FILE* fptr = fopen(DATAFILE, "r");
  int ch;
  printf("---- Data content after execution ----------------\n");
  while ((ch = fgetc(fptr)) != EOF) putchar(ch);
  printf("--------------------------------------------------\n");
  fclose(fptr);
}
int main(void) {
  GroceryInventorySystem();
  showFile();
  return 0;
}