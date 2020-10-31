// 5. Write a template function max5() that
// takes as its argument an array of five items of type T
// and returns the largest item in the array.
// (Because the size is fixed, it can be hardcoded
// into the loop instead of being passed as an argument.)
// Test it in a program that uses the function with an array of
// five int value and an array of five double values.
#include <iostream>

const int ARR_LENGTH = 5;

template<typename T>
T max5(T arr[]);

int main() {
  int intNums[ARR_LENGTH] = {1, 2, 3, 4, 5};
  std::cout << "The largest item in intNums = " << max5(intNums) << std::endl;

  double doubleNums[ARR_LENGTH] = {1.0, 2.0, 3.0, 5.5, 5.6};
  std::cout << "The largest item in doubleNums = " << max5(doubleNums) << std::endl;

  return 0;
}

template<typename T>
T max5(T arr[]) {
  T tempMax = arr[0];

  for (int i = 1; i < ARR_LENGTH; i++)
    if (arr[i] > tempMax)
      tempMax = arr[i];

  return tempMax;
}
