#include <iostream>

int main() {
  using namespace std;
  const double MinutesInDegree = 60, SecondsInDegree = 3600;
  int degree = 0, minute = 0, second = 0;
  cout << "Enter a latitude in degrees, minutes, and seconds:\n";
  cout << "First, enter the degrees: ";
  cin >> degree;
  cout << "Next, enter the minutes of arc: ";
  cin >> minute;
  cout << "Finally, enter the second of arc: ";
  cin >> second;
  double result = degree + minute / MinutesInDegree + second / SecondsInDegree;
  cout << degree << " degrees, " << minute << " minutes, " << second
       << " seconds = " << result << " degrees\n";
  return 0;
}