#ifndef INTERFACE_H__
#define INTERFACE_H__
int getInt(void);
int getIntLimited(int lowerLimit, int upperLimit);
double getDoubleLimited(double lowerLimit, double upperLimit);
void flushKeyboard(void);
int yes(void);
void welcome(void);
void printHeader(void);
void printFooter(double gTotal);
void pause(void);
double getDouble(void);

#endif