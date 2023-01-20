#include <iostream>
const int LightYear = 63240;

double converter(double data);

int main() {
  using namespace std;
  cout << "Enter the number of light years: ";
  double number = 0;
  cin >> number;
  cout << number << " light year = " << converter(number)
       << " astronomical units.\n";
  return 0;
}

double converter(double data) { return data * LightYear; }