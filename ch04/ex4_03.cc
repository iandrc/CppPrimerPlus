// 3. Write a program that asks the user to enter his or her
// first name and then last name,
// and that then constructs, stores,
// and displays a third string,
// consisting of the user’s last name followed by a comma, a space, and first name.
// Use char arrays and functions from the cstring header file.
  // A sample run could look like this:
  //   Enter your first name: Flip
  //   Enter your last name: Fleming
  //   Here’s the information in a single string: Fleming, Flip
#include <iostream>
#include <cstring>

using namespace std;

char* getFirstName();
char* getLastName();

int main() {
  char* firstName;
  firstName = getFirstName();

  char* lastName;
  lastName = getLastName();

  char* fullName;
  fullName = new char[strlen(firstName) + strlen(lastName) + 3];
  strcat(fullName, lastName);
  strcat(fullName, ", ");
  strcat(fullName, firstName);

  cout << strlen(fullName) << endl;

  cout << "Here’s the information in a single string: " << fullName << endl;

  delete [] firstName;
  delete [] lastName;
  delete [] fullName;

  return 0;
}

char* getFirstName() {
  char temp[80];

  cout << "Enter your first name: ";
  cin.getline(temp, 80);

  char* ptrToFirstName = new char[strlen(temp) + 1];
  strcpy(ptrToFirstName, temp);

  return ptrToFirstName;
}

char* getLastName() {
  char temp[80];

  cout << "Enter your last name: ";
  cin.getline(temp, 80);

  char* ptrToLastName = new char[strlen(temp) + 1];
  strcpy(ptrToLastName, temp);

  return ptrToLastName;
}
