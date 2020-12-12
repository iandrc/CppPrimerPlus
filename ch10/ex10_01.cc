// 1. Provide method definitions for the class described in Chapter Review Question 5
// and write a short program that illustrates all the features.
#include <iostream>
#include <string>
#include "bank_account.h"

int main() {
  BankAccount acc1{"John Smith", "23344556", 200.0};
  acc1.show();
  acc1.deposit(232.15);
  acc1.show();
  acc1.withdraw(100.0);
  acc1.show();

  BankAccount acc2 = BankAccount();
  acc2.show();
  acc2.deposit(101.23);
  acc2.show();
  acc2.withdraw(200.00);
  acc2.show();

  return 0;
}
