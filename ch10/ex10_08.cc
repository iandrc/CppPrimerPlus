// 8. Design a List class to represent this abstract type.
// You should provide a list.h header file with the class declaration
// and a list.cpp file with the class method implementations.
// You should also create a short program that utilizes your design.
#include <iostream>
#include "list.h"

inline void doubleValue(Item& x) { x = 2 * x; }

int main() {
  std::cout << "The length of list limited to 10 in this example.\n";

  List intList{};

  intList.add(1);
  intList.add(3);
  intList.add(5);

  std::cout << "Size of the list = " << intList.size() << std::endl;
  intList.show();

  std::cout << "Doubled list items:\n";
  intList.visit(doubleValue);
  intList.show();

  return 0;
}
