#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
  int A[10] = { 10, 20, 30 ,40, 50, 60, 70, 80, 10, 20 };
  int B[10];
  int i;
  for (i = 0; i < 10; i++) {
    B[i] = A[i];
  }
  return 0;
}