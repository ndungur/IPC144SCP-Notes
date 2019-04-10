#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Name {
  char first[11];
  char last[16];
};

struct Task {
  char name[16];
  double duration;
};

struct Job {
  struct Name employee;
  struct Task tasks[2];
  double pay;
};
void flushKeyboard(void) {
  while (getchar() != '\n');
}
void showTaskByValue(struct Task ts);
void showTask(const struct Task* tsPtr); //Read only(const) By Address
void getTask(struct Task *tsPtr);
double showJob(const struct Job* jptr);
void showJobs(const struct Job jArr[], unsigned int num);
void getJob(struct Job* jptr);
int main() {       
  struct Job J = { {"Fred", "Soley"},{{"Wash Car", 2.5},{"Clean Garage", 3.5} }, 18.50};
  struct Job jobs[3] = {
    { {"Fred", "Soley"},{{"Wash Car", 2.5},{"Clean Garage", 3.5} }, 18.50},
    { {"John", "Black"},{{"Fix TV", 2},{"Repair Toaster", 3.4} }, 25.50},
    { {"Jack", "White"},{{"Drive Car", 4.6},{"Move Table", 2.1} }, 17.50}
  };
  showJobs(jobs, 3);
  getJob(&J);
  printf("You enterd:\n");
  showJob(&J);
  return 0;
}
void showJobs(const struct Job jArr[], unsigned int num) {
  unsigned int i;
  double TotalPay = 0;
  for (i = 0; i < num; i++) {
    TotalPay += showJob(&jArr[i]);
  }
  printf("Total payment is: %9.1lf\n", TotalPay);
}
double showJob(const struct Job* jptr) {
  printf("%-10s %-15s | %-15s %3.1lf | %-15s %3.1lf | %5.1lf | %7.1lf\n",
          jptr->employee.first, jptr->employee.last, // employee
            jptr->tasks[0].name , jptr->tasks[0].duration,  // tasks[0]
            jptr->tasks[1].name, jptr->tasks[1].duration,   // tasks[1]
          jptr->pay, (jptr->tasks[0].duration+ jptr->tasks[1].duration) *jptr->pay // payment
  );
  return (jptr->tasks[0].duration + jptr->tasks[1].duration) *jptr->pay;
}

void getJob(struct Job* jptr) {
  int i;
  printf("Employee first and last name: ");
  scanf("%s %[^\n]", jptr->employee.first, jptr->employee.last);
  flushKeyboard();
  for (i = 0; i < 2; i++) {
    getTask(&jptr->tasks[i]);
  }
  printf("Enter hourly Pay: ");
  scanf("%lf", &jptr->pay);
}

void getTask(struct Task *tsPtr) {
  printf("Task name: ");
  scanf("%15[^\n]", tsPtr->name);
  flushKeyboard();
  printf("Task duration: ");
  scanf("%lf", &tsPtr->duration);
  flushKeyboard();
}

void showTask(const struct Task* tsPtr) { //Read only(const) By Address
  //tsPtr->duration = 123.45;  // this will cause an error since tsPtr is const
  printf("%-20s | %3.1lf\n", tsPtr->name, tsPtr->duration);
}
void showTaskByValue(struct Task ts) {
  printf("%-20s | %3.1lf\n", ts.name, ts.duration);
}
