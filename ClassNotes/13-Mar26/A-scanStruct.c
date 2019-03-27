#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Employee {
  char fullname[21];
  int age;
  double salary;
  int empno;
};

void printEmployee(struct Employee E) {
  printf("Name: %s\nage: %d\nsalary %.2lf\nempno: %d\n",
    E.fullname, E.age, E.salary, E.empno);
}

struct Employee getEmployee() {
  struct Employee E;
  printf("Please enter name:");
  scanf("%20[^\n]", E.fullname);
  printf("Please enter age:");
  scanf("%d", &E.age);
  printf("Please enter Salary:");
  scanf("%lf", &E.salary);
  printf("Please enter Employee number:");
  scanf("%d", &E.empno);
  return E;
}

int main(void)
{
  struct Employee Emp;
  Emp = getEmployee();
  printEmployee(Emp);

  return 0;
}