// 6. Create member function definitions and a program that exercises the class.
#include "move.h"

int main() {
  Move north{2};
  Move south{12, 3};
  north.showmove();

  north = north.add(south);
  north.showmove();

  north.reset(0, 6);
  north.showmove();

  return 0;
}
