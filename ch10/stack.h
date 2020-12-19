#include <iostream>

#ifndef STACK_H_
#define STACK_H_

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;

class Stack {
  private:
    static const int MAX = 3;
    Item items[MAX]; // holds stack items
    int total = 0; // total payments amount
    int top; // holds stack's top element
    void report_total() { std::cout << "Running Total = " << total << std::endl; }

  public:
    Stack();
    // TODO: finalize signatures and add implementations
    bool isempty() const;
    bool isfull() const;
    // push returns false if stack already is full, true otherwise
    bool push(const Item& item); // add item to stack
    // pop returns false if stack already is empty, true otherwise
    bool pop(); // pop item off the stack
    void show() const; // show the content of the stack
};

#endif
