#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printEmployee(char fullname[], int age, double salary, int empno) {
  printf("Name: %s\nage: %d\nsalary %.2lf\nempno: %d\n",
    fullname, age, salary, empno);
}

int main(void)
{
  char fullname[21];
  int age;
  double salary;
  int empno;
  printf("Enter fullname, age, salary and empno, comma separated:\n");
  scanf("%20[^,],%d,%lf,%d", fullname, &age, &salary, &empno);
  printEmployee(fullname, age, salary, empno);
  return 0;
}