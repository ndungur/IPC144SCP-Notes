#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int done = 0; // flag for things being done
  int num;
  while (!done) {
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("You enterd %d\n", num);
    printf("Are you done?(1 for yes and 0 for no): ");
    scanf("%d", &done);
  }
  printf("Goodbye!\n");
  return;
}
