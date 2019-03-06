#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter = 10;
  printf("Before loop!\n");
  while (counter <= 5) {  // a while loop may never happen
    printf("%d \r", counter);
    counter++;
  }
  printf("\nAfter loop!\n");
  return 0;
}
