#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void strCpy(char des[], char src[]) {
  int i =0;
  while (src[i] != 0) {
    des[i] = src[i];
    i++;
  }
  des[i] = 0;
}

int main(void) {
  char name1[30] = "Fred";
  char name2[30] = "Some garbage value";
  // you CANNOT DO THIS:
  printf("Before copying: \n");
  printf("Name1: %s\n", name1);
  printf("Name2: %s\n", name2);
  strCpy(name2, name1);
  printf("After copying: \n");
  printf("Name1: %s\n", name1);
  printf("Name2: %s\n", name2);
  return 0;
}