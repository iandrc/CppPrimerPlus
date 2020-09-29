/*
7. Write a program that asks the user to enter an hour value and a minute value.
The main() function should then pass these two values to a type void function
that displays the two values in the format shown in the following sample run:
  Enter the number of hours: 9
  Enter the number of minutes: 28
  Time: 9:28
*/

#include <iostream>

void composeTime(int, int);

int main() {
  using namespace std;

  int hours;
  int minutes;

  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  composeTime(hours, minutes);

  return 0;
}

void composeTime(int hours, int minutes) {
  using namespace std;

  cout << hours << ":" << minutes << endl;
}
