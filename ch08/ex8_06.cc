// 6. Write a template function maxn() that takes
// as its arguments an array of items of type T
// and an integer representing the number of elements
// in the array and that returns the largest item in the array.
// Test it in a program that uses the function template
// with an array of six int value and
// an array of four double values.
// The program should also include a specialization
// that takes an array of pointers-to-char
// as an argument and the number of pointers
// as a second argument and
// that returns the address of the longest string.
// If multiple strings are tied for having the longest length,
// the function should return the address of the first one tied for longest.
// Test the specialization with an array of five string pointers.
#include <iostream>
#include <cstring>

const int FOUR_ELEM_ARR = 4;
const int FIVE_ELEM_ARR = 5;
const int SIX_ELEM_ARR = 6;

template<typename T>
T maxn(T arr[], int arrLength);

template <>
char* maxn<char*>(char* arr[], int numberOfPointers);

int main() {
  int intNums[SIX_ELEM_ARR] = {-1, -2, -3, -4, -5, -6};
  std::cout << "The largest item in intNums = "
            << maxn(intNums, SIX_ELEM_ARR) << std::endl; // using template

  double doubleNums[FOUR_ELEM_ARR] = {-3.2, 0, 2.1, 2.12};
  std::cout << "The largest item in doubleNums = "
            << maxn(doubleNums, FOUR_ELEM_ARR) << std::endl; // using template

  char* strArr[FIVE_ELEM_ARR] = {"Infinity", "Zero", "One", "Two", "Three"};
  std::cout << "The address of the longest string = "
            << maxn(strArr, FIVE_ELEM_ARR) << std::endl; // using specialization

  return 0;
}

template<typename T>
T maxn(T arr[], int arrLength) {
  T tempMax = arr[0];

  for (int i = 1; i < arrLength; i++)
    if (arr[i] > tempMax)
      tempMax = arr[i];

  return tempMax;
}

template <>
char* maxn<char*>(char* arr[], int numberOfPointers) {
  char* longestStr = arr[0];

  for (int i = 1; i < numberOfPointers; i++)
    if (strlen(arr[i]) > strlen(longestStr))
      longestStr = arr[i];

  return longestStr;
}
