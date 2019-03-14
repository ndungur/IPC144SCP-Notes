#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "interface.h"
int main(void) {
  int a;
  do {
    printf("Enter an integer: ");
    a = getInt();
    printf("The integer you entered is: %d\n", a);
    printf("Want to enter another integer? (Y/N): ");
  } while (yes());
  return 0;
}