#include <stdio.h>
int main(void) {
  char arr[40];
  int i;
  for (i = 0; i < 20; i++) {
    arr[i] = 'A' + i;
  }
  arr[i] = NULL;   // this makes the arr array of character as string, because it makes is null terminated
                   // string is a null terminated array of characters.
  printf("%s\n", arr);
  return 0 ;
}
