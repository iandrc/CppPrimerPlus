// 6. The CandyBar structure contains three members,
// as described in Programming Exercise 5.
// Write a program that creates an array of three CandyBar structures,
// initializes them to values of your choice,
// and then displays the contents of each structure.
#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
  string name;
  double weight;
  unsigned calories;
};

int main() {
  CandyBar candies[3] = {
    {"Kit Kat", 41.50, 200},
    {"Milka", 200.0, 350},
    {"M&Ms", 120, 198}
  };

  cout << candies[0].name << " is the most popular candy in Canada"
       << ", it weights " << candies[0].weight << "g, and provide you with "
       << candies[0].calories << " calories." << endl;

  cout << candies[1].name << " is the most popular candy in Germany"
       << ", it weights " << candies[1].weight << "g, and provide you with "
       << candies[1].calories << " calories." << endl;

  cout << candies[2].name << " is the most popular candy in the US"
      << ", it weights " << candies[2].weight << "g, and provide you with "
      << candies[2].calories << " calories." << endl;

  return 0;
}
