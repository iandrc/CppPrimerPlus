// 3. Do Programming Exercise 1 from Chapter 9 but replace
// the code shown there with an appropriate golf class declaration.
// Replace setgolf(golf &, const char*, int)
// with a constructor with the appropriate argument
// for providing initial values.
// Retain the interactive version of setgolf()
// but implement it by using the constructor.
// (For example, for the code for setgolf(),
// obtain the data, pass the data to the constructor
// to create a temporary object,
// and assign the temporary object to the invoking object, which is *this.)
#include <iostream>
#include "golf.h"

int main() {
  Golf ann("Ann Birdfree", 24);
  ann.showGolf();

  Golf andy{"Andy Freeman", 2};
  andy.showGolf();

  Golf ben;
  ben.setGolf();
  ben.showGolf();
  ben.setHandicap(20);
  ben.showGolf();

  return 0;
}
