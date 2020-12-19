#include <iostream>
#include <cstring>
#include "plorg.h"

// constructors
Plorg::Plorg(const char* plorgName, int contentmentIndex) {
  strcpy(name, plorgName);
  CI = contentmentIndex;
}

// other methods
void Plorg::show() const {
  std::cout << "Showing plorg's info: " << std::endl;
  std::cout << "Plorg's name: " << name << std::endl;
  std::cout << "Plorg's CI: " << CI << std::endl;
}

void Plorg::setCI(int contentmentIndex) {
  CI = contentmentIndex;
}
