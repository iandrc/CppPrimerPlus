// 4) Rewrite the final Time class example (Listings 11.10, 11.11, and 11.12)
// so that all the overloaded operators are implemented using friend functions.
#include <iostream>
#include "time1.h"

int main() {
  Time weeding(4, 35);
  Time waxing(2, 47);
  Time total;
  Time diff;
  Time adjusted;

  std::cout << "Weeding time = ";
  std::cout << weeding;

  std::cout << "Waxing time = ";
  std::cout << waxing;

  std::cout << "Total work time = ";
  total = weeding + waxing;
  std::cout << total;

  std::cout << "Weeding time - Waxing time = ";
  diff = weeding - waxing;
  std::cout << diff;

  std::cout << "Adjusted work time = ";
  adjusted = 1.5 * total;
  // adjusted = total * 1.5; // also correct
  std::cout << adjusted;

  return 0;
}
