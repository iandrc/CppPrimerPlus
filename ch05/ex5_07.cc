// 7. Design a structure called car that holds the following information about an automobile:
// its make, as a string in a character array or in a string object,
// and the year it was built, as an integer.
// Write a program that asks the user how many cars to catalog.
// The program should then use new to create a dynamic array of that many car structures.
// Next, it should prompt the user to input the make
// (which might consist of more than one word)
// and year information for each structure.
// Note that this requires some care because
// it alternates reading strings with numeric data (see Chapter 4).
// Finally, it should display the contents of each structure.
// A sample run should look something like the following:
//   How many cars do you wish to catalog? 2
//   Car #1:
//   Please enter the make: Hudson Hornet
//   Please enter the year made: 1952
//   Car #2:
//   Please enter the make: Kaiser
//   Please enter the year made: 1951
//   Here is your collection:
//   1952 Hudson Hornet
//   1951 Kaiser
#include <iostream>
#include <string>

struct car {
  std::string make;
  int year;
};

int main() {
  int catalogSize;
  std::cout << "How many cars do you wish to catalog? ";
  std::cin >> catalogSize;

  car* cars = new car [catalogSize];

  for (int i = 0; i < catalogSize; i++) {
    std::cout << "Car #" << (i + 1) << std::endl;
    std::cout << "Please enter the make: ";
    std::cin.get();
    std::getline(std::cin, cars[i].make);
    std::cout << "Please enter the year made: ";
    std::cin >> cars[i].year;
  }

  std::cout << "Here is your collection:" << std::endl;
  for (int j = 0; j < catalogSize; j++) {
    std::cout << cars[j].year << " " << cars[j].make << std::endl;
  }

  return 0;
}
