// 7. Write a Plorg class declaration
// (including data members and member function prototypes)
// that represents a plorg.
// Write the function definitions for the member functions.
// Write a short program that demonstrates all the features of the Plorg class.
#include "plorg.h"

int main() {
  Plorg betelgeusean1{};
  betelgeusean1.show();
  betelgeusean1.setCI(61);
  betelgeusean1.show();

  Plorg betelgeusean2("Gaze", 55);
  betelgeusean2.show();

  return 0;
}
