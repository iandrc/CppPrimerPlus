// 1. Put together a multifile program based on this header.
// One file, named golf.cpp, should provide suitable function
// definitions to match the prototypes in the header file.
// A second file should contain main()
// and demonstrate all the features of the prototyped functions.
// For example, a loop should solicit input for
// an array of golf structures and terminate when
// the array is full or
// the user enters an empty string for the golfer’s name.
// The main() function should use only
// the prototyped functions to access the golf structures.
#include <iostream>
#include "golf.h"

const int ARR_LEN = 2;

int main() {
  golf ann;
  setgolf(ann, "Ann Birdfree", 24);
  showgolf(ann);

  golf andy, ben;
  golf golfers[ARR_LEN] = { andy, ben };

  std::cout << "Enter the info about " << ARR_LEN << " golfers: " << std::endl;

  int i;
  for (i = 0; i < ARR_LEN; i++) {
    if (setgolf(golfers[i]) == 0) {
      std::cout << "No name was entered.\n";
      std::cout << "Terminating input...\n";
      break;
    }
  }

  for (i = 0; i < ARR_LEN; i++)
    showgolf(golfers[i]);

  return 0;
}
