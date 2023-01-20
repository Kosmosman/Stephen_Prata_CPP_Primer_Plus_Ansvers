#include <iostream>

int main() {
  using namespace std;
  double sum = 0;
  double num = -1;
  cout << "Enter your sum: ";
  while (cin >> num && num != 0) {
    sum += num;
    cout << "Now you have " << sum << "$\n";
    cout << "Enter your sum: ";
  }
  return 0;
}