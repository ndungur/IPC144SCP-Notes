#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  float num[5];  // num[0], mun[1] ---> num[4] 
  int i;
  for (i = 0; i < 5; i++) {
    num[i] = i * 0.5;
  }
  printf("%f\n", num[2]);
  for (i = 0; i < 5; i++) {
    printf("%f ", num[i]);
  }
  printf("\n");
  return 0;
}