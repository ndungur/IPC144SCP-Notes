#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Employee {
  char fullname[21];
  int age;
  double salary;
  int empno;
};



int main(void)
{
  struct Employee E;
  printf("Enter fullname, age, salary and empno, comma separated:\n");
  scanf("%20[^,],%d,%lf,%d", E.fullname, &E.age, &E.salary, &E.empno);
  printf("Name: %s\nage: %d\nsalary %.2lf\nempno: %d\n", 
          E.fullname, E.age, E.salary, E.empno);
  return 0;
}