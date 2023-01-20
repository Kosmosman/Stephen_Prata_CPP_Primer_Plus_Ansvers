#include <iostream>

int main() {
  using namespace std;
  cout << "Input distance in furlong: ";
  int dist = 0;
  const int Converter = 220;
  cin >> dist;
  cout << dist << " furlongs is " << dist * Converter << " yards" << endl;
  return 0;
}