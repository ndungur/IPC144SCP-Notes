
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prnInts(int nums[], int size) {
  int i = 0;
  while (i< size) {
    printf("%d ", nums[i]);
    i++;
  }
  putchar('\n');
}
int main(void) {
  int a[6] = { 10,-20,30,-40,50 };
  int b[4] = { 100, -200, 300 }; 
  prnInts(a, 5);
  prnInts(b, 3);

  return 0;
}