#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a[4];
  int b[4] = { 10, 20 };
  double d[4] = { 123.456 };
  int i;
  for (i = 0; i < 4; i++) {
    printf("a[%d]: %-10d b[%d]: %-10d d[%d]: %-10lf\n", i, a[i], i, b[i], i, d[i]);
  }
  return 0;
}