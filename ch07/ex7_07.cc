// 7. Redo Listing 7.7, modifying the three array-handling
// functions to each use two pointer parameters to represent a range.
// The fill_array() function, instead of returning
// the actual number of items read,
// should return a pointer to the location after the last location filled;
// the other functions can use this pointer as
// the second argument to identify the end of the data.
#include <iostream>

const int MAX_SIZE = 5;

double* fill_array(double* begin, double* end);
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);

int main() {
  double properties[MAX_SIZE];
  double* size = fill_array(properties, properties + MAX_SIZE);

  show_array(properties, size);

  std::cout << "Enter the revaluation factor: ";
  double factor;

  while (!(std::cin >> factor)) {
    std::cin.clear();

    while (std::cin.get() != '\n')
      continue;

    std::cout << "Bad input. Please enter a number: ";
  }

  revalue(factor, properties, size);
  show_array(properties, size);
  
  std::cout << "Done.\n";

  return 0;
}

double* fill_array(double* begin, double* end) {
  int i = 0;
  double temp = 0.0;
  double* pt;

  for (pt = begin; pt != end; pt++) {
    std::cout << "Enter value #" << (++i) << ": ";
    std::cin >> temp;

    if (!std::cin) {
      std::cin.clear();

      while (std::cin.get() != '\n')
        continue;
      std::cout << "Bad input; process terminated.\n";
      break;
    }
    else if (temp < 0)
      break;

    *pt = temp;
  }

  return pt;
}

void show_array(double* begin, double* end) {
  int i = 0;

  for (double* pt = begin; pt != end; pt++) {
    std::cout << "Value #" << (++i) << ": $";
    std::cout << *pt << std::endl;
  }
}

void revalue(double r, double* begin, double* end) {
  for (double* pt = begin; pt != end; pt++)
    *pt *= r;
}
