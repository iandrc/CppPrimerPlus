// 1. Write a program that requests the user to enter two integers.
// The program should then calculate and report
// the sum of all the integers between and including the two integers.
// At this point, assume that the smaller integer is entered first.
// For example, if the user enters 2 and 9,
// the program should report that the sum of all the integers from 2 through 9 is 44.
#include <iostream>

int main() {
  std::cout << "Enter the first integer: ";
  int smaller;
  std::cin >> smaller;

  std::cout << "Now enter the second integer: ";
  int larger;
  std::cin >> larger;

  int sum = 0;
  for (int i = smaller; i <= larger; i++) {
    sum += i;
  }

  std::cout << "The sum of numbers from " << smaller
            << " through " << larger << " is "
            << sum << ".\n";

  return 0;
}
