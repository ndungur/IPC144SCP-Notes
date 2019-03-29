#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  FILE* fptr = fopen("myfile.txt", "a");
  if (fptr != NULL) {
    fprintf(fptr, "hello world!\n");
    fclose(fptr);
  }
  else {
    printf("File could not be opened for write!\n");
  }
  return 0;
}