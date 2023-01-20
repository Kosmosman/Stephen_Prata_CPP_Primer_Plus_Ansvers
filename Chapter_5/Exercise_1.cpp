#include <iostream>

int main() {
  using namespace std;
  cout << "Enter two integral numbers: ";
  int one = 0, two = 0, sum = 0;
  while ((cin >> one >> two) && (one > two)) {
    cout << "Second number greater than first!\n";
    cout << "Enter two integral numbers: ";
  }
  for (int i = one; i <= two; ++i) {
    sum += i;
  }
  cout << "Sum of numbers between first and second numbers is " << sum << endl;
  return 0;
}