#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char str[200];
  int i;
  FILE* fptr = fopen("prg.c", "r");
  if (fptr != NULL) {
    while (fscanf(fptr, "%s", str) == 1) {
      printf("%s ", str);
    }
    fclose(fptr);
  }
  else {
    printf("File could not be opened for read!\n");
  }
  return 0;
}