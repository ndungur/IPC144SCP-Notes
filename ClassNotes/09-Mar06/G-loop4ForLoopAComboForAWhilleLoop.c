#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter;
  printf("Before while loop!\n");
  counter = 0; // initialization of the values
  while (counter <= 50000) {  // checking condition
    printf("%d \r", counter);  // body of the loop
    counter++;  // changing condition (adding to counter)
  }
  printf("\nAfter while loop!\n");
  /*
 for(init ; condition ; change condition){
     body of the loop;
 }
 */
  printf("Before for loop!\n");
  for (counter = 0; counter <= 50000; counter++) {
    printf("%d \r", counter);
  }
  printf("\nAfter for loop!\n");

  return 0;
}
