#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
void clearKeyboard(void);


// getInt recives an integer from the user and returns it
int getInt(void) {
  int value;
  char enterKey = 'x';
  int done = 0; // create a flag for job well done
  while (!done) {  // while not done keep asking user unitl it is done
    // get user entry
    scanf("%d%c", &value, &enterKey);
    if (enterKey != '\n') {  // something is wrong
      clearKeyboard();
      printf("Invalid Integer, retry: ");
    }
    else {  // all good
      done = 1;
    }

  }
  return value;
}

void clearKeyboard(void) {
  char ch;
  do {
    scanf("%c", &ch);
  } while (ch != '\n');
}