// golf.cc -- implementing golf.h

#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc) {
  strcpy(g.fullname, name);
  g.handicap = hc;
}

int setgolf(golf& g) {
  std::cout << "Please, enter the name (nothing to quit): ";
  std::cin.get(g.fullname, LEN);

  if (strlen(g.fullname) == 0) {
    std::cin.clear();
    std::cin.get();
    return 0;
  }

  std::cout << "Now enter the handicap: ";
  std::cin >> g.handicap;
  std::cin.get();

  return 1;
}

void handicap(golf& g, int hc) {
  g.handicap = hc;
}

void showgolf(const golf& g) {
  std::cout << "Name: " << g.fullname << std::endl;
  std::cout << "Handicap: " << g.handicap << std::endl;
}
