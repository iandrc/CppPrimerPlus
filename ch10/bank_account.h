#include <string>

#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

class BankAccount {
  private:
    std::string name;
    std::string accNumber;
    double accBalance;

  public:
    BankAccount();
    BankAccount(std::string depositorName, std::string accountNumber, double accountBalance = 0.0);
    ~BankAccount();
    void deposit(double amount);
    void withdraw(double amount);
    void show() const;
};

#endif