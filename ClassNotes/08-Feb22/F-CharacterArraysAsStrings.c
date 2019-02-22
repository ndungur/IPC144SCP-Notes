#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnStr(char str[]) {
  int i = 0;
  while (str[i] != 0) {
    putchar(str[i]);
    i++;
  }
}
// a character array that marks the end of data with a null
// can be used to carry text. 
// we call this a C style string.
// in short a string is defined to be a null terminated character array
int main(void) {
  char s[50] = "Fred"; //{ 'F', 'r', 'e', 'd' };
  prnStr(s);
  putchar('\n');
  printf("%s\n", s);
  return 0;
}