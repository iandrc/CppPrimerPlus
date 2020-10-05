// 8. Do Programming Exercise 7 but use new to allocate a structure
// instead of declaring a structure variable.
// Also have the program request the pizza diameter before it requests
// the pizza company name.
#include <iostream>
#include <string>

using namespace std;

struct pizzaInfo {
  string pizzaCompany;
  double diameter;
  double weight;
};

int main() {
  pizzaInfo* pizza = new pizzaInfo;

  cout << "Enter a diameter of the pizza: ";
  (cin >> pizza->diameter).get();

  cout << "Enter a pizza company name: ";
  getline(cin, pizza->pizzaCompany);

  cout << "Enter a weight of the pizza: ";
  cin >> pizza->weight;

  cout << "You can order this pizza by calling " << pizza->pizzaCompany
       << ". The pizza is " << (*pizza).diameter << " cm in diameter"
       << ", and weights " << (*pizza).weight << " grams." << endl;

  delete pizza;

  return 0;
}
