// 4. Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4.
// In these variations you choose several numbers
// from one set and call them the field numbers.
// For example, you might select five numbers from the field of 1–47).
// You also pick a single number (called a mega number or a power ball, etc.)
// from a second range, such as 1–27.
// To win the grand prize, you have to guess all the picks correctly.
// The chance of winning is the product of
// the probability of picking all the field numbers times
// the probability of picking the mega number.
// For instance, the probability of winning the example described here
// is the product of the probability of
// picking 5 out of 47 correctly times
// the probability of picking 1 out of 27 correctly.
// Modify Listing 7.4 to calculate the probability of winning this kind of lottery.

// TODO: finalize
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
  double total, choices, totalPowerball, powerballChoices;
  std::cout << "Enter the total number of choices on the game card and\n"
               "the number of picks allowed:\n";

  while ((std::cin >> total >> choices) && choices <= total) {
    std::cout << "Enter the total number of choices on the powerball game card and\n"
		             "the number of picks allowed for the power ball:\n";

    if ((std::cin >> totalPowerball >> powerballChoices) && powerballChoices <= totalPowerball) {
      std::cout << "You have one chance in ";
      std::cout << probability(total, choices) * probability(totalPowerball, powerballChoices);
      std::cout << " of winning.\n";
      std::cout << "Next two numbers (q to quit): ";
    }
    else
      break;
  }
  std::cout << "Bye.\n";

  return 0;
}

// calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks) {
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;

  return result;
}
