#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch;
  FILE* fptr = fopen("prg.c", "r");
  if (fptr != NULL) {
    while (fscanf(fptr, "%c", &ch) == 1) {
      printf("%c", ch);
    }
    fclose(fptr);
  }
  else {
    printf("File could not be opened for read!\n");
  }
  return 0;
}