// 3. Here is a structure declaration:
//   struct box {
//     char maker[40];
//     float height;
//     float width;
//     float length;
//     float volume;
//   };

// a. Write a function that passes a box structure by value and that displays the
// value of each member.
// b. Write a function that passes the address of a box structure and that sets the
// volume member to the product of the other three dimensions.
// c. Write a simple program that uses these two functions.
#include <iostream>

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void displayBox(const box sampleBox);
void setBoxVolume(box* sampleBox);

int main() {
  box silentBox = {};

  std::cout << "Enter the maker of the box: ";
  std::cin >> silentBox.maker;
  std::cout << "Enter the height of the box: ";
  std::cin >> silentBox.height;
  std::cout << "Enter the width of the box: ";
  std::cin >> silentBox.width;
  std::cout << "Enter the length of the box: ";
  std::cin >> silentBox.length;
  std::cout << "Enter the volume of the box: ";
  std::cin >> silentBox.volume;

  std::cout << "You entered:\n";
  displayBox(silentBox);

  if (silentBox.volume != silentBox.height * silentBox.width * silentBox.length) {
    std::cout << "The volume isn't entirely correct. I'll fix that for you :)\n";
    setBoxVolume(&silentBox);
    std::cout << "Here's the correct box values:\n";
    displayBox(silentBox);
  }
  std::cout << std::endl;

  return 0;
}

void displayBox(const box sampleBox) {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(2);
  std::cout << "Maker: " << sampleBox.maker << std::endl;
  std::cout << "Height: " <<  sampleBox.height << std::endl;
  std::cout << "Width: " << sampleBox.width << std::endl;
  std::cout << "Length: " << sampleBox.length << std::endl;
  std::cout << "Volume: " << sampleBox.volume << std::endl;
}

void setBoxVolume(box* sampleBox) {
  sampleBox->volume = sampleBox->height * sampleBox->width * sampleBox->length;
}
