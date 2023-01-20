#include <array>
#include <iostream>

int main() {
  using namespace std;
  array<double, 3> result = {0};
  cout << "Enter the last three result of running: ";
  cin >> result[0] >> result[1] >> result[2];
  double mid = (result[0] + result[1] + result[2]) / 3;
  cout << "Middle result - " << mid << endl;
  return 0;
}