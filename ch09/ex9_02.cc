// 2. Redo Listing 9.9, replacing the character array with a string object.
// The program should no longer have to check whether
// the input string fits, and it can compare the input string
// to "" to check for an empty line.
#include <iostream>
#include <string>

// function prototypes
void strcount(const std::string str);

int main() {
  std::string input;
  char next;

  std::cout << "Enter a line:\n";
  std::getline(std::cin, input);

  while (input != "") {
    strcount(input);
    std::cout << "Enter next line (empty line to quit):\n";
    std::getline(std::cin, input);
  }
  std::cout << "Bye.\n";

  return 0;
}

void strcount(const std::string str) {
  static int total = 0; // static local variable
  int count = 0; // automatic global variable

  std::cout << "\"" << str << "\" contains ";
  count = str.size();
  total += count;
  std::cout << count << " characters\n";
  std::cout << total << " characters total\n";
}

