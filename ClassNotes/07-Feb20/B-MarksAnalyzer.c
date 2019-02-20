#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int yes(void);
int getInt(void);
// to get student marks for a test
// find out the min and max
// print the results
void title(void);
int getNoOfMarks(void);
int main(void) {
  int noOfMarks;
  int max = 0;
  int min = 100;
  int mark;
  int cnt;
  title();
  
  noOfMarks = getNoOfMarks();

  printf("Enter %d marks:\n", noOfMarks);
  for (cnt = 0; cnt < noOfMarks; cnt++) {
    printf("%d: ", cnt+1);
    mark = getInt();
    if (mark > max) {
      max = mark;
    }
    if (mark < min) {
      min = mark;
    }
  }

  printf("In total of %d marks, highest mark was: %d, and lowest was: %d\n", 
    noOfMarks, max, min);

  return 0;
}

int getNoOfMarks(void) {
  int noOfMarks;
  printf("Please enter the number of the marks: ");
  noOfMarks = getInt();
  return noOfMarks;
}

void title(void) {
  printf("Test marks analyzer\n\n");
}
