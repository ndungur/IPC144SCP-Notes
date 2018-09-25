#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void coins(double money);

int main(void) {
  double mvalue;
  printf("Please enter the money value: ");
  scanf("%lf", &mvalue);
  coins(mvalue);
  return 0;
}

// gcc -Wall prg.c myCoins.c -o coins

