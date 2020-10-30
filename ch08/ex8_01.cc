// 1. Write a function that normally takes one argument,
// the address of a string, and prints that string once.
// However, if a second, type int, argument is provided and is nonzero,
// the function should print the string a number of times equal
// to the number of times that function has been called at that point.
// (Note that the number of times the string
// is printed is not equal to the value of the second argument;
// it is equal to the number of times the function has been called.)
// Yes, this is a silly function, but it makes you use some of the techniques
// discussed in this chapter.
// Use the function in a simple program that demonstrates how the function works.
#include <iostream>
#include <string>

void repeatString(const std::string str, int n = 0);

int main() {
  std::cout << "Please, enter a string: ";
  std::string str;
  std::getline(std::cin, str);

  std::cout << "repeatString(str): ";
  repeatString(str);
  std::cout << "repeatString(str, 1): ";
  repeatString(str, 1);
  std::cout << "repeatString(str): ";
  repeatString(str);
  std::cout << "repeatString(str, 1): ";
  repeatString(str, 1);

  return 0;
}

void repeatString(const std::string str, int n) {
  static int count = 0;
  count++;
  
  if (!n) {
    std::cout << str << ' ';
  } else {
    for (int i = 0; i < count; i++)
      std::cout << str << ' ';
  }
  std::cout << std::endl;
}
