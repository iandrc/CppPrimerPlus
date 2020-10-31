// 7. Modify Listing 8.14 so that it uses
// two template functions called SumArray()
// to return the sum of the array contents instead of displaying the contents.
// The program now should report the total number of things
// and the sum of all the debts.
#include <iostream>

struct debts {
  char name[50];
  double amount;
};

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

int main() {
  int things[6] = {13, 31, 103, 301, 310, 130};
  struct debts mr_E[3] = {
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe", 1300.0},
    {"Iby Stout", 1800.0}
  };

  double* pd[3];

  // set pointers to the amount numbers of the structures in mr_E
  for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;

  std::cout << "Listing Mr. E's counts of things: ";
  // things is an array of int
  std::cout << SumArray(things, 6) << std::endl; // uses template A
  std::cout << "Listing Mr. E's debts: ";
  // pd is an array of pointers to double
  std::cout << SumArray(pd, 3) << std::endl; // uses template B (more specialized)

  return 0;
}

template <typename T>
T SumArray(T arr[], int n) {
  T sum = 0;

  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}

template <typename T>
T SumArray(T* arr[], int n) {
  T sum = 0;

  for (int i = 0; i < n; i++)
    sum += *arr[i];
  return sum;
}
