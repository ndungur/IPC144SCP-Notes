#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SUM (a+b) // with this the output is 20
//#define SUM a+b // with this the output is 14

int main(void) {
  int a = 2;
  int b = 3;
  int c;
  c = SUM * 4;
  printf("%d", c);
  return;
}