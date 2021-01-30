// stonewt.h -- definition for the "user-defined" complex type
#include <iostream>

#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class complex {
  int realPart;
  int imaginaryPart;

  public:
    complex(int r);
    complex(int r, int im);
    complex();
    ~complex();

    // math operators overloading
    complex operator+(const complex& cn) const;
    complex operator-(const complex& cn) const;
    friend complex operator*(const complex& cn1, const complex& cn2);
    complex operator~() const;

    // IO operators overloading
    friend std::ostream& operator<<(std::ostream& os, const complex& cn);
    friend std::istream& operator>>(std::istream& is, complex& cn);
};

#endif
