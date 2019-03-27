#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct Employee {
  char fullname[21];
  int age;
  double salary;
  int empno;
};

void printEmployee(const struct Employee *E) {
  printf("Name: %s\nage: %d\nsalary %.2lf\nempno: %d\n",
    E->fullname, E->age, E->salary, E->empno);
  //E->age = 34; cause error
}

void getEmployee(struct Employee* eptr) {
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
  getEmployee(&Emp);
  printEmployee(&Emp);

  return 0;
}





































