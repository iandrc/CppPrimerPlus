// 10. Write a program that requests the user to
// enter three times for the 40-yd dash (or 40-meter, if you prefer)
// and then displays the times and the average.
// Use an array object to hold the data.
// (Use a built-in array if array is not available.)
#include <iostream>
#include <array>

int main() {
  using namespace std;

  array<double, 3> dashes;

  cout << "Enter the time you ran the 40-meter dash the first time: ";
  cin >> dashes[0];

  cout << "Enter the time you ran the 40-meter dash the second time: ";
  cin >> dashes[1];

  cout << "Enter the time you ran the 40-meter dash the third time: ";
  cin >> dashes[2];

  cout << "At first you ran 40-meter dash for " << dashes[0] << " seconds." << endl;
  cout << "After some training you ran 40-meter dash for "
       << dashes[1] << " seconds." << endl;
  cout << "Finally, you ran 40-meter dash for "
       << dashes[2] << " seconds." << endl;

  double totalTime = dashes[0] + dashes[1] + dashes[2];
  double average = totalTime / dashes.size();

  cout << "Your average time to run 40-meter dash is "
       << average << " seconds." << endl;

  return 0;
}
