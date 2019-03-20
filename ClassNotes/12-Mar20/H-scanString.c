#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
  char fullname[21];
  int age;
  double salary;
  int empno;
  printf("Enter Name: ");
  scanf("%20[^\n]", fullname);
  // fluschKeyboard();
  printf("hello >%s<\n", fullname);


  return 0;
}