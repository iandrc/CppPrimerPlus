// vect.h -- Vector class with <<, mode state
#ifndef VECTOR2_H_
#define VECTOR2_H_

#include <iostream>

namespace VECTOR {
  class Vector {
    public:
      // RECT for rectangular, POL for polar modes
      enum class Mode { RECT, POL };

    private:
      double x; // horizontal value
      double y; // vertical value
      Mode mode; // RECT or POL
    public:
      Vector();
      Vector(double n1, double n2, Mode form = Mode::RECT);
      ~Vector();
      void reset(double n1, double n2, Mode form = Mode::RECT);
      double xval() const { return x; }
      double yval() const { return y; }
      double magval() const;
      double angval() const;
      // switch modes
      void polar_mode();
      void rect_mode();

      // operator overloading
      Vector operator+(const Vector& b) const;
      Vector operator-(const Vector& b) const;
      Vector operator-() const;
      Vector operator*(double n) const;

      // friends
      friend Vector operator*(double n, const Vector& b);
      friend std::ostream& operator<<(std::ostream& os, const Vector& b);
  };
}

#endif
