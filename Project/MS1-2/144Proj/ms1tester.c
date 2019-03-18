
// Final Project Milestone 1
// Student defined values tester
// Version 1.0
// Date	2019/03/11
// Author	Fardad Soleimanloo
// Description
// This program test the student implementation of the UI tools
//
/////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "interface.h"

int main(void) {
  int iVal;
  double dVal;
  int done = 0;
  welcome();
  // testing printTitle()
  printf("listing header and footer with grand total:\n");
  printHeader();
  //---------------------------------------------------------------


  // Testing printFooter()

  printFooter(1234.5678);
  printf("listing header and footer without grand total:\n");
  printHeader();
  printFooter(-1);
  //---------------------------------------------------------------

  // Testing Pause() and flushKeyboard()
  pause();
  //---------------------------------------------------------------

  while(!done){
    printf("Testing Data Entry functions:\n");
    printf("Testing getInt\n");
    printf("Enter an integer: ");
    iVal = getInt();
    printf("You entered: %d\n", iVal);
    //---------------------------------------------------------------


    printf("Testing GetIntLimited\n");
    printf("Enter an integer between 10 and 20: ");
    iVal = getIntLimited(10, 20);
    printf("Your entered %d\n", iVal);
    //---------------------------------------------------------------


    printf("Testing Get Double\n");
    printf("Enter a floating point number: ");
    dVal = getDouble();
    printf("You entered: %0.2lf\n", dVal);
    //---------------------------------------------------------------


    printf("Testing Get Double Limited\n");
    printf("Enter a floating point number between 10.00 and 20.00: ");
    dVal = getDoubleLimited(10.0, 20.0);
    printf("You entered: %0.2lf\n", dVal);
    //---------------------------------------------------------------
    printf("Test entries again? (Y/N): ");
    done = !yes();
  }
  printf("End of tester program for IO tools!\n");
  return 0;
}
