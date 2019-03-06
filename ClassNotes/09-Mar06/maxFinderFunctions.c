#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void title(void) {
  printf("Max finder program!\n\n");
}


int findMax(int num1, int num2) {
  int max;
  if (num1 > num2) {
    max = num1;
  }
  else {
    max = num2;
  }
  return max;
}

int stop(void) {
  int res;
  printf("Stop? (1 or yes and 0 for no): ");
  scanf("%d", &res);
  return res;
}

