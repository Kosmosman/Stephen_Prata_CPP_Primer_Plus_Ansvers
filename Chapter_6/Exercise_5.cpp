#include <iostream>
using namespace std;

int main() {
  const int border_tax[4] = {5000, 10000, 20000, 35000};
  const double tax_size[4] = {0, 0.1, 0.15, 0.2};
  double sum = 0, result = 0;
  cout << "Enter your sum (syblol or negative number for exit): ";
  while (cin >> sum && sum >= 0) {
    if (sum > border_tax[0])
      result += (sum > border_tax[1]) ? border_tax[1] * tax_size[1]
                                      : (sum - border_tax[0]) * tax_size[1];
    if (sum > border_tax[1])
      result += (sum > border_tax[2])
                    ? border_tax[2] * tax_size[2]
                    : (sum - border_tax[0] - border_tax[1]) * tax_size[2];
    if (sum > border_tax[2])
      result += (sum > border_tax[3])
                    ? (sum - border_tax[3]) * tax_size[3]
                    : (sum - border_tax[0] - border_tax[1] - border_tax[2]) *
                          tax_size[3];
    cout << "Your result - " << result << " coins\n";
    cout << "Enter new sum: ";
    result = 0;
  }
  return 0;
}