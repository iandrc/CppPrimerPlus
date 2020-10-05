// 9. Do Programming Exercise 6, but instead of declaring
// an array of three CandyBar structures,
// use new to allocate the array dynamically.
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
  string name;
  double weight;
  unsigned calories;
};

int main() {
  CandyBar* candies = new CandyBar[3];

  // the first elem
  candies->name = "Kit Kat";
  candies->weight = 41.50;
  candies->calories = 200;

  // the second elem
  (candies + 1)->name = "Milka";
  (candies + 1)->weight = 200.0;
  (candies + 1)->calories = 350;

  // the last elem
  (candies + 2)->name = "M&Ms";
  (candies + 2)->weight = 120;
  (candies + 2)->calories = 198;

  // cout.setf(ios_base::fixed);
  cout << candies->name << " is the most popular candy in Canada"
       << ", it weights " << candies->weight << "g, and provide you with "
       << candies->calories << " calories." << endl;

  cout << candies[1].name << " is the most popular candy in Germany"
       << ", it weights " << candies[1].weight << "g, and provide you with "
       << candies[1].calories << " calories." << endl;

  cout << candies[2].name << " is the most popular candy in the US"
      << ", it weights " << candies[2].weight << "g, and provide you with "
      << candies[2].calories << " calories." << endl;

  delete [] candies;

  return 0;
}

