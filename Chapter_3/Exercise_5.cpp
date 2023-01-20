#include <iostream>

int main() {
  using namespace std;
  long long population = 0, populationOfTheRussia = 0;
  cout << "Enter the world's population: ";
  cin >> population;
  cout << "Enter the population of the Russia: ";
  cin >> populationOfTheRussia;
  double result = double(populationOfTheRussia) / double(population) * 100.0;
  cout << " The population of the Russia is " << result
       << "% of the world population.\n";
  return 0;
}