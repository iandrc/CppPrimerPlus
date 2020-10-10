// 3. Write a precursor to a menu-driven program.
// The program should display a menu offering four choices,
// each labeled with a letter.
// If the user responds with a letter other than one of the four valid choices,
// the program should prompt the user
// to enter a valid response until the user complies.
// Then the program should use a switch to select
// a simple action based on the user’s selection.

// A program run could look something like this:
//   Please enter one of the following choices:
//   c) carnivore           p) pianist
//   t) tree                g) game
//   f
//   Please enter a c, p, t, or g: q
//   Please enter a c, p, t, or g: t
//   A maple is a tree.
#include <iostream>

void showMenu();

int main() {
  showMenu();

  char ch;
  std::cin >> ch;

  while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g' )
	{
		std::cout << "Please enter a c, p, t, or g: ";
		std::cin.ignore(100,'\n');
		std::cin >> ch;
	}

  switch(ch) {
    case 'c': std::cout << "A lion is a carnivore.\n";
              break;
    case 'p': std::cout << "Ludwig van Beethoven was a pianist.\n";
              break;
    case 't': std::cout << "A maple is a tree.\n";
              break;
    case 'g': std::cout << "The Last of Us is a game.\n";
              break;
  }

  return 0;
}

void showMenu() {
  std::cout << "Please enter one of the following choices:\n";
  std::cout << "c) carnivore           p) pianist\n"
               "t) tree                g) game\n";
}
