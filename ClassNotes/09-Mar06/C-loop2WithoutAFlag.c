#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter = 0;
  printf("Before loop!\n");
  while (counter <= 50000) {
    printf("%d \r", counter);
    counter++;
  }
  printf("\nAfter loop!\n");
  return 0;
}
