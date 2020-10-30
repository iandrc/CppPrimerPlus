// 4. Complete this skeleton by providing
// the described functions and prototypes.
// Note that there should be two show() functions,
// each using default arguments.
// Use const arguments when appropriate.
// Note that set() should use new to allocate sufficient space
// to hold the designated string.
// The techniques used here are similar to those
// used in designing and implementing classes.
// (You might have to alter the header filenames and
// delete the using directive, depending on your compiler.)
#include <iostream>
#include <cstring> // for strlen(), strcpy()

struct stringy {
  char* str; // points to a string
  int ct; // length of string (not counting '\0')
};

// prototypes for set(), show(), show()
void set(stringy& structure, const char* string);
void show(const stringy& structure, int repeat = 1);
void show(const char str[], int repeat = 1);

int main() {
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";

  set(beany, testing); // first argument is a reference
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany

  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';

  show(testing);
  show(testing, 3);
  show("Done!");

  delete [] beany.str;

  return 0;
}

void set(stringy& structure, const char* string) {
  structure.ct = strlen(string);
  structure.str = new char[structure.ct + 1];
  strcpy(structure.str, string);
}

void show(const stringy& structure, int repeat) {
  for (int i = 0; i < repeat; i++)
    std::cout << structure.str << std::endl;
}

void show(const char str[], int repeat) {
  for (int i = 0; i < repeat; i++)
    std::cout << str << std::endl;
}
