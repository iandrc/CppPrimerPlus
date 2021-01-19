// vect.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR {
  class Vector {
    public:
      // RECT for rectangular, POL for polar modes
      enum class Mode { RECT, POL };

    private:
      double x; // horizontal value
      double y; // vertical value
      double mag; // length of vector
      double ang; // direction of vector in degrees
      Mode mode; // RECT or POL
      // private methods for setting values
      void set_x();
      void set_y();
      void set_mag();
      void set_ang();
    public:
      Vector();
      Vector(double n1, double n2, Mode form = Mode::RECT);
      ~Vector();
      void reset(double n1, double n2, Mode form = Mode::RECT);
      double xval() const { return x; }
      double yval() const { return y; }
      double magval() const { return mag; }
      double angval() const { return ang; }
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
