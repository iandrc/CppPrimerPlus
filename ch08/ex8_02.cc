// 2. The CandyBar structure contains three members.
// The first member holds the brand name of a candy bar.
// The second member holds the weight (which may have a fractional part) of the candy bar,
// and the third member holds the number of calories (an integer value) in the candy bar.
// Write a program that uses a function that takes as arguments a reference to CandyBar,
// a pointer-to-char,a double, and an int
// and uses the last three values to
// set the corresponding members of the structure.
// The last three arguments should have default values of “Millennium Munch,” 2.85, and 350.
// Also the program should use a function that
// takes a reference to a CandyBar as an argument
// and displays the contents of the structure.
// Use const where appropriate.
#include <iostream>
#include <cstring>

const int LENGTH = 50;

struct CandyBar {
  char name[LENGTH];
  double weight;
  int calories;
};

void createCandyBar(
  CandyBar& bar,
  const char* name = "Millennium Munch",
  const double weight = 2.85,
  const int calories = 350
);
void displayCandyBar(const CandyBar& bar);

int main() {
  CandyBar snickers = {};
  createCandyBar(snickers, "Snickers", 47.5, 220);

  CandyBar milleniumMunch = {};
  createCandyBar(milleniumMunch);

  displayCandyBar(snickers);
  displayCandyBar(milleniumMunch);

  return 0;
}

void createCandyBar(
  CandyBar& bar,
  const char* name,
  const double weight,
  const int calories
) {
  strcpy(bar.name, name);
  bar.weight = weight;
  bar.calories = calories;
}

void displayCandyBar(const CandyBar& bar) {
  std::cout << "Showing the candy bar..." << std::endl;
  std::cout << "Name: " << bar.name << std::endl;
  std::cout << "Weight: " << bar.weight << std::endl;
  std::cout << "Calories: " << bar.calories << std::endl;
  std::cout << std::endl;
}
