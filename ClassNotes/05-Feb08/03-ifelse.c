#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void drawLine(int length);



int main(void) {
  drawLine(5000);
  drawLine(50);
  return 0;
}
void drawLine(int length) {
  int i;
  if (length > 70) {
    printf("Bad line length\n");
  }
  else {//otherwise
    for (i = 0; i < length; i++) {
      putchar('-');
    }
  }
  putchar('\n');
}