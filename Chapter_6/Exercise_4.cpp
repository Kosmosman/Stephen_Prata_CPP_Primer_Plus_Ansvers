#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int strsize = 64;
  const int structsize = 10;

  struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
  };

  bop *massive = new bop[structsize]{0};
  cout << "Benevolent Order of Programmers Report" << endl;
  cout << "a. display by name\tb. display by title" << endl;
  cout << "c. display by bopname\td. display by preference" << endl;
}