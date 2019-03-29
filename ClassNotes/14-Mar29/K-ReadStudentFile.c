#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
  int stno;
};

int main(void) {
  struct Student std;
  FILE* fptr = fopen("student.dat", "r");
  int i;
  while (fscanf(fptr, "%[^,],%lf,%d\n", std.name, &std.gpa, &std.stno)  == 3) {
    printf("name: %-20s gpa: %3.1lf stno: %06d\n", std.name, std.gpa, std.stno);
  }
  fclose(fptr);
  return 0;
}

