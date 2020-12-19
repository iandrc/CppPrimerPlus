// 5. Write a program that adds and removes customer structures from a stack,
// represented by a Stack class declaration.
// Each time a customer is removed, his or her payment should be added to a running total,
// and the running total should be reported.
// Note: You should be able to use the Stack class unaltered;
// just change the typedef declaration
// so that Item is type customer instead of unsigned long.
#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
  Stack stack = Stack();

  char ch;
  customer cust;

  std::cout << "Please enter A to add a customer,\n"
         << "P to process a customer, or Q to quit.\n";

  while (std::cin >> ch && toupper(ch) != 'q') {
    while (std::cin.get() != '\n')
      continue;

    if (!isalpha(ch)) {
      std::cout << '\a';
      continue;
    }

    switch(ch) {
      case 'A':
      case 'a': if (stack.isfull())
                  std::cout << "Stack is already full.\n";
                else {
                  std::cout << "Please, enter customer's name: ";
                  std::cin >> cust.fullname;
                  std::cout << "Please, enter customer's payment amount: ";
                  std::cin >> cust.payment;
                  stack.push(cust);
                }
                break;
      case 'P':
      case 'p': if (stack.isempty())
                  std::cout << "Stack is already empty.\n";
                else {
                  stack.pop();
                }
                break;
    }
    std::cout << "Please enter A to add a customer,\n"
         << "P to process a customer, or Q to quit.\n";
  }
  std::cout << "Bye.\n";

  return 0;
}
