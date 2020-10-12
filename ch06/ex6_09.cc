// 9. Do Programming Exercise 6 but modify it to get information from a file.
// The first item in the file should be the number of contributors,
// and the rest of the file should consist of pairs of lines,
// with the first line of each pair being a contributor’s
// name and the second line being a contribution.
// That is, the file should look like this:
//   4
//   Sam Stone
//   2000
//   Freida Flass
//   100500
//   Tammy Tubbs
//   5000
//   Rich Raptor
//   55000
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const int GRAND_PATRON_CONTRIBUTION = 10000;

struct contributor {
  std::string contributorName;
  double amount;
};

int main() {
  std::cout << "Enter the name of file to use: ";
  std::string filename;
  std::getline(std::cin, filename, '\n');

  std::ifstream file;
  file.open(filename);

  if (!file.is_open()) {
    std::cout << "Could not open the file " << filename << std::endl;
    std::cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }

  int numberOfContributors;
  (file >> numberOfContributors).get();

  contributor* contributors = new contributor [numberOfContributors];

  for (int i = 0; i < numberOfContributors; i++) {
    std::getline(file, (contributors + i)->contributorName, '\n');
    file >> (contributors + i)->amount;
    file.get();
  }

  file.close();

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
