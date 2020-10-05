// 3. Write a program that asks the user to type in numbers.
// After each entry,the program should report
// the cumulative sum of the entries to date.
// The program should terminate when the user enters 0.
#include <iostream>

int main() {
  std::cout << "Please, give me some numbers; enter 0 to quit: ";
  int num;
  std::cin >> num;

  int sum = 0;
  while(num != 0) {
    sum += num;
    std::cout << "The sum of the entries so far equals to " << sum << std::endl;

    std::cout << "Enter some more numbers: ";
    std::cin >> num;
  }

  return 0;
}
