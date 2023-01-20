#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int strsize = 64;
  const int structsize = 4;

  struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
  };

  bop *massive = new bop[structsize]{
      {"Ricardo Milos", "Junior C++ programmer", "GachiBoy", 2},
      {"Wiilams Chester", "Senior Go developer", "BigBoy", 1},
      {"Buddy Bob", "Trenee java programmer", "GoldenBoy", 0},
      {"Emmanuel Garylton", "Analyst", "FranchBoy", 2}};

  if (massive) {
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\tb. display by title" << endl;
    cout << "c. display by bopname\td. display by preference" << endl;
    cout << "q. quit" << endl;

    char ch = '\0';
    cout << "Enter your choice: ";
    while ((ch = cin.get()) != 'q') {
      while (cin.get() != '\n') continue;
      for (int i = 0; i < structsize; i++) {
        switch (ch) {
          case 'a':
            cout << massive[i].fullname << endl;
            break;
          case 'b':
            cout << massive[i].title << endl;
            break;
          case 'c':
            cout << massive[i].bopname << endl;
            break;
          case 'd':
            switch (massive[i].preference) {
              case 0:
                cout << massive[i].fullname << endl;
                break;
              case 1:
                cout << massive[i].title << endl;
                break;
              case 2:
                cout << massive[i].bopname << endl;
                break;
              default:
                break;
            }
          default:
            break;
        }
      }
      cout << "Enter your choice: ";
    }
    delete[] massive;
  }
  return 0;
}