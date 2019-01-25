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
  double c = 5.0;
  c = c * 123.23458;
  c = c / 123.23458;
  a = b > c;
  printf("%d", a);
  a = b < c;
  printf("%d", a);
  a = b >= c;
  printf("%d", a);
  a = b < c;
  printf("%d", a);
  a = b <= c;
  printf("%d", a);
  a = b != c;
  printf("%d", a);
  a = b == c;
  printf("%d\n", a);
  return 0;
}

