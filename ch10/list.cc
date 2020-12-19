#include <iostream>
#include "list.h"

// constructors
List::List() {
  index = 0;
}

// other methods
void List::add(const Item& item) {
  if (index < MAX)
    items[index++] = item;
  else
    std::cout << "The list is full.\n";
}

bool List::isEmpty() const {
  return index == 0;
}

bool List::isFull() const {
  return index == MAX;
}

void List::show() const {
  if (isEmpty()) {
    std::cout << "Nothing to show. The list is empty.\n";
    return;
  }

  for (int i = 0; i < index; i++) {
    std::cout << "Item #" << i << " = " << items[i] << std::endl;
  }
}

void List::visit(void (*pf)(Item& item)) {
  for (int i = 0; i < index; i++)
		(*pf)(items[i]);
}
