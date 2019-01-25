#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char c; // -128 -> 127
  short s; // -32000 -> 32000
  int i; // -2000000000 -> 2000000000
  long l; // -2000000000 -> 2000000000
  int a;
  a = 24.34456;
  a = a + 1;
  printf("The number is %d\n", a);
  return 0;
}