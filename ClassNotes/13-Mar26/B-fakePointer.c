#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"


void intptrExampl() {
  int A;
  int pointer ip;
  ip = addressOf A;
  targetOf ip = 2345;

  printf("%d\n", A);
  printf("%d\n", targetOf ip);
  printf("%u\n", ip);
}

void doublePtrExample() {
  double B;
  double pointer dp;
  dp = addressOf B;
  targetOf dp = 1234.568;

  printf("%lf\n", B);
  printf("%lf\n", targetOf dp);
  printf("%u\n", dp);
}

int main() {
  intptrExampl();
  doublePtrExample();
  return 0;
}







































