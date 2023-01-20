#include <iostream>

int main() {
  using namespace std;
  const int Size = 12;
  const int Years = 3;
  const char* mounths[Size] = {"January",   "Febrary", "Marth",    "April",
                               "May",       "June",    "July",     "August",
                               "September", "October", "November", "December"};
  int mounthySale[Years][Size] = {0};
  int sum = 0;
  for (int i = 0; i < Years; i++) {
    for (int j = 0; j < Size; j++) {
      cout << "Enter your sale in " << i + 1 << " year's " << mounths[j]
           << ": ";
      cin >> mounthySale[i][j];
    }
  }
  for (int i = 0; i < Years; i++) {
    for (int j = 0; j < Size; j++) {
      sum += mounthySale[i][j];
    }
  }
  cout << "Your third years sale is " << sum << " books\n";
  return 0;
}