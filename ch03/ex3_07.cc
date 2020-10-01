// 7. Write a program that asks you to enter an automobile gasoline consumption
// figure in the European style (liters per 100 kilometers)
// and converts to the U.S. style of miles per gallon.
// Note that in addition to using different units of measurement,
// the U.S. approach (distance / fuel)
// is the inverse of the European approach (fuel / distance).
// Note that 100 kilometers is 62.14 miles,
// and 1 gallon is 3.875 liters.
// Thus, 19 mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.
#include <iostream>

int main() {
  using namespace std;

  const double LITERS_IN_GALLON = 3.875;
  const double KILOMETERS_IN_MILE = 0.6214;

  double litersPer100km;
  cout << "Enter how many liters your car uses per 100 km: ";
  cin >> litersPer100km;

  double milesPerGallon = 100 * KILOMETERS_IN_MILE / litersPer100km * LITERS_IN_GALLON;
  cout << "It means your car goes approx. " << int (milesPerGallon)
       << " miles per gallon." << endl;

  return 0;
}
