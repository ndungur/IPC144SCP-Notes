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
  int b = 5;
  a = ++b;
  printf("%d->%d,", a, b);
  a = --b;
  printf("%d->%d", a, b);
  return 0;
}

