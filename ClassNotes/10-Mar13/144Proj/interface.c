//https://github.com/Seneca-144100/IPC144SCP-Notes/
//ClassNotes/08-Feb22/myFuncs.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "interface.h"

// getInt recives an integer from the user and returns it
int getInt(void) {
  int value;
  char enterKey = 'x';
  int done = 0; // create a flag for job well done
  while (!done) {  // while not done keep asking user unitl it is done
    // get user entry
    scanf("%d%c", &value, &enterKey);
    if (enterKey != '\n') {  // something is wrong
      flushKeyboard();
      printf("Invalid Integer, retry: ");
    }
    else {  // all good
      done = 1;
    }
  }
  return value;
}

// write a funtion (called yes) that returns true if user enter Y or y, 
// and returns false if user enters N or n
// all other entries should generate an error message
int yes(void) {
  int res;
  char response;
  char enterKey;
  int done = 0;
  while (!done) {
    scanf("%c%c", &response, &enterKey);
    if (enterKey != '\n') { // user enterd more that one character
      flushKeyboard();
      printf("Only Y or N are acceptable: ");
    }
    else if (response == 'Y' || response == 'y') {
      res = 1; // returning true;
      done = 1;
    }
    else if (response == 'N' || response == 'n') {
      res = 0; // returning flase;
      done = 1;
    }
    else {
      printf("Only Y or N are acceptable: ");
    }
  }
  return res;
}



void flushKeyboard(void) {
  char ch;
  do {
    scanf("%c", &ch);
  } while (ch != '\n');
}
