// 7. William Wingate runs a pizza-analysis service.
// For each pizza, he needs to record the following information:
  // - The name of the pizza company, which can consist of more than one word
  // - The diameter of the pizza
  // - The weight of the pizza
// Devise a structure that can hold this information
// and write a program that uses a structure variable of that type.
// The program should ask the user to enter each of the preceding items of information,
// and then the program should display that information.
// Use cin (or its methods) and cout.
#include <iostream>
#include <string>

using namespace std;

struct pizzaInfo {
  string pizzaCompany;
  double diameter;
  double weight;
};

int main() {
  pizzaInfo pizza;

  cout << "Enter a pizza company name: ";
  getline(cin, pizza.pizzaCompany);

  cout << "Enter a diameter of the pizza: ";
  cin >> pizza.diameter;

  cout << "Enter a weight of the pizza: ";
  cin >> pizza.weight;

  cout << "You can order this pizza by calling " << pizza.pizzaCompany
       << ". The pizza is " << pizza.diameter << " cm in diameter"
       << ", and weights " << pizza.weight << " grams." << endl;

  return 0;
}
