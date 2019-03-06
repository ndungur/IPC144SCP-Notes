#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter = 10;
  printf("Before loop!\n");
  do { // do while is a while that happens at least once.
    printf("%d \r", counter);
    counter++;
  } while (counter <= 5);
  printf("\nAfter loop!\n");
  return 0;
}
