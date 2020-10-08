// 9. Write a program that matches the description of
// the program in Programming Exercise 8,
// but use a string class object instead of an array.
// Include the string header file and
// use a relational operator to make the comparison test.
#include <iostream>
#include <string>

int main() {
  std::cout << "Enter words (to stop, type the word done): ";
  std::string word;
  // std::cin.get();
  std::cin >> word;
  int count = 0;

  while (word != "done") {
    ++count;
    std::cin >> word;
  }
  std::cout << "You entered a total of " << count << " words.\n";

  return 0;
}
