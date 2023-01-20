#include <iostream>

int main() {
  using namespace std;
  int size = 0;
  cout << "Enter the number of lines: ";
  cin >> size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1 - i; j++) {
      cout << ".";
    }
    for (int j = size - 1 - i; j < size; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}