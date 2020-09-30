// 4. Write a program that asks the user to enter the number of seconds as an integer value
// (use type long, or, if available, long long)
// and that then displays the equivalent time in days, hours, minutes, and seconds.
// Use symbolic constants to represent the number of hours in the day,
// the number of minutes in an hour, and the number of seconds in a minute.
// The output should look like this:
//   Enter the number of seconds: 31600000
//   31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
#include <iostream>

int main() {
  using namespace std;

  const int HOURS_IN_DAY = 24;
  const int MINUTES_IN_HOUR = 60;
  const int SECONDS_IN_MINUTE = 60;

  long long inputSeconds;
  cout << "Enter the number of seconds: ";
  cin >> inputSeconds;

  long long minutes = inputSeconds / SECONDS_IN_MINUTE;
  long long seconds = inputSeconds % minutes;
  long long hours = minutes / MINUTES_IN_HOUR;
  minutes = minutes % hours;
  long long days = hours / HOURS_IN_DAY;
  hours = hours % days;

  cout << inputSeconds << " seconds = " << days << " days, "
       << hours << " hours, " << minutes << " minutes, "
       << seconds << " seconds" << endl;

  return 0;
}
