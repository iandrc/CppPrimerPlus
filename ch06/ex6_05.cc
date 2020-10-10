// 5. The Kingdom of Neutronia, where the unit of currency is the tvarp,
// has the following income tax code:
  // First 5,000 tvarps: 0% tax Next
  // 10,000 tvarps: 10% tax
  // Next 20,000 tvarps: 15% tax
  // Tvarps after 35,000: 20% tax
  // For example, someone earning 38,000 tvarps would owe
  // 5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20,
  // or 4,600 tvarps.
// Write a program that uses a loop to solicit
// incomes and to report tax owed.
// The loop should terminate when the user enters a negative number or non-numeric input.
#include <iostream>

const double FIRST_TIER_INCOME = 5000;
const double SECOND_TIER_INCOME = 10000;
const double THIRD_TIER_INCOME = 20000;
const double FOURTH_TIER_INCOME = 35000;

const double FIRST_TIER_TAX = 0.0; // up to 5k
const double SECOND_TIER_TAX = 0.1; // next 10k
const double THIRD_TIER_TAX = 0.15; // next 20k
const double FOURTH_TIER_TAX = 0.2; // after 35k

double calculateFourthTierTaxes(double tvarps);
double calculateThirdTierTaxes(double tvarps);
double calculateSecondTierTaxes(double tvarps);

int main() {
  std::cout << "Enter how many tvarps you earned last year." << std::endl;
  std::cout << "<Enter negative number or 'q' to quit>: ";

  double tvarps;
  std::cin >> tvarps;

  double taxes = 0;

  while (!(std::cin.fail()) && tvarps >= 0) {
    if (tvarps >= 35000)
      taxes = calculateFourthTierTaxes(tvarps);
    else if (tvarps >= 15000)
      taxes = calculateThirdTierTaxes(tvarps);
    else if (tvarps >= 5000)
      taxes = calculateSecondTierTaxes(tvarps);
    else
      taxes = 0;

    std::cout << "You have to pay " << taxes << " tvarps of taxes.\n";
    std::cout << "Enter another sum of income to calculate again.\n";
    std::cout << "<Enter negative number or 'q' to quit>: ";
    std::cin >> tvarps;
  }
  std::cout << "Goodbye.\n";

  return 0;
}

double calculateFourthTierTaxes(double tvarps) {
  double firstTierTaxSum = FIRST_TIER_INCOME * FIRST_TIER_TAX;
  double secondTierTaxSum = SECOND_TIER_INCOME * SECOND_TIER_TAX;
  double thirdTierTaxSum = THIRD_TIER_INCOME * THIRD_TIER_TAX;
  double fourthTierTaxSum = (tvarps - FOURTH_TIER_INCOME) * FOURTH_TIER_TAX;
  double totalTaxes = firstTierTaxSum + secondTierTaxSum + thirdTierTaxSum + fourthTierTaxSum;

  return totalTaxes;
}

double calculateThirdTierTaxes(double tvarps) {
  double firstTierTaxSum = FIRST_TIER_INCOME * FIRST_TIER_TAX;
  double secondTierTaxSum = SECOND_TIER_INCOME * SECOND_TIER_TAX;
  double thirdTierTaxSum = (tvarps - (FIRST_TIER_INCOME + SECOND_TIER_INCOME)) * THIRD_TIER_TAX;
  double totalTaxes = firstTierTaxSum + secondTierTaxSum + thirdTierTaxSum;

  return totalTaxes;
}

double calculateSecondTierTaxes(double tvarps) {
  double firstTierTaxSum = FIRST_TIER_INCOME * FIRST_TIER_TAX;
  double secondTierTaxSum = (tvarps - FIRST_TIER_INCOME) * SECOND_TIER_TAX;
  double totalTaxes = firstTierTaxSum + secondTierTaxSum;

  return totalTaxes;
}
