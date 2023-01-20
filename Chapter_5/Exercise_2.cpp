#include <array>
#include <iostream>
const int ArSize = 101;

int main() {
  using namespace std;
  array<long double, ArSize> factorials = {1, 1};
  cout << "0! = " << factorials[0] << endl << "1! = " << factorials[1] << endl;
  for (int i = 2; i < ArSize; ++i) {
    factorials[i] = i * factorials[i - 1];
    cout << i << "! = " << factorials[i] << endl;
  }
  return 0;
}