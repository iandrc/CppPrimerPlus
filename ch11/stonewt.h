// stonewt.h -- definition for the Stonewt type
#include <iostream>

#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
  public:
    enum class FORM { STONE, POUNDS_INT, POUNDS_DOUBLE };
  private:
    static const int LBS_PER_STN = 14; // pounds per stone
    int stone; // whole stones
    double pds_left; // fractional pounds when we calculated stones
    double pounds; // pounds
    FORM form;
  public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs, Stonewt::FORM f = FORM::STONE); // constructor for stone, lbs
    Stonewt(); // default constructor
    ~Stonewt();

    // conversion functions
    operator int() const;
    operator double() const;

    // operator+ overloading
    Stonewt operator+(double x);
    friend Stonewt operator+(double x, Stonewt& s);
    // friend Stonewt operator+(const Stonewt& s1, const Stonewt& s2);

    // operator- overloading
    friend Stonewt operator-(const Stonewt& s1, const Stonewt& s2);

    // operator* overloading
    Stonewt operator*(double x);
    friend Stonewt operator*(double x, Stonewt& s);

    friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};

#endif
