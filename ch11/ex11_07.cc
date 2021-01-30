// 7) A complex number has two parts: a real part and an imaginary part.
// One way to write an imaginary number is this: (3.0, 4.0).
// Here 3.0 is the real part and 4.0 is the imaginary part.
// Suppose a = (A,Bi) and c = (C,Di).
// Here are some complex operations:
// Addition: a + c = (A + C,(B + D)i)
// Subtraction:a - c = (A - C,(B - D)i)
// Multiplication: a × c = (A × C - B×D, (A×D + B×C)i)
// Conjugation: ~a = (A, - Bi)

// Note that you have to overload the << and >> operators.
// Standard C++ already has complex support — rather more extensive than
// in this example — in a complex header file,
// so use complex0.h to avoid conflicts. Use const whenever warranted.
// Define a complex class so that the following program can use it with correct
// results:
#include <iostream>
#include "complex0.h" // to avoid confusion with complex.h int main()

int main() {
  complex a(3.0, 4.0); // initialize to (3,4i)
  complex c;
  std::cout << "Enter a complex number (q to quit):\n";

  while (std::cin >> c) {
    std::cout << "c is " << c << '\n';
    std::cout << "complex conjugate is " << ~c << '\n';
    std::cout << "a is " << a << '\n';
    std::cout << "a + c is " << a + c << '\n';
    std::cout << "a - c is " << a - c << '\n';
    std::cout << "a * c is " << a * c << '\n';
    std::cout << "2 * c is " << 2 * c << '\n';
    std::cout << "Enter a complex number (q to quit):\n";
  }
  std::cout << "Done!\n";

  return 0;
}