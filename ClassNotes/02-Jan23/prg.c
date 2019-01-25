// matrix.senecacollege.ca
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double value1;
  double value2;
  double sum;
  printf("Sum calculator\n\n");
  printf("Enter the first number: ");
  scanf("%lf", &value1);
  printf("Enter the second number: ");
  scanf("%lf", &value2);
  sum = value1 + value2;
  printf("The sum of %lf + %lf is %lf\n", value1, value2, sum);
  printf("The sum of %.2lf + %.2lf is %.3lf\n", value1, value2, sum);

  return 0;
}