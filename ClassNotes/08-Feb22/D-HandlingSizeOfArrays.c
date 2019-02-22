
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prnInts(int nums[]) {
  int i = 0;
  while (nums[i] >= 0) {
    printf("%d ", nums[i]);
    i++;
  }
  putchar('\n');
}
int main(void) {
  int a[6] = { 10,20,30,40,50, -1 }; // assuming that I have only positive
  int b[4] = { 100, 200, 300, -1 };  // values
  prnInts(a);
  prnInts(b);

  return 0;
}