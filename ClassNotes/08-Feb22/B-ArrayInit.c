#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int i = 0;
  short s[4] = { 2, 5, 9, 1 };
  while (i < 4) {
    printf("%d ", s[i]);
    i++;
  }
  putchar('\n');
  return 0;
}