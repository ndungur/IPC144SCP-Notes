#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"

void addTen(int pointer iptr) {
  (targetOf iptr) += 10;
}



int main() {
  int i = 5;
  addTen(addressOf i);
  printf("%d\n", i);
  return 0;
}







































