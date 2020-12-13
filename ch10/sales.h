#ifndef SALES_H_
#define SALES_H_

namespace SALES {
  class Sales {
    private:
      static const int QUARTERS = 4;
      double sales[QUARTERS];
      double average;
      double min;
      double max;
      void setAverage(const double arr[], int n);
      void setMin(const double arr[], int n);
      void setMax(const double arr[], int n);
      void fillSalesArrayWithZeros();
    public:
      Sales();
      Sales(const double arr[], int n = 4);
      void showSales() const;
  };
}

#endif
