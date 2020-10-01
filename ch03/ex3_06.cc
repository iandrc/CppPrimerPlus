// 6. Write a program that asks how many miles you have driven
// and how many gallons of gasoline you have used and
// then reports the miles per gallon your car has gotten.
// Or, if you prefer, the program can request distance in kilometers and petrol in liters
// and then report the result European style, in liters per 100 kilometers.
#include <iostream>

int main() {
  using namespace std;

  double distanceMiles, gasConsumption;
  cout << "Enter how many miles have you driven: ";
  cin >> distanceMiles;
  cout << "Now, enter how many gallon(s) of gas have been used: ";
  cin >> gasConsumption;

  double milesPerGallon = distanceMiles / gasConsumption;
  
  cout << "Your car rode " << milesPerGallon << " miles per gallon" << endl;

  return 0;
}
