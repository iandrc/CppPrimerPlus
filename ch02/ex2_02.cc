/*
2. Write a C++ program that asks for a distance in furlongs
and converts it to yards. (One furlong is 220 yards.)
*/

#include <iostream>

double furlongsToYards(double);

int main() {
  using namespace std;

  double furlongs;
  cout << "Please, enter a distance in furlongs: ";
  cin >> furlongs;
  double yards = furlongsToYards(furlongs);
  cout << furlongs << " furlongs = " << yards << " yards." << endl;

  return 0;
}

double furlongsToYards(double furlongs) {
  double yards = furlongs * 220;

  return yards;
}
