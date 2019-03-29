#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char filename[200];
  char ch;
  printf("Filename: ");
  scanf("%s", filename);
  FILE* fptr = fopen(filename, "r");
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