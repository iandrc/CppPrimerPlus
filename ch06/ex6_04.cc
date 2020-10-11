// 4. When you join the Benevolent Order of Programmers,
// you can be known at BOP meetings by your real name,
// your job title, or your secret BOP name.
// Write a program that can list members by real name,
// by job title, by secret name, or by a member’s preference.
// Base the program on the following structure:
  //   // Benevolent Order of Programmers name structure
  //   struct bop {
  //     char fullname[strsize]; // real name
  //     char title[strsize]; // job title
  //     char bopname[strsize]; // secret BOP name
  //     int preference; // 0 = fullname, 1 = title, 2 = bopname
  //   };

// In the program, create a small array of such structures
// and initialize it to suitable values.
// Have the program run a loop that
// lets the user select from different alternatives:
  //   a. display by name        b. display by title
  //   c. display by bopname     d. display by preference
  //   q. quit

// Note that “display by preference” does not mean display the preference member;
// it means display the member corresponding to the preference number.
// For instance, if preference is 1,choice d would display the programmer’s job title.
// A sample run may look something like the following:
  // Benevolent Order of Programmers Report
  // a. display by name     b. display by title
  // c. display by bopname  d. display by preference
  // q. quit
  // Enter your choice: a
  // Wimp Macho
  // Raki Rhodes
  // Celia Laiter
  // Hoppy Hipman
  // Pat Hand
  // Next choice: d
  // Wimp Macho
  // Junior Programmer
  // MIPS
  // Analyst Trainee
  // LOOPY
  // Next choice: q
  // Bye!
#include <iostream>

const int SIZE = 50;
const int MEMBERS = 3;

struct bop {
  char fullname[SIZE]; // real name
  char title[SIZE]; // job title
  char bopname[SIZE]; // secret BOP name
  int preference; // 0 = fullname, 1 = title, 2 = bopname
};

void showChoices();
void showName(const bop* members);
void showTitle(const bop* members);
void showBopName(const bop* members);
void showByPreference(const bop* members);

int main() {
  bop orderMembers[MEMBERS] = {
    {"Wimp Macho", "Solution Architect", "Cap", 0},
    {"Raki Rhodes", "Software Engineer", "Weirdo", 1},
    {"Celia Laiter", "QA", "Vanilla Thunder", 2}
  };

  showChoices();
  char choice;
  std::cout << "Enter your choice: ";
  while (std::cin >> choice && choice != 'q') {
    switch (choice) {
      case 'a': showName(orderMembers);
                break;
      case 'b': showTitle(orderMembers);
                break;
      case 'c': showBopName(orderMembers);
                break;
      case 'd': showByPreference(orderMembers);
                break;
    }
    std::cout << "Next choice: ";
  }
  std::cout << "Bye!\n";

  return 0;
}

void showChoices() {
  std::cout << "Benevolent Order of Programmers Report" << std::endl;
  std::cout << "a. display by name     b. display by title\n"
               "c. display by bopname  d. display by preference\n"
               "q. quit\n";
}

void showName(const bop* members) {
  for (int i = 0; i < MEMBERS; i++) {
    std::cout << members[i].fullname << std::endl;
  }
}

void showTitle(const bop* members) {
  for (int i = 0; i < MEMBERS; i++) {
    std::cout << members[i].title << std::endl;
  }
}

void showBopName(const bop* members) {
  for (int i = 0; i < MEMBERS; i++) {
    std::cout << members[i].bopname << std::endl;
  }
}

void showByPreference(const bop* members) {
  for (int i = 0; i < MEMBERS; i++) {
    switch (members[i].preference) {
      case 0: std::cout << members[i].fullname << std::endl;
              break;
      case 1: std::cout << members[i].title << std::endl;
              break;
      case 2: std::cout << members[i].bopname << std::endl;
              break;
      default: break;
    }
  }
}
