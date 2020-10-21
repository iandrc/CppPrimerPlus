// 10. Design a function calculate() that takes
// two type double values and
// a pointer to a function that takes two double arguments
// and returns a double.
// The calculate() function should also be type double,
// and it should return the value that the
// pointed-to function calculates,
// using the double arguments to calculate().
// For example, suppose you have this definition for the add() function:
//   double add(double x, double y) {
//     return x + y;
//   }
// Then, the function call in the following would cause calculate()
// to pass the values 2.5 and 10.4 to the add()
// function and then return the add() return value (12.9):
//   double q = calculate(2.5, 10.4, add);
// Use these functions and at least one additional
// function in the add() mold in a program.
// The program should use a loop that allows
// the user to enter pairs of numbers.
// For each pair, use calculate() to invoke add()
// and at least one other function.
// If you are feeling adventurous, try creating an array of pointers
// to add()-style functions and
// use a loop to successively apply calculate()
// to a series of functions by using these pointers.
// Hint: Here’s how to declare such an array of three pointers:
//   double (*pf[3])(double, double);
// You can initialize such an array by using the usual array
// initialization syntax and function names as addresses.
#include <iostream>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

typedef double (*func)(double x, double y);

double calculate(double x, double y, func f);

int main() {
  const int NUM = 4;
  func functions[NUM] = {add, subtract, multiply, divide};

  std::cout << "Enter two numbers (q to quit): ";
  double x, y;
  while (std::cin >> x >> y && y > 0) {
    for (int i = 0; i < NUM; i++) {
      std::cout << calculate(x, y, functions[i]) << std::endl;
    }
    std::cout << "Enter another two numbers (q to quit): ";
  }

  return 0;
}

double add(double x, double y) {
  std::cout << "The result of addition: ";
  return x + y;
}

double subtract(double x, double y) {
  std::cout << "The result of subtraction: ";
  return x - y;
}

double multiply(double x, double y) {
  std::cout << "The result of multiplication: ";
  return x * y;
}

double divide(double x, double y) {
  std::cout << "The result of division: ";
  return x / y;
}

double calculate(double x, double y, func f) {
  return f(x, y);
}
