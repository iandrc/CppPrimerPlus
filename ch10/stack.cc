#include "stack.h"

// constructors
Stack::Stack() {
  top = 0;
}

// other methods
bool Stack::isempty() const {
  return top == 0;
}

bool Stack::isfull() const {
  return top == MAX;
}

bool Stack::push(const Item& item) {
  if (top < MAX) {
    std::cout << "Push Item: " << item.fullname << std::endl;
    items[top++] = item;

    return true;
  }
  else
    return false;
}

bool Stack::pop() {
  if (top > 0) {
    total += items[--top].payment;
    report_total();

    return true;
  }
  else
    return false;
}

void Stack::show() const {
  std::cout << "Top: " << top << std::endl;

  for (int i = 0; i < MAX; i++) {
    std::cout << "Item #" << i << ": "
              << items[i].fullname
              << " with $" << items[i].payment << std::endl;;
  }
}
