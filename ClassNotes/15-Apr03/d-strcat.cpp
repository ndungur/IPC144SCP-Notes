#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[100];
  char str2[100];
  printf("Enter two C strings: ");
  scanf("%s %s", str1, str2);
  strcat(str1, str2);       // str1 += str2
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  return 0 ;
}
