// sales.cc -- implementing sales.h
#include <iostream>
#include "sales.h"

namespace SALES {
  // anonymous namespace to hide internal logic from the end user
  namespace {
    double average(const double arr[], int n) {
      double sum = 0;

      for (int i = 0; i < n; i++) {
        sum += arr[i];
      }

      return sum / n;
    }

    double min(const double arr[], int n) {
      double min = arr[0];

      for (int i = 1; i < n; i++)
        if (arr[i] < min)
          min = arr[i];

      return min;
    }

    double max(const double arr[], int n) {
      double max = arr[0];

      for (int i = 1; i < n; i++)
        if (arr[i] > max)
          max = arr[i];

      return max;
    }

    void fillArrayWithZeros(Sales& s) {
      for (int i = 0; i < QUARTERS; i++)
        s.sales[i] = 0;
    }
  }

  void setSales(Sales& s, const double arr[], int n) {
    fillArrayWithZeros(s);

    int i;
    for (i = 0; i < n; i++) {
      s.sales[i] = arr[i];
    }

    s.average = average(s.sales, QUARTERS);
    s.max = max(s.sales, QUARTERS);
    s.min = min(s.sales, QUARTERS);
  }

  void setSales(Sales& s) {
    for (int i = 0; i < QUARTERS; i++) {
      std::cout << "Please enter the sales value for quarter " << i + 1 << ": ";
      std::cin >> s.sales[i];
    }
    std::cout << std::endl;

    s.average = average(s.sales, QUARTERS);
    s.max = max(s.sales, QUARTERS);
    s.min = min(s.sales, QUARTERS);
  }

  void showSales(const Sales& s) {
    std::cout << "Sales in each quarter." << std::endl;

    for (int i = 0; i < QUARTERS; i++) {
      std::cout << "Sales in quarter " << i + 1 << ": "
                << s.sales[i] << std::endl;
    }
    std::cout << "Average sales = " << s.average << std::endl;
    std::cout << "Max sales = " << s.max << std::endl;
    std::cout << "Min sales = " << s.min << std::endl;
    std::cout << std::endl;
  }
}
