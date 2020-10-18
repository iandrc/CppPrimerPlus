// 1. Write a program that repeatedly asks
// the user to enter pairs of numbers until at least one of the pair is 0.
// For each pair, the program should use a function to calculate
// the harmonic mean of the numbers.
// The function should return the answer to main(),
// which should report the result.
// The harmonic mean of the numbers is the inverse of the average
// of the inverses and can be calculated as follows:
//   harmonic mean = 2.0 × x × y / (x + y)
#include <iostream>

double harmonicMean(double x, double y);

int main() {
  std::cout << "Enter a pair of numbers (0 to quit): ";
  double x, y;

  while ((std::cin >> x >> y) && x != 0 && y != 0) {
    std::cout << "The harmonic mean of " << x << " and " << y;
    std::cout << " is equal to " << harmonicMean(x, y) << std::endl;

    std::cout << "Enter a pair of numbers (0 to quit): ";
  }
  std::cout << "Done.\n";

  return 0;
}

double harmonicMean(double x, double y) {
  return (2 * x * y) / (x + y);
}
