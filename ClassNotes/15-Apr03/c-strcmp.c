#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[100];
  char str2[100];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Enter two C strings: ");
    scanf("%s %s", str1, str2);
    if (strcmp(str1, str2) > 0) { // means str1 > str 2
      printf("%s > %s", str1, str2);
    }
    if (strcmp(str1, str2) < 0) { // means str1 < str2
      printf("%s < %s", str1, str2);
    }
    if (strcmp(str1, str2) == 0) { // means str2 == str2
      printf("%s == %s", str1, str2);
    }
    printf("\n");
  }
  return 0 ;
}
