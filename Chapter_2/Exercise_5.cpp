#include <iostream>

double converter(double cel);

int main() {
  using namespace std;
  cout << "Please enter a Celsius value: ";
  double cel = 0;
  cin >> cel;
  cout << cel << " degrees Celsius is " << converter(cel) << " in Fahrenheit."
       << endl;
  return 0;
}

double converter(double cel) { return 1.8 * cel + 32; }