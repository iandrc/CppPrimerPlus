#include <iostream>
#include <string>
#include <cstring>
#include "person.h"

// constructors
Person::Person(const std::string& ln, const char* fn) {
  lname = ln;
  strcpy(fname, fn);
}

void Person::Show() const {
  std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
  if (lname.size() > 0 && strlen(fname) > 0)
    std::cout << lname << ", " << fname << std::endl;
  else
    std::cout << fname << " " << lname << std::endl;
}
