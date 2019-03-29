#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char sname[200];
  char dname[200];
  char ch;
  printf("Copy file program!\n");
  printf("Source filename: ");
  scanf("%s", sname);
  printf("Destination filename: ");
  scanf("%s", dname);
  FILE* sptr = fopen(sname, "r");
  FILE* dptr;
  if (sptr != NULL) {
    dptr = fopen(dname, "w");
    if (dptr != NULL) {
      while (fscanf(sptr, "%c", &ch) == 1) {
        fprintf(dptr,"%c", ch);
      }
      fclose(dptr);
    }
    else {
      printf("%s could not be opened for writing!\n", dname);
    }
    fclose(sptr);
  }
  else {
    printf("%s could not be opened for read!\n", sname);
  }
  return 0;
}