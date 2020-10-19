// 6. Write a program that uses the following functions:

// - Fill_array() takes as arguments the name of an array of double values
// and an array size.
// It prompts the user to enter double values to be entered in the array.
// It ceases taking input when the array is full or
// when the user enters non-numeric input, and it returns the actual number of entries.

// - Show_array() takes as arguments the name of an array of double values
// and an array size and displays the contents of the array.

// - Reverse_array() takes as arguments the name of an array of double values
// and an array size and reverses the order of the values stored in the array.

// The program should use these functions to fill an array,
// show the array, reverse the array,
// show the array, reverse all but the first and last elements of the array,
// and then show the array.
#include <iostream>

const int MAX_SIZE = 10;

int Fill_array(double nums[], int maxSize);
void Show_array(const double nums[], int size);
void Reverse_array(double nums[], int size);

int main() {
  double numbers[MAX_SIZE];
  int entries = Fill_array(numbers, MAX_SIZE);

  if (entries) {
    std::cout << "\nYou entered:\n";
    Show_array(numbers, entries);
    std::cout << "\nReverse the array.";
    Reverse_array(numbers, entries);
    std::cout << "\nAfter reverse:\n";
    Show_array(numbers, entries);
    std::cout << "\nReverse everything except the first and last element.";
    Reverse_array(numbers + 1, entries - 2);
    std::cout << "\nThe result of such a reversal:\n";
    Show_array(numbers, entries);
  }
  else
    std::cout << "Nothing to show and reverse. The array is empty. Bye!\n";

  return 0;
}

int Fill_array(double nums[], int maxSize) {
  std::cout << "Enter up to " << maxSize << " numbers." << std::endl;

  int count = 0;
  double num;

  std::cout << "Enter number #1 (q to quit): ";
  while (count < maxSize && std::cin >> num) {
    nums[count++] = num;

    if (count < maxSize)
      std::cout << "Enter number #" << count + 1 << " (q to quit): ";
  }

  return count;
}

void Show_array(const double nums[], int size) {
  for (int i = 0; i < size; i++)
    std::cout << nums[i] << " ";
  std::cout << std::endl;
}

void Reverse_array(double nums[], int size) {
  for (int start = 0, end = size - 1; start < end; start++, end--) {
    double temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
  }
}
