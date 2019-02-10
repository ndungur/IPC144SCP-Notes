#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void drawLine(int length);
void grade(int mark);
void mark(char grade) {
  if (grade == 'A') {
    printf("80 <= mark <= 100");
  }
  else if (grade == 'B') {
    printf("70 <= mark < 80");
  }
  else if (grade == 'C') {
    printf("60 <= mark < 70");
  }
  else if (grade == 'D') {
    printf("50 <= mark < 60");
  }
  else if (grade == 'F') {
    printf("mark < 50");
  }
  else {
    printf("Invalid Grade!");
  }

}
void MarkConverter(void);

int main(void) {
  int m;
  drawLine(50);
  int g;
  printf("Please enter your Grade: ");
  scanf("%c", &g);
  printf("Your mark is: ");
  mark(g);
  printf("\n");
  return 0;
}

void MarkConverter(void) {
  int m;
  printf("Please enter your mark: ");
  scanf("%d", &m);
  printf("Your grade is: ");
  grade(m);
  printf("\n");
}


void drawLine(int length) {
  int i;
  if (length > 70) {
    printf("Bad line length\n");
  }
  else {//otherwise
    for (i = 0; i < length; i++) {
      putchar('-');
    }
  }
  putchar('\n');
}

void grade(int mark) {
  if (mark < 0) {
    printf("Invalid mark");
  }
  else if (mark < 50) {
    printf("F");
  }
  else if (mark < 60) {
    printf("D");
  }
  else if (mark < 70) {
    printf("C");
  }
  else if (mark < 80) {
    printf("B");
  }
  else if (mark < 90) {
    printf("A");
  }
  else if (mark <= 100) {
    printf("A+");
  }
  else {  // if nothing matches
    printf("Invalid mark!");
  }
}
