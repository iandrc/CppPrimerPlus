#include <iostream>
#include "move.h"

// constructors
Move::Move(double a, double b) {
  x = a;
  y = b;
}

// other methods
void Move::showmove() const {
  std::cout << "x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move& m) const {
  double newX = this->x + m.x;
  double newY = this->y + m.y;

  Move move{newX, newY};

  return move;
}

void Move::reset(double a, double b) {
  x = a;
  y = b;
}