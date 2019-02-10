#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void drawLine(int length);
void grade(int mark) {
  if (mark < 0) {
    printf("Invalid mark");
  }
  else {
    if (mark < 50) {
      printf("F");
    }
    else {
      if (mark < 60) {
        printf("D");
      }
      else {
        if (mark < 70) {
          printf("C");
        }
        else {
          if (mark < 80) {
            printf("B");
          }
          else {
            if (mark < 90) {
              printf("A");
            }
            else {
              if (mark <= 100) {
                printf("A+");
              }
              else {
                printf("Invalid mark!");
              }
            }
          }
        }
      }
    }
  }
}

int main(void) {
  int m;
  drawLine(5000);
  drawLine(50);
  printf("Please enter your mark: ");
  scanf("%d", &m);
  printf("Your grade is: ");
  grade(m);
  printf("\n");
  return 0;
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