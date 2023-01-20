#include <iostream>

int main() {
  double fuel = 0, distance = 0;
  using namespace std;
  cout << "Enter distance you drove: ";
  cin >> distance;
  cout << "Enter fuel consumption: ";
  cin >> fuel;
  cout << "Your fuel consumption in 100 kilometers is " << 100 * fuel / distance
       << " liters/100km\n";
  return 0;
}