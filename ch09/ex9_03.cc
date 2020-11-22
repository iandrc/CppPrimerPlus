// 3. Begin with the following structure declaration:
  // struct chaff {
  //   char dross[20];
  //   int slag;
  // };
// Write a program that uses placement
// new to place an array of two such structures in a buffer.
// Then assign values to the structure members
// (remembering to use strcpy() for the char array)
// and use a loop to display the contents.
// Option 1 is to use a static array, like that in Listing 9.10,
// for the buffer.
// Option 2 is to use regular new to allocate the buffer.
#include <iostream>
#include <new> // for placement new
#include <cstring> // for strcpy()

const int ARR_LEN = 2;
const int DROSS_LEN = 20;

struct chaff {
  char dross[DROSS_LEN];
  int slag;
};

chaff buffer[sizeof(chaff) * ARR_LEN];

void fillInChaff(chaff* pstr, int index);

int main() {
  chaff* pstr = new (buffer) chaff[ARR_LEN];

  int i;

  for (i = 0; i < ARR_LEN; i++) {
    fillInChaff(pstr, i);
  }

  for (i = 0; i < ARR_LEN; i++) {
    std::cout << "The dross name for element #" << i + 1 << ": "
              << pstr[i].dross << std::endl;
    std::cout << "The slag value for element #" << i + 1 << ": "
              << pstr[i].slag << std::endl;
  }

  return 0;
}

void fillInChaff(chaff* pstr, int index) {
  char dross[DROSS_LEN];
  std::cout << "Enter the dross name for element #" << index + 1 << ": ";
  std::cin.get(dross, DROSS_LEN);

  while (strlen(dross) == 0) {
    std::cin.clear();
    std::cin.get();
    std::cout << "The line is empty." << std::endl;
    std::cout << "Please, enter dross name for element #" << index + 1 << ": ";
  }

  while (std::cin.get() != '\n')
    continue;

  strcpy(pstr[index].dross, dross);

  std::cout << "Enter the slag value for element #" << index + 1 << ": ";

  while (!(std::cin >> pstr[index].slag)) {
    std::cin.clear();

    while (std::cin.get() != '\n')
      continue;

    std::cout << "Not an integer." << std::endl;
    std::cout << "Enter the slag value for element #" << index + 1 << ": ";
  }
  index++;
  std::cin.get(); // discard newline char
}
