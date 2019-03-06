#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findMax(int num1, int num2);
int stop(void);
void title(void);

int main(void) {
  int num1;
  int num2;
  int max;
  title();
  do {
    printf("Enter Two integers: ");
    scanf("%d %d", &num1, &num2);
    max = findMax(num1, num2);
    printf("%d is the larger one!\n", max);
  } while (!stop());
  printf("Goodbye!\n");
  return 0;
}



