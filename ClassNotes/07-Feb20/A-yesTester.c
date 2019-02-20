#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int yes(void);
int main(void) {
  int done = 0;  // not done
  while (!done) {
    printf("Hello.....\n");
    printf("Would you like me to print another hello? (Y)es/(N)o: ");
    if (!yes()) {
      done = 1;
    }
  }
  printf("Goodbye!\n");
  return 0;
}