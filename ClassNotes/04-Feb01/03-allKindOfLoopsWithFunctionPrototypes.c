#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void doSomething(void);
void doSomethingNtimesAndAtleastOnce(int n);
void doSomethingNtimesUsingWhile(int n);
void doSomethingNtimesUsingFor(int n);
void drawLine(int length);



int main(void) {
  doSomethingNtimesUsingWhile(0);
  drawLine(50);
  doSomethingNtimesUsingFor(0);
  drawLine(60);
  doSomethingNtimesAndAtleastOnce(0);
  return 0;
}


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
  int counter = 1;
  while (counter <= n) {
    doSomething();
    //counter = counter + 1;
    counter++;
  }
}
void doSomethingNtimesUsingFor(int n) {
  int counter;
  for (counter = 0; counter < n; counter++) {
    doSomething();
  }
}
void drawLine(int length) {
  int i;
  for (i = 0; i < length; i++) {
    putchar('-');
  }
  putchar('\n');
}