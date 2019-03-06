#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int condition = 1; // true
  int counter = 0;
  printf("Before loop!\n");
  while (condition) {
    printf("%d \r", counter);
    counter++;
    if (counter > 50000) {
      condition = 0; // set condition to false
    }
  }
  printf("\nAfter loop!\n");
  return 0;
}
