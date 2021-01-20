// 3) Modify Listing 11.15 so that instead of reporting the results
// of a single trial for a particular target/step combination,
// it reports the highest, lowest, and average number of steps
// for N trials, where N is an integer entered by the user.

// Note. Compile with vect.cc
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "vect.h"

int main() {
  std::srand(std::time(0));
  std::vector<int> numberOfSteps {};

  double target;
  double dstep;
  std::cout << "Enter target distance (q to quit): ";
  std::cin >> target;
  std::cout << "Enter step length: ";
  std::cin >> dstep;

  int actualTrials = 0;
  int trials;
  std::cout << "Please, enter a number of randomwalker's trials: ";
  std::cin >> trials;

  while (actualTrials < trials) {
    // std::cout << "trial number: " << actualTrials + 1 << "\n";
    using VECTOR::Vector;

    double direction;
    unsigned long steps = 0;

    Vector step;
    Vector result(0.0, 0.0);

    while (result.magval() < target) {
      direction = std::rand() % 360;
      step.reset(dstep, direction, Vector::Mode::POL);
      result = result + step;
      steps++;
    }

    numberOfSteps.push_back(steps);

    steps = 0;
    result.reset(0.0, 0.0);

    actualTrials++;
  }
  
  int minSteps = numberOfSteps[0];
  int maxSteps = 0;
  int allSteps = 0;

  for (const int& step : numberOfSteps) {
    if (step < minSteps)
      minSteps = step;

    if (maxSteps < step)
      maxSteps = step;

    allSteps += step;
  }

  std::cout << "After " << actualTrials << " trials:\n";
  std::cout << "The highest number of steps = " << maxSteps << "\n";
  std::cout << "The lowest number of steps = " << minSteps << "\n";
  std::cout << "The average number of steps = " << allSteps / numberOfSteps.size() << "\n";

  std::cout << "That's all Folks. Bye.\n";
  std::cin.clear();

  while (std::cin.get() != '\n')
    continue;

  return 0;
}
