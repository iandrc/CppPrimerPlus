// 2. Redo Listing 5.4 using a type array object instead of a built-in array
// and type long double instead of long long. Find the value of 100!
#include <iostream>

int main() {
  const int ARR_SIZE = 100;

  long double factorials[ARR_SIZE];

  factorials[1] = factorials[0] = 1L;

  for (int i = 2; i < ARR_SIZE; i++)
    factorials[i] = i * factorials[i - 1];

  for (int j = 0; j < ARR_SIZE; j++)
    std::cout << j << "! = " << factorials[j] << std::endl;

  return 0;
}
