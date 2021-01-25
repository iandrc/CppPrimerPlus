// stonewt.cc -- Stonewt methods
#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs) {
  stone = int (lbs) / LBS_PER_STN; // integer division
  pds_left = int (lbs) % LBS_PER_STN + lbs - int (lbs);
  pounds = lbs;
  form = FORM::STONE;
}

Stonewt::Stonewt(int stn, double lbs, Stonewt::FORM f) {
  stone = stn;
  pds_left = lbs;
  pounds = stn * LBS_PER_STN + lbs;
  form = f;
}

Stonewt::Stonewt() {
  stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {}

// conversion functions
Stonewt::operator int() const {
  return int (pounds + 0.5);
}

Stonewt::operator double() const {
  return pounds;
}

Stonewt Stonewt::operator+(double x) {
  return Stonewt(pounds + x);
}

Stonewt operator+(double x, Stonewt& s) {
  return s + x;
}

// Stonewt operator+(const Stonewt& s1, const Stonewt& s2) {
//   double pds = s1.pounds + s2.pounds;
//   Stonewt sum(pds);

//   return sum;
// }

Stonewt operator-(const Stonewt& s1, const Stonewt& s2) {
  double pds = s1.pounds - s2.pounds;
  Stonewt diff(pds);

  return diff;
}

Stonewt Stonewt::operator*(double x) {
  return Stonewt(pounds * x);
}

Stonewt operator*(double x, Stonewt& s) {
  return s * x;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st) {
  if (st.form == Stonewt::FORM::STONE)
    os << st.stone << " stone, " << st.pds_left << " pounds.\n";
  else if (st.form == Stonewt::FORM::POUNDS_INT)
    os << int (st.pounds) << " pounds.\n";
  else
    os << st.pounds << " pounds.\n";

  return os;
}
