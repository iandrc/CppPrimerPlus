// 6. Put together a program that keeps track of monetary
// contributions to the Society for the Preservation of Rightful Influence.
// It should ask the user to enter the number of contributors
// and then solicit the user to enter the name and contribution of each contributor.
// The information should be stored in a dynamically allocated array of structures.
// Each structure should have two members:
//   a character array (or else a string object) to store the name
//   and a double member to hold the amount of the contribution.
// After reading all the data, the program should display
// the names and amounts donated for all donors
// who contributed $10,000 or more.
// This list should be headed by the label Grand Patrons.
// After that,the program should list the remaining donors.
// That list should be headed Patrons.
// If there are no donors in one of the categories,
// the program should print the word “none.”
// Aside from displaying two categories, the program need do no sorting.
#include <iostream>
#include <string>

const int GRAND_PATRON_CONTRIBUTION = 10000;

struct contributor {
  std::string contributorName;
  double amount;
};

int main() {
  std::cout << "Please, enter a number of contributors: ";
  int numberOfContributors;
  std::cin >> numberOfContributors;

  contributor* contributors = new contributor [numberOfContributors];

  for (int i = 0; i < numberOfContributors; i++) {
    std::cout << "Please, enter contributor's name: ";
    std::cin.get();
    std::getline(std::cin, contributors[i].contributorName);
    std::cout << "Now enter the amount of their contribution: ";
    std::cin >> contributors[i].amount;
  }

  bool isEmpty = false;
  std::cout << "\nGrand Patrons" << std::endl;
  for (int j = 0; j < numberOfContributors; j++) {
    if (contributors[j].amount >= GRAND_PATRON_CONTRIBUTION) {
      std::cout << contributors[j].contributorName << " - $"
                << contributors[j].amount << std::endl;
      isEmpty = true;
      continue;
    }
  }

  if (!isEmpty)
    std::cout << "None" << std::endl;

  isEmpty = false;
  std::cout << "\nPatrons" << std::endl;
  for (int k = 0; k < numberOfContributors; k++) {
    if (!(contributors[k].amount >= GRAND_PATRON_CONTRIBUTION)) {
      std::cout << contributors[k].contributorName << " - $"
                << contributors[k].amount << std::endl;
      isEmpty = true;;
      continue;
    }
  }

  if (!isEmpty)
    std::cout << "None" << std::endl;

  delete [] contributors;

  return 0;
}
