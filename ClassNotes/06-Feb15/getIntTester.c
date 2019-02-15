#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
In linux:
gcc -Wall getIntTester.c myFuncs.c -o testgetInt<ENTER>

executable : testgetInt

*/

int getInt(void);


int main(void) {
  int num;
  printf("Please enter an integer: ");
  num = getInt();
  printf("You entered %d\n", num);
  return 0;
}
