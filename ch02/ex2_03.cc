/*
3. Write a C++ program that uses three user-defined functions
(counting main() as one) and produces the following output:
  Three blind mice
  Three blind mice
  See how they run
  See how they run
One function, called two times, should produce the first two lines,
and the remaining function, also called twice, should produce the remaining output.
*/

#include <iostream>

void threeBlindMice();
void seeHowTheyRun();

int main() {
  threeBlindMice();
  threeBlindMice();
  seeHowTheyRun();
  seeHowTheyRun();

  return 0;
}

void threeBlindMice() {
  using namespace std;

  cout << "Three blind mice" << endl;
}

void seeHowTheyRun() {
  using namespace std;

  cout << "See how they run" << endl;
}
