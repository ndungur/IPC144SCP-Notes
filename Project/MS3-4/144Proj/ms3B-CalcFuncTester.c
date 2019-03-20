#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "item.h"

int main() {
  struct Item itm = { 123.45, 123, 1, 10, 2, "testing" };
  printf("the following two lines must match:\n");
  printf("totalAfterTax: %.2lf\n", totalAfterTax(itm));
  printf("totalAfterTax: 1394.98\n");
  printf("--------------------------------------------------\n");
  printf("the following two lines must match:\n");
  printf("isLowQuantity: %s\n", isLowQuantity(itm)?"Yes":"No");
  printf("isLowQuantity: No\n");
  printf("--------------------------------------------------\n");
  itm.minQuantity = 20;
  printf("the following two lines must match:\n");
  printf("isLowQuantity: %s\n", isLowQuantity(itm) ? "Yes" : "No");
  printf("isLowQuantity: Yes\n");
  printf("--------------------------------------------------\n");
  return 0;
}
