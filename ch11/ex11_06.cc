// 6) Rewrite the Stonewt class (Listings 11.16 and 11.17)
// so that it overloads all six relational operators.
// The operators should compare the pounds members and return a type bool value.
// Write a program that declares an array of six
// Stonewt objects and initializes the first three objects
// in the array declaration.
// Then it should use a loop to read in values used
// to set the remaining three array elements.
// Then it should report the smallest element,
// the largest element,
// and how many elements are greater or equal to 11 stone.
// (The simplest approach is to create
// a Stonewt object initialized to 11 stone
// and to compare the other objects with that object.)
#include <iostream>
#include <array>
#include "stonewt.h"

int main() {
  std::array<Stonewt, 6> arr { Stonewt(10), Stonewt(11), Stonewt(12) };

  for (int i = 3; i < arr.size(); i++) {
    std::cout << "Please, enter the lbs for new Stonewt object: ";
    int temp;
    std::cin >> temp;
    arr[i] = Stonewt(temp);
  }

  Stonewt maxValue = arr[0];
  Stonewt minValue = arr[0];
  Stonewt elevenStones = Stonewt(11, 0);
  int counter = 0;

  for (const auto& elem : arr) {
    if (elem > maxValue)
      maxValue = elem;

    if (elem < minValue)
      minValue = elem;

    if (elem >= elevenStones)
      counter++;
  }

  std::cout << "Max value is " << maxValue;
  std::cout << "Min value is " << minValue;
  std::cout << "Number of objects greater than or equal to 11 stones equals to "
            << counter << ".\n";

  return 0;
}
