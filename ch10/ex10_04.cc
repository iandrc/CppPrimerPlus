// 4. Do Programming Exercise 4 from Chapter 9
// but convert the Sales structure and its associated
// functions to a class and its methods.
// Replace the setSales(Sales &, double [], int) function with a constructor.
// Implement the interactive setSales(Sales &) method by using the constructor.
// Keep the class within the namespace SALES.
#include <iostream>
#include "sales.h"

int main() {
  std::cout << "Getting sales for each quarter and calculating various values." << std::endl;
  std::cout << std::endl;

  std::cout << "The first company: " << std::endl;
  SALES::Sales company1 = SALES::Sales();
  company1.showSales();
  std::cout << std::endl;

  std::cout << "The second company: " << std::endl;
  const int ARR_LEN = 3;
  double arr[ARR_LEN] { 123.12, 522.22, 455.42 };
  SALES::Sales company2{ arr, ARR_LEN };
  company2.showSales();

  return 0;
}
