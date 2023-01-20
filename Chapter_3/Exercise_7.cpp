#include <iostream>

int main() {
  using namespace std;
  const double Mile = 62.14, Gallon = 3.875;
  double fuelConsumptionEU = 0;
  cout << "Enter a fuel consumption in european style (liters per 100 "
          "kilometers): ";
  cin >> fuelConsumptionEU;
  cout << fuelConsumptionEU
       << " liters/100km = " << Mile / (fuelConsumptionEU / Gallon)
       << " miles/galon\n";
  return 0;
}