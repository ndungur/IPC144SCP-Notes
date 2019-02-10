#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void doSomething(void) {
  printf("I am doing something!\n");
}

void doSomethingNtimesAndAtleastOnce(int n) {
  int counter = 1;
  do {
    doSomething();
    //counter = counter + 1;
    counter++;
  } while (counter <= n);
}



void doSomethingNtimesUsingWhile(int n) {
  int counter = 0;
  while (counter < n) {
    counter++;
    doSomething();
  }
}
void doSomethingNtimesUsingFor(int n) {
  int counter;
  for (counter = 0; counter < n; doSomething()) {
    counter++
  }
}
void drawLine(int length) {
  int i;
  for (i = 0; i < length; i++) {
    putchar('-');
  }
  putchar('\n');
}

int main(void) {
  int counter;
  doSomethingNtimesUsingWhile(0);
  drawLine(50);
  doSomethingNtimesUsingFor(0);
  drawLine(60);
  doSomethingNtimesAndAtleastOnce(0);
  return 0;
}

