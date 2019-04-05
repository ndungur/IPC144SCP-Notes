#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100];
  char substr[100];
  char* whereFound;
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter two C strings: ");
    scanf("%s %s", str, substr);
    whereFound = strstr(str, substr);
    if (whereFound != NULL) {
      *whereFound = '*';
      printf("substr is here %s\n", whereFound);
    }
    else {
      printf("not found!\n");
    }
    printf("str: %s\n", str);
  }
  return 0 ;
}
