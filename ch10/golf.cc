#include <iostream>
#include <cstring>
#include "golf.h"

// constructors
Golf::Golf() {
  strcpy(fullname, "No Name");
  handicap = 0;
}

Golf::Golf(const char* name, int hc) {
  if ('\0' == name[0])
    return;
  else {
    strcpy(fullname, name);
    handicap = hc;
  }
}

// other methods
int Golf::setGolf() {
  char* name;
  int hc;

  std::cout << "Please, enter the name (nothing to quit): ";
  std::cin.get(name, LEN);

  if ((name)[0] == '\0') {
    std::cin.clear(); // clear error flags
    std::cin.get(); // discard newline character
    return 0;
  } else {
    while (std::cin.get() != '\n')
      continue;

    std::cout << "Now enter the handicap: ";

    while (!(std::cin >> hc)) {
      std::cin.clear();

      while (std::cin.get() != '\n')
        continue;

      std::cout << "Try again: ";
    }
  }
  std::cin.get(); // discard newline character

  // create a temporary object,
  // assign the temporary object to the invoking object
  Golf player(name, hc);
  *this = player;

  return 1;
}

void Golf::setHandicap(int hc) {
  if (handicap < 0) {
    std::cout << "Handicap cannot be negative. Aborting.\n";
  }
  else
    handicap = hc;
}

void Golf::showGolf() const {
  std::cout << "Player's name: " << fullname << std::endl;
  std::cout << "Player's handicap: " << handicap << std::endl;
}
