#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
  int stno;
};

int readStudentRecord(struct Student* stdPtr, FILE* fptr) {
  int res;
  res = fscanf(fptr, "%[^,],%lf,%d\n", stdPtr->name, &stdPtr->gpa, &stdPtr->stno) == 3;
  return res;
}
void printStudentRecord(const struct Student *stdPtr) {
  printf("%-20s | %3.1lf | %06d\n", stdPtr->name, stdPtr->gpa, stdPtr->stno);
}
void studentHeader(void) {
  printf("Student Name         | GPA | Std No.\n"
    "---------------------+-----+--------\n");
}
int main(void) {
  struct Student std;
  FILE* fptr = fopen("student.dat", "r");
  int i;
  studentHeader();
  while (readStudentRecord(&std, fptr)) {
    printStudentRecord(&std);
  }
  fclose(fptr);
  return 0;
}

