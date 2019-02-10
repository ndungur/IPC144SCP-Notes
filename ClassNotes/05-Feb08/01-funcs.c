#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sayHello(void) {
  printf("Hello!\n");
}

double getAnIntAndRetrunADouble(int val) {
  printf("I recieved %d from another function!\n", val);
  printf("And I will retrun 123.4567\n");
  return 123.4567;
}



int mod(int value, int div) {
  return value % div;
}

int main(void) {
  int myValue = 2345;
  int a = 15;
  int b = 6;
  int c;
  double rec;
  sayHello();
  rec = getAnIntAndRetrunADouble(myValue);
  printf("The long name function just returned %lf\n", rec);
  c = mod(a, b);
  printf("%d is %d %% %d\n", c, a, b);
  return 0;
}

