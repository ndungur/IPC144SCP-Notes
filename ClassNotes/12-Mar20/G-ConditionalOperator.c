#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
  int val;
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  // if num > 100 , val = 1
  // if num <= 100 / val = -1;
 /* if (num > 100) {
    val = 1;
  }
  else {
    val = -1;
  }*/

  val = num > 100 ? 1 : -1;
  num > 100 ? printf("Greater than 100 \n") : printf("Lessthan or equal to 100\n");
  printf("val is %d: ", val);
  printf("the value is %s\n", val > 0 ? "Positive" : "Negative");
  return 0;
}