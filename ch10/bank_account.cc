#include <iostream>
#include <string>
#include "bank_account.h"

// constructors
BankAccount::BankAccount() {
  name = "No Name";
  accNumber = "00000000";
  accBalance = 0.0;
}

BankAccount::BankAccount(
  std::string depositorName,
  std::string accountNumber,
  double accountBalance
) {
  name = depositorName;
  accNumber = accountNumber;
  accBalance = accountBalance;
}

// destructors
BankAccount::~BankAccount() {}

// other methods
void BankAccount::deposit(double amount) {
  if (amount < 0) {
    std::cout << "You cannot deposit a negative amount. "
              << "Transaction is aborted.\n";
  }
  else
    accBalance += amount;
}

void BankAccount::withdraw(double amount) {
  if (amount > accBalance) {
    std::cout << "You cannot withdraw more than you have on your balance. "
              << "Transaction is aborted.\n";
  }
  else
    accBalance -= amount;
}

void BankAccount::show() const {
  std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
  std::cout.precision(2);

  std::cout << "\nDepositor's Name: " << name << '\n'
            << "Account Number: #" << accNumber << '\n'
            << "Account Balance: $" << accBalance << '\n';
}
