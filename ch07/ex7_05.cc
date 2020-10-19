// 5. Define a recursive function that takes an integer argument
// and returns the factorial of that argument.
// Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0! defined as 1.
// In general, if n is greater than zero, n! = n * (n - 1)!.
// Test your function in a program that uses a loop
// to allow the user to enter various values for which the program reports the factorial.
#include <iostream>

int factorial(int n);

int main() {
  int number;

  std::cout << "Enter a positive integer ('q' or negative integer to quit): ";
  while (std::cin >> number && number >= 0) {
    std::cout << number << "! = "
              << factorial(number) << std::endl;
    std::cout << "Enter another integer ('q' or negative integer to quit): ";
  }
  std::cout << "Done.\n";

  return 0;
}

int factorial(int n) {
  if (n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}
