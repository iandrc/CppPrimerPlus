// 8. Write a program that opens a text file,
// reads it character-by-character to the end of the file,
// and reports the number of characters in the file.
#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 50;

int main() {
  char filename[SIZE];
  std::ifstream file;

  std::cout << "Enter the name of file to use: ";
  std::cin.getline(filename, SIZE);
  file.open(filename);

  if (!file.is_open()) {
    std::cout << "Could not open the file " << filename << std::endl;
    std::cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }

  char ch;
  unsigned count = 0;

  while (file.get(ch) && file.good()) {
    ++count;
  }

  if (file.eof())
    std::cout << "End of file reached.\n";
  else if (file.fail())
    std::cout << "Input terminated by data mismatch.\n";
  else
    std::cout << "Input terminated for unknown reason.\n";

  file.close();

  if (count == 0)
    std::cout << "No data processed.\n";
  else
    std::cout << "Characters read: " << count << std::endl;

  return 0;
}
