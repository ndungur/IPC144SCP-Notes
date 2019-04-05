#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void strCpy(char des[], const char src[]) {
  int i;
  for (i = 0; src[i] != NULL; i++) {
    des[i] = src[i];
  }
  des[i] = NULL;
}
int main(void) {
  char str[100];
  char name[41];
  int i;
  printf("Please enter your name: ");
  scanf("%[^\n]", str);
  strCpy(name, str);
  printf("the name enterd is: %s\n", name);
  return 0 ;
}
