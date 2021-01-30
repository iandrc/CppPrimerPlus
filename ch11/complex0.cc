// stonewt.cc -- complex methods

#include <iostream>
#include "complex0.h"

complex::complex(int r) {
  realPart = r;
  imaginaryPart = 0;
}

complex::complex(int r, int im) {
  realPart = r;
  imaginaryPart = im;
}

complex::complex() {
  realPart = imaginaryPart = 0;
}

complex::~complex() {}

complex complex::operator+(const complex& cn) const {
  return complex(this->realPart + cn.realPart, this->imaginaryPart + cn.imaginaryPart);
}

complex complex::operator-(const complex& cn) const {
  return complex(this->realPart - cn.realPart, this->imaginaryPart - cn.imaginaryPart);
}

complex operator*(const complex& cn1, const complex& cn2) {
  int rPart = cn1.realPart * cn2.realPart - cn1.imaginaryPart * cn2.imaginaryPart;
  int imPart = cn1.realPart * cn2.imaginaryPart + cn1.imaginaryPart * cn2.realPart;

  return complex(rPart, imPart);
}

complex complex::operator~() const {
  return complex(realPart, -imaginaryPart);
}

std::ostream& operator<<(std::ostream& os, const complex& cn) {
  os << "(" << cn.realPart << "," << cn.imaginaryPart << "i)";

  return os;
}

std::istream& operator>>(std::istream& is, complex& cn) {
  std::cout << "real: ";
  is >> cn.realPart;
  std::cout << "imaginary: ";
  is >> cn.imaginaryPart;

  return is;
}
