// 4. Write a three-file program based on the following namespace.
// The first file should be a header file that contains the namespace.
// The second file should be a source code file that
// extends the namespace to provide definitions
// for the three prototyped functions.
// The third file should declare two Sales objects.
// It should use the interactive version of setSales()
// to provide values for one structure and the non-interactive version of setSales()
// to provide values for the second structure.
// It should display the contents of both structures by using showSales().
#include <iostream>
#include "sales.h"

const int ARR_LEN = 3;

int main() {
  std::cout << "Getting sales for each quarter and calculating various values." << std::endl;
  std::cout << std::endl;

  std::cout << "The first company: " << std::endl;
  SALES::Sales struct1;
  SALES::setSales(struct1);
  SALES::showSales(struct1);

  std::cout << "The second company: " << std::endl;
  double arr[ARR_LEN] = { 123.12, 522.22, 455.42 };
	SALES::Sales struct2;
	SALES::setSales(struct2, arr, ARR_LEN);
	SALES::showSales(struct2);

  return 0;
}
