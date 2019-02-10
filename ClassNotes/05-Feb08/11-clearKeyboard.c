#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void clearKeyboard(void) {
  char ch;
  do{
    scanf("%c", &ch);
  }while (ch != '\n');
}


int main(void) {
  int num;
  char answer = 'n';
  while (answer != 'y') { // answer y if done
    printf("Please enter a number: ");
    scanf("%d", &num);
    clearKeyboard();
    printf("You enterd %d\n", num);
    printf("Are you done?(Y)es /(N)o: ");
    scanf("%c", &answer);
    clearKeyboard();
  }

  return;
}
