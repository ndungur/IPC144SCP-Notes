#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
  char n1[41] = "Frank";
  char n2[41] = "John";
  int age1 = 34;
  int age2 = 5;
  printf("%-20s|%3d\n", n1, age1);
  printf("%-20s|%3d\n", n2, age2);

  return;
}