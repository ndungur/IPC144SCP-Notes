#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"

struct Employee {
  char fullname[21];
  int age;
  double salary;
  int empno;
};

void printEmployee(const struct Employee pointer E) {
  printf("Name: %s\nage: %d\nsalary %.2lf\nempno: %d\n",
    E->fullname, E->age, E->salary, E->empno);
  //E->age = 34; cause error
}

void getEmployee(struct Employee pointer eptr) {
  printf("Please enter name:");
  scanf("%20[^\n]", eptr->fullname);
  printf("Please enter age:");
  scanf("%d", &eptr->age);
  printf("Please enter Salary:");
  scanf("%lf", &eptr->salary);
  printf("Please enter Employee number:");
  scanf("%d", &eptr->empno);
}

int main(void)
{
  struct Employee Emp;
  getEmployee(addressOf Emp);
  printEmployee(addressOf Emp);

  return 0;
}





































