#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
  int stno;
};
void writeStudentRecord(const struct Student* stdptr,FILE* fptr) {
  fprintf(fptr, "%s,%.1lf,%d\n", stdptr->name, stdptr->gpa, stdptr->stno);
}
int main(void) {
  struct Student std[5] = {
    {"Bart Simpson",2.0,123456},
    {"Lisa Simpson",4.0,23456},
    {"Milhouse Van Houten",3.5,45321},
    {"Melson Muntz",2.1,432132},
    {"Ralph Wiggum",2.3,876543}
  };
  FILE* fptr = fopen("student.dat", "w");
  int i;
  for (i = 0; i < 5; i++) {
    writeStudentRecord(&std[i], fptr);
  }
  fclose(fptr);
  return 0;
}
