#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Task {
  char name[21];
  double duration;
};
void showTaskByValue(struct Task ts);
void showTask(const struct Task* tsPtr); //Read only(const) By Address
void getTask(struct Task *tsPtr);
int main() {
  struct Task T = { "Repair TV", 1.5 };
  //showTaskByValue(T);
  showTask(&T);
  getTask(&T);
  printf("You entered: \n");
  showTask(&T);
  return 0;
}
void getTask(struct Task *tsPtr) {
  printf("Task name: ");
  scanf("%20[^\n]", tsPtr->name);
  printf("Task duration: ");
  scanf("%lf", &tsPtr->duration);
}

void showTask(const struct Task* tsPtr) { //Read only(const) By Address
  //tsPtr->duration = 123.45;  // this will cause an error since tsPtr is const
  printf("%-20s | %3.1lf\n", tsPtr->name, tsPtr->duration);
}
void showTaskByValue(struct Task ts) {
  printf("%-20s | %3.1lf\n", ts.name, ts.duration);
}
