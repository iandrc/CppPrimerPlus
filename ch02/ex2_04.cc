/*
4. Write a program that asks the user to enter his or her age.
The program then should display the age in months:
  Enter your age: 29
  Your age in months is 384.
*/

#include <iostream>

int yearsToMonths(int);

int main() {
  using namespace std;

  int years;
  cout << "Enter your age: ";
  cin >> years;
  int months = yearsToMonths(years);
  cout << "Your age in months is " << months << endl;

  return 0;
}

int yearsToMonths(int years) {
  int months = years * 12;

  return months;
}
