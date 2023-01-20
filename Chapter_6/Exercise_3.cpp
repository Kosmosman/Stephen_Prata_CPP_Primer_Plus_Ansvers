#include <iostream>

int main() {
  using namespace std;
  char ch = ' ';
  cout << "Please enter one of the following:\n";
  cout << "c) carnivore\tp) pianist\nt) tree\tg) game\nq) quit\n";
  while ((ch = cin.get()) != 'q') {
    while (cin.get() != '\n') continue;
    switch (ch) {
      case 'c':
        cout << "A mapple is a carnivore\n";
        break;
      case 'p':
        cout << "A mapple is a pianist\n";
        break;
      case 't':
        cout << "A mapple is a tree\n";
        break;
      case 'g':
        cout << "A mapple is a game\n";
        break;
      default:
        break;
    }
    cout << "Please enter one of the following:\n";
    cout << "c) carnivore\tp) pianist\nt) tree\tg) game\nq) quit\n";
  }
  return 0;
}