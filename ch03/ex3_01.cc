// 1. Write a short program that asks for your height in integer inches and
// then converts your height to feet and inches.
// Have the program use the underscore character to indicate where to type the response.
// Also use a const symbolic constant to represent the conversion factor.
#include <iostream>

int main() {
  using namespace std;

  const int INCHES_IN_FOOT = 12;

  cout << "Please enter your height in inches: ___\b\b\b";
  int heightInches;
  cin >> heightInches;

  int feet = heightInches / INCHES_IN_FOOT;
  int inches = heightInches % INCHES_IN_FOOT;

  cout << "Your height in feet and inches is equal to ";
  cout << feet << " feet and " << inches << " inch(es)." << endl;

  return 0;
}
