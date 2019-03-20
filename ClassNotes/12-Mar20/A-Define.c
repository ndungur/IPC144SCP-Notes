#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159265

int main(void) {
  double rad;
  printf("Please enter the radius of the circle: ");
  scanf("%lf", &rad);
  printf("The area is: %.2lf\n", PI * rad * rad);

  return;
}