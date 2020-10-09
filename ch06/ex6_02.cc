// 2. Write a program that reads up to 10 donation values
// into an array of double.
// (Or, if you prefer, use an array template object.)
// The program should terminate input on non-numeric input.
// It should report the average of the numbers and
// also report how many numbers in the array are larger than the average.
#include <iostream>
#include <array>

int main() {
  const int ARR_LENGTH = 10;

  std::cout << "Enter up to 10 donations values <q to quit>:\n";
  std::array<double, ARR_LENGTH> donations = {};

  int index = 0;
  double sum = 0.0;

  while (index < 10 && std::cin >> donations[index]) {
    sum += donations[index];
    ++index;
  }
  double average = sum / index;

  int largerThanAverage = 0;

  for (int i = 0; i < index; i++) {
    if (donations[i] > average) {
      ++largerThanAverage;
    }
  }

  std::cout << "Average donation is equal to $" << average << std::endl;
  std::cout << largerThanAverage
            << " donations were larger than the average one." << std::endl;

  return 0;
}
