// 7. Write a program that reads input a word at a time until a lone q is entered.
// The program should then report the number of words that began with vowels,
// the number that began with consonants,
// and the number that fit neither of those categories.
// One approach is to use isalpha() to discriminate
// between words beginning with letters and those
// that don’t and then use an if or switch statement to further
// identify those passing the isalpha() test that begin with vowels.
// A sample run might look like this:
//   Enter words (q to quit):
//   The 12 awesome oxen ambled quietly across 15 meters of lawn. q
//   5 words beginning with vowels
//   4 words beginning with consonants
//   2 others
#include <iostream>
#include <cstring>
#include <cctype>

char* readWord();

int main() {
  unsigned startsWithVowel = 0;
  unsigned startsWithConsonant = 0;
  unsigned otherWords = 0;

  std::cout << "Enter words (q to quit):\n";
  char* word;

  while ((word = readWord()) && strcmp(word, "q")) {
    if (isalpha(word[0])) {
      switch (word[0]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          ++startsWithVowel;
          break;
        default:
          ++startsWithConsonant;
          break;
      }
    } else {
      ++otherWords;
    }
  }

  delete [] word;

  std::cout << startsWithVowel << " words beginning with vowels\n";
  std::cout << startsWithConsonant << " words beginning with consonants\n";
  std::cout << otherWords << " others\n";

  return 0;
}

char* readWord() {
  const int MAX_LENGTH = 50;
  char temp[MAX_LENGTH];
  std::cin >> temp;

  char* word = new char[strlen(temp) + 1];
  strcpy(word, temp);

  return word;
}
