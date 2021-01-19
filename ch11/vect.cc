// vect.cc -- methods for Vector class
#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
  // compute degrees in 1 radian
  const double RAD_TO_DEG = 45.0 / atan(1.0); // about 57.2957795130823

  // private methods
  void Vector::set_x() {
    x = mag * cos(ang);
  }

  void Vector::set_y() {
    y = mag * sin(ang);
  }

  void Vector::set_mag() {
    mag = sqrt(x * x + y * y);
  }

  void Vector::set_ang() {
    if (x == 0.0 && y == 0.0)
      ang = 0.0;
    else
      ang = atan2(y, x);
  }

  // constructors
  Vector::Vector() {
    x = y = mag = ang = 0.0;
    mode = Mode::RECT;
  }

  // construct vector from rectangular coordinates if form is RECT
  // (the default) or else from polar coordinates if form is POLAR
  Vector::Vector(double n1, double n2, Mode form) {
    mode = form;

    if (form == Mode::RECT) {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    } else if (form == Mode::POL) {
      mag = n1;
      ang = n2 / RAD_TO_DEG;
      set_x();
      set_y();
    } else {
      cout << "Incorrect 3rd argument to Vector() -- ";
      cout << "vector set to 0\n";
      x = y = mag = ang = 0.0;
      mode = Mode::RECT;
    }
  }

  // destructors
  Vector::~Vector() {}

  // reset vector from rectangular coordinates if form is RECT
  // or from polar if form is POL
  void Vector::reset(double n1, double n2, Mode form) {
    mode = form;
    if (form == Mode::RECT) {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    } else if (form == Mode::POL) {
      mag = n1;
      ang = n2 / RAD_TO_DEG;
      set_x();
      set_y();
    } else {
      cout << "Incorrect 3rd argument to Vector() -- ";
      cout << "vector set to 0\n";
      x = y = mag = ang = 0.0;
      mode = Mode::RECT;
    }
  }

  // switch modes
  void Vector::polar_mode() {
    mode = Mode::POL;
  }

  void Vector::rect_mode() {
    mode = Mode::RECT;
  }

  // operator overloading
  // add two vectors
  Vector Vector::operator+(const Vector& b) const {
    return Vector(x + b.x, y + b.y);
  }

  // subtract Vector b from a
  Vector Vector::operator-(const Vector& b) const {
    return Vector(x - b.x, y - b.y);
  }

  // reverse sign of vector
  Vector Vector::operator-() const {
    return Vector(-x, -y);
  }

  // multiply Vector by n
  Vector Vector::operator*(double n) const {
    return Vector(x * n, y * n);
  }

  // friends
  // multiply n by Vector b
  Vector operator*(double n, const Vector& b) {
    return b * n;
  }

  // display rectangular coordinates if mode is RECT,
  // else display polar coordinates if mode is POL
  std::ostream& operator<<(std::ostream& os, const Vector& b) {
    if (b.mode == Vector::Mode::RECT) {
      os << "(x, y) = (" << b.x << ", " << b.y << ")" << "\n";
    } else if (b.mode == Vector::Mode::POL) {
      os << "(m, a) = (" << b.mag << ", " << b.ang * RAD_TO_DEG << ")" << "\n";
    } else {
      os << "Vector object mode is invalid.\n";
    }

    return os;
  }
}
