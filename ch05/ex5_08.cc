// 8. Write a program that uses an array of char and a loop
// to read one word at a time until the word done is entered.
// The program should then report the number of words entered (not counting done).
// A sample run could look like this:
// Enter words (to stop, type the word done):
//   anteater birthday category dumpster
//   envy finagle geometry done for sure
//   You entered a total of 7 words.
// You should include the cstring header file and use the strcmp()
// function to make the comparison test.
#include <iostream>
#include <cstring>

char* readWord();

int main() {
  char* word;
  std::cout << "Enter words (to stop, type the word done): ";
  word = readWord();
  int count = 0;

  while (strcmp(word, "done")) {
    ++count;
    delete [] word;
    word = readWord();
  }
  delete [] word;
  std::cout << "You entered a total of " << count << " words.\n";

  return 0;
}

char* readWord() {
  const int MAX_LENGTH = 512;
  char temp[MAX_LENGTH];
  std::cin >> temp;

  char* word = new char[strlen(temp) + 1];
  strcpy(word, temp);

  return word;
}
