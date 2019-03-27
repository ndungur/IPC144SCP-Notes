#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void addTen(int *a) {
  *a += 10;
}



int main() {
  int i = 5;
  addTen(&i);
  printf("%d\n", i);
  return 0;
}







































