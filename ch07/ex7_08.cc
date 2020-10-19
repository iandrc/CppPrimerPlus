// 8. Redo Listing 7.15 without using the array class. Do two versions:

// - a. Use an ordinary array of const char* for the strings representing
// the season names, and use an ordinary array of double for the expenses.

// - b. Use an ordinary array of const char* for the strings representing
// the season names, and use a structure whose sole member
// is an ordinary array of double for the expenses.
// (This design is similar to the basic design of the array class.)

// TODO: finalize
#include <iostream>

const int SEASONS = 4;
const char* seasonNames[SEASONS] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses_t {
  double expenses[SEASONS];
};

// functions to modify array object
void fill(double arr[]);
void fill_strct(expenses_t* strct);
// functions that uses array object without modifying it
void show(const double arr[]);
void show_strct(const expenses_t* strct);

int main() {
  double expenses[SEASONS] = {};
  fill(expenses);
  show(expenses);

  expenses_t expenses_strct = {};
  fill_strct(&expenses_strct);
  show_strct(&expenses_strct);

  return 0;
}

void fill(double arr[]) {
  for (int i = 0; i < SEASONS; i++) {
    std::cout << "Enter " << seasonNames[i] << " expenses: ";
    std::cin >> arr[i];
  }
}

void fill_strct(expenses_t* strct) {
  for (int i = 0; i < SEASONS; i++) {
    std::cout << "\nEnter " << seasonNames[i] << " expenses: ";
    std::cin >> strct->expenses[i];
  }
}

void show(const double arr[]) {
  double total = 0.0;

  std::cout << "\nEXPENSES:\n";
  for (int i = 0; i < SEASONS; i++) {
    std::cout << seasonNames[i] << ": $" << arr[i] << std::endl;
    total += arr[i];
  }
  std::cout << "Total expenses: $" << total << std::endl;
}

void show_strct(const expenses_t* strct) {
  double total = 0.0;

  std::cout << "\nEXPENSES (struct):\n";
  for (int i = 0; i < SEASONS; i++) {
    std::cout << seasonNames[i] << ": $" << strct->expenses[i] << std::endl;
    total += strct->expenses[i];
  }
  std::cout << "Total expenses: $" << total << std::endl;
}
