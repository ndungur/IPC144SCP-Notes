// login to  matrix.senecacollege.ca and keep the connection open
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Arithmetic
Relational
Logical
      operand @  operand     (binary operator)
  res <- val1 @ val2

*/
int main(void) {
  int a;
  double b = 5.0;
  double c = 3.0;
  double d = 1.0;
  a = b > 3 && c < 5;
  printf("%d\n", a);
  a = b < 3 && c < 5;
  printf("%d\n", a);
  a = b < 3 && c > 5;
  printf("%d\n", a);
  a = b > 3 || c < 5;
  printf("%d\n", a);
  a = b < 3 || c < 5;
  printf("%d\n", a);
  a = b < 3 || c > 5;
  printf("%d\n", a);
  a = !(b < 3);
  printf("%d\n", a);
  a = !b;
  printf("%d\n", a);
  a = !!b;
  printf("%d\n", a);
  return 0;
}

