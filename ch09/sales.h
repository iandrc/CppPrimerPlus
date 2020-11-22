// sales.h -- for ex9_04.cc
#ifndef _SALES_H_
#define _SALES_H_

namespace SALES {
  const int QUARTERS = 4;

  struct Sales {
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  };

  // copies the lesser of 4 or n items from the array arr
  // to the sales member of s and computes and stores the
  // average, maximum, and minimum values of the entered items;
  // remaining elements of sales, if any, set to 0
  void setSales(Sales& s, const double arr[], int n);
  // gathers sales for 4 quarters interactively, stores them
  // in the sales member of s and computes and stores the
  // average, maximum, and minimum values
  void setSales(Sales& s);
  // display all information in structure s
  void showSales(const Sales& s);
}

#endif
