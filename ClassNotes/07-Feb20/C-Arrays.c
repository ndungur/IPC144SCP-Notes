#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int yes(void);
int getInt(void);
// to get student marks for a test
// find out the min and max
// print the marks and the results
void title(void);
int getNoOfMarks(void);
void getMarks(int marksToRead[], int NumberOfMarks);

// int calculateAverage(int marks[], int NumberOfMarks);


int main(void) {
  int noOfMarks;
  int max = 0;
  int min = 100;
  int mark[100]; // mark[0] -> mark[99];
  int cnt;
  title();
  
  noOfMarks = getNoOfMarks();

  getMarks(mark, noOfMarks);

  for (cnt = 0; cnt < noOfMarks; cnt++) {
    if (mark[cnt] > max) {
      max = mark[cnt];
    }
    if (mark[cnt] < min) {
      min = mark[cnt];
    }
  }

  printf("Marks received from user:\n");
  for (cnt = 0; cnt < noOfMarks; cnt++) {
    printf("%d- %d\n", cnt+1 , mark[cnt]);
  }
  printf("-------------------------------------------\n");
  printf("Highest mark is: %d, and lowest is: %d\n", max, min);

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

void getMarks(int m[], int no) {
  int cnt;
  printf("Enter %d marks:\n", no);
  for (cnt = 0; cnt < no; cnt++) {
    printf("%d: ", cnt+1);
    m[cnt] = getInt();
  }
}