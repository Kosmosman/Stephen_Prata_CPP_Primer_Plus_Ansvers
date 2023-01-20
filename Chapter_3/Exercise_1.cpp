#include <iostream>

int main() {
  using namespace std;
  cout << "Enter your high in inch: ______\b\b\b\b\b\b";
  int inch = 0;
  const int coef = 12;
  cin >> inch;
  cout << inch << " inches is " << inch / 12 << " foots and " << inch % coef
       << " inches.\n";
  return 0;
}