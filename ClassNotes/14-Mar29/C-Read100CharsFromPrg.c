#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch;
  int i;
  FILE* fptr = fopen("prg.c", "r");
  if (fptr != NULL) {
    for (i = 0; i < 100; i++) {
      fscanf(fptr, "%c", &ch);
      printf("%c", ch);
    }
    fclose(fptr);
  }
  else {
    printf("File could not be opened for read!\n");
  }
  return 0;
}