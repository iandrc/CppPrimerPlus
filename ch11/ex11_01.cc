// 1) Modify Listing 11.15 so that it writes the successive locations of the
// random walker into a file.
// Label each position with the step number.
// Also have the program write the initial conditions (target distance and step size)
// and the summarized results to the file.

// Note. Compile with vect.cc
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main() {
  using VECTOR::Vector;

  std::srand(std::time(0));

  double direction;
  unsigned long steps = 0;
  double target;
  double dstep;

  Vector step;
  Vector result(0.0, 0.0);

  std::cout << "Enter target distance (q to quit): ";
  while (std::cin >> target) {
    std::cout << "Enter step length: ";
    if (!(std::cin >> dstep))
      break;

    const char* filename = "steps.txt";
    std::ofstream stepsFile;
    stepsFile.open(filename);

    if (!stepsFile.is_open()) {
      std::cout << "Can't open " << filename << ". Bye.\n";
      exit(EXIT_FAILURE);
    }

    stepsFile << "Target distance: " << target << ", Step Size: " << dstep << "\n";

    while (result.magval() < target) {
      direction = std::rand() % 360;
      step.reset(dstep, direction, Vector::Mode::POL);
      result = result + step;
      stepsFile << steps << ": ";
      stepsFile << result;
      steps++;
    }

    stepsFile << "After " << steps << " steps, the subject "
      "has the following location:\n";
    stepsFile << result;
    result.polar_mode();
    stepsFile << "or\n" << result;
    stepsFile << "Average outward distance per step = "
              << result.magval() / steps << "\n";

    stepsFile.close();

    steps = 0;
    result.reset(0.0, 0.0);
    std::cout << "The results was saved to \"steps.txt\" file.\n";
    std::cout << "Enter target distance (q to quit): ";
  }

  std::cout << "Bye.\n";
  std::cin.clear();

  while (std::cin.get() != '\n')
    continue;

  return 0;
}
