// 9. This exercise provides practice in writing functions dealing
// with arrays and structures.
// The following is a program skeleton.
// Complete it by providing the described functions:
#include <iostream>
#include <cstring>

const int SLEN = 30;
struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);
// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student* ps);
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main() {
  std::cout << "Enter class size: ";
  int class_size;
  std::cin >> class_size;

  while (std::cin.get() != '\n')
    continue;

  student* ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);

  for (int i = 0; i < entered; i++) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);

  delete [] ptr_stu;
  std::cout << "Done.\n";

  return 0;
}

int getinfo(student pa[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    std::cout << "Enter student's full name (leave empty to quit): ";
    std::cin.getline(pa[i].fullname, SLEN);

    if (strlen(pa[i].fullname) == 0)
      break;

    std::cout << "Enter student's hobby: ";
    std::cin.getline(pa[i].hobby, SLEN);
    std::cout << "Enter student's OOP level: ";
    std::cin >> pa[i].ooplevel;

    std::cin.get();
    count++;
  }

  return count;
}

void display1(student st) {
  std::cout << "\nStudent's full name (d1): " << st.fullname << std::endl;
  std::cout << "Student's hobby (d1): " << st.hobby << std::endl;
  std::cout << "Student's OOP level (d1): " << st.ooplevel << std::endl;
}

void display2(const student* ps) {
  std::cout << "\nStudent's full name (d2): " << ps->fullname << std::endl;
  std::cout << "Student's hobby (d2): " << ps->hobby << std::endl;
  std::cout << "Student's OOP level (d2): " << ps->ooplevel << std::endl;
  std::cout << std::endl;
}

void display3(const student pa[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << "\nStudent's full name (d3): " << pa[i].fullname << std::endl;
    std::cout << "Student's hobby (d3): " << pa[i].hobby << std::endl;
    std::cout << "Student's OOP level (d3): " << pa[i].ooplevel << std::endl;
  }
}
