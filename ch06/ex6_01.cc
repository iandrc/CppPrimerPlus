// 1. Write a program that reads keyboard input to the @ symbol
// and that echoes the input except for digits,
// converting each uppercase character to lowercase, and vice versa.
// (Don’t forget the cctype family.)
#include <iostream>
#include <cctype>

int main() {
  std::cout << "Please, enter any sequence of characters <q to quit>:\n";
  char ch;

  while (std::cin.get(ch) && ch != '@') {
    if (isalpha(ch)) {
      if (islower(ch)) {
        ch = toupper(ch);
        std::cout << ch;
      }
      else {
        ch = tolower(ch);
        std::cout << ch;
      }
    }
  }
  std::cout << std::endl;

  return 0;
}
