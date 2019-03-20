#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "values.h"

const double PI = 3.15169265;

int main(void) {
  double rad;
  printf("Please enter the radius of the circle: ");
  scanf("%lf", &rad);
  printf("The area is: %.2lf\n", PI * rad * rad);
  foo();
  return;
}