// 5. You sell the book C++ for Fools.
// Write a program that has you
// enter a year’s worth of monthly sales
// (in terms of number of books, not of money).
// The program should use a loop to prompt you by month,
// using an array of char* (or an array of string objects, if you prefer)
// initialized to the month strings and storing the input data in an array of int.
// Then, the program should find the sum of the array contents and report
// the total sales for the year.
#include <iostream>

int main() {
  const int MONTHS = 12;

  const char* months[MONTHS] = {
    "January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
  };

  int sales[MONTHS];
  int sum = 0;

  for (int i = 0; i < MONTHS; i++) {
      std::cout << "Enter book sales for " << months[i] << ": ";
      std::cin >> sales[i];
      sum += sales[i];
  }

  std::cout << "The total sales for the "
            << " year is equal to " << sum << std::endl;

  return 0;
}
