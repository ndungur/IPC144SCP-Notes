#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  FILE* fptr = fopen("myfile.txt", "w");
  fprintf(fptr, "hello world!\n");
  fclose(fptr);
  return 0;
}