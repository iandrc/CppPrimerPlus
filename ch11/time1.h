// mytime2.h -- Time class with operator overloading
#include <iostream>

#ifndef TIME1_H_
#define TIME1_H_

class Time {
  private:
    int hours;
    int minutes;
  public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);

    friend Time operator+(const Time& t1, const Time& t2);
    friend Time operator-(const Time& t1, const Time& t2);
    friend Time operator*(double mult, const Time& t);
    friend Time operator*(const Time& t, double mult);
    friend std::ostream& operator<<(std::ostream& os, const Time& t);
};

#endif
