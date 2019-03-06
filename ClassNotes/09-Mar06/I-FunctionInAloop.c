#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void count(int howManyTimes) {
  int counter;
  printf("Before while loop!\n");
  counter = 0; // initialization of the values
  while (counter <= howManyTimes) {  // checking condition
    printf("%d \r", counter);  // body of the loop
    counter++;  // changing condition (adding to counter)
  }
  printf("\nAfter while loop!\n");
}


int main(void) {
  int times, repeat, cnt;
  printf("How far should I count? ");
  scanf("%d", &times);
  printf("how many times should I repeat?");
  scanf("%d", &repeat);
  for (cnt = 0; cnt < repeat; cnt++) {
    count(times);
  }
  return 0;
}
