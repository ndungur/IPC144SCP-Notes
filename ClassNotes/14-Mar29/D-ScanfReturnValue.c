#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a, b, c;
  int res;
  printf("Enter three numbers: ");
  res = scanf("%d %d %d", &a, &b, &c);
  printf("you entered %d number: ", res);
  return 0;
}