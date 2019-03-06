#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int done = 0; // done is a flag that is initially set to false
  int counter = 0;
  printf("Before loop!\n");
  do {
    printf("%d \r", counter);
    counter++;
    if (counter > 50000) {
      done = 1; // if is done
    }
  } while (!done);
  printf("\nAfter loop!\n");
  return 0;
}
