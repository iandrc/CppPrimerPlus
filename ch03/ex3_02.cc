// 2. Write a short program that asks for your height in feet and inches
// and your weight in pounds. (Use three variables to store the information.)
// Have the program report your body mass index (BMI).
// To calculate the BMI, first convert your height in feet and inches
// to your height in inches (1 foot = 12 inches).
// Then convert your height in inches to your height in meters by multiplying by 0.0254.
// Then convert your weight in pounds into your mass in kilograms by dividing by 2.2.
// Finally, compute your BMI by dividing your mass in kilograms by the square of
// your height in meters.
// Use symbolic constants to represent the various conversion factors.
#include <iostream>

int main() {
  using namespace std;
  const int INCHES_IN_FOOT = 12;
  const float INCH_TO_METER = 0.0254;
  const float POUNDS_TO_KG = 2.2;

  cout << "Enter your height in feet and inches." << endl;

  cout << "Type feet first: ";
  double feet;
  cin >> feet;

  cout << "Now enter the inches: ";
  double inches;
  cin >> inches;

  double heightInches = feet * INCHES_IN_FOOT + inches;
  double heightMeters = heightInches * INCH_TO_METER;

  cout << "And now enter your weight in pounds: ";
  double weightPounds;
  cin >> weightPounds;

  double weightKilograms = weightPounds / POUNDS_TO_KG;

  double bmi = weightKilograms / (heightMeters * heightMeters);
  cout << "Your BMI is equal to " << bmi << "." << endl;

  return 0;
}
