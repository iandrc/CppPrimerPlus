// time1.cc -- implementing Time methods
#include "time1.h"

// constructors
Time::Time() {
  hours = minutes = 0;
}

Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}

void Time::addMin(int m) {
  minutes += m;
  hours = minutes / 60;
  minutes %= 60;
}

void Time::addHr(int h) {
  hours += h;
}

void Time::reset(int h, int m) {
  hours = h;
  minutes = m;
}

Time operator+(const Time& t1, const Time& t2) {
  Time sum;

  sum.minutes = t1.minutes + t2.minutes;
  sum.hours = t1.hours + t2.hours + sum.minutes / 60;
  sum.minutes %= 60;

  return sum;
}

Time operator-(const Time& t1, const Time& t2) {
  Time diff;
  int tot1, tot2;

  tot1 = t1.minutes + 60 * t1.hours;
  tot2 = t2.minutes + 60 * t2.hours;

  diff.hours = (tot1 - tot2) / 60;
  diff.minutes = (tot1 - tot2) % 60;

  return diff;
}

Time operator*(double mult, const Time& t) {
  Time result;
  long totalMinutes = t.hours * mult * 60 + t.minutes * mult;

  result.hours = totalMinutes / 60;
  result.minutes = totalMinutes % 60;

  return result;
}

Time operator*(const Time& t, double mult) {
  return mult * t;
}

std::ostream& operator<<(std::ostream& os, const Time& t) {
  os << t.hours << " hours, " << t.minutes << " minutes" << std::endl;

  return os;
}
