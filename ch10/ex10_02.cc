// 2. Write a program that completes the implementation
// by providing code for the undefined methods.
// The program in which you use the class should also use
// the three possible constructor calls
// (no arguments, one argument, and two arguments) and the two display methods.
#include <iostream>
#include "person.h"

int main() {
  Person one; // use default constructor
  Person two("Smythecraft"); // use #2 with one default argument
  Person three("Dimwiddy", "Sam"); // use #2, no defaults

  // casual name form
  one.Show();
  two.Show();
  three.Show();

  // formal name form
  one.FormalShow();
  two.FormalShow();
  three.FormalShow();

  return 0;
}
