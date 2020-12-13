#include <iostream>
#include "sales.h"

namespace SALES {
  // constructors
  // default interactive constructor
  Sales::Sales() {
    fillSalesArrayWithZeros();

    double salesData[QUARTERS];

    for (int i = 0; i < QUARTERS; i++) {
      std::cout << "Please enter the sales value for quarter #" << i + 1 << ": ";
      std::cin >> salesData[i];
    }

    Sales sales = Sales(salesData, QUARTERS);
    *this = sales;
  }

  // non-interactive constructor
  Sales::Sales(const double arr[], int n) {
    fillSalesArrayWithZeros();

    for (int i = 0; i < n; i++)
      sales[i] = arr[i];

    setAverage(sales, QUARTERS);
    setMin(sales, QUARTERS);
    setMax(sales, QUARTERS);
  }

  // private methods
  void Sales::setAverage(const double arr[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++)
      sum += arr[i];

    average = sum / n;
  }

  void Sales::setMin(const double arr[], int n) {
    double currMin = arr[0];

    for (int i = 1; i < n; i++)
      if (arr[i] < currMin)
        currMin = arr[i];

    min = currMin;
  }

  void Sales::setMax(const double arr[], int n) {
    double currMax = arr[0];

    for (int i = 1; i < n; i++)
      if (arr[i] > currMax)
        currMax = arr[i];

    max = currMax;
  }

  void Sales::fillSalesArrayWithZeros() {
    for (int i = 0; i < QUARTERS; i++)
      sales[i] = 0;
  }

  // public methods
  // display all information
  void Sales::showSales() const {
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout.precision(2);
    std::cout << "Sales in each quarter." << std::endl;

    for (int i = 0; i < QUARTERS; i++) {
      std::cout << "Sales in quarter #" << i + 1 << ": "
                << sales[i] << std::endl;
    }
    std::cout << "Average sales = " << average << std::endl;
    std::cout << "Max sales = " << max << std::endl;
    std::cout << "Min sales = " << min << std::endl;
  }
}