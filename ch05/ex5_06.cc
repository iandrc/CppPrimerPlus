// 6. Do Programming Exercise 5 but use a two-dimensional array
// to store input for 3 years of monthly sales.
// Report the total sales for each individual year and for the combined years.
#include <iostream>

int main() {
  const int MONTHS = 12;
  const int PERIOD = 3;

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

  const int years[PERIOD] = {
    2017,
    2018,
    2019
  };

  int sales[PERIOD][MONTHS];
  int totalForThreeYears = 0;

  for (int i = 0; i < PERIOD; i++) {
    int totalForThisYear = 0;
    for (int j = 0; j < MONTHS; j++) {
      std::cout << "Enter book sales for " << months[j] << " of " << years[i] << ": ";
      std::cin >> sales[i][j];
      totalForThisYear += sales[i][j];
      totalForThreeYears += sales[i][j];
    }
    std::cout << "Total sales for " << years[i] << " is equal to "
              << totalForThisYear << std::endl;
  }

  std::cout << "Total sales for " << PERIOD << " years is equal to "
            << totalForThreeYears << std::endl;

  return 0;
}
