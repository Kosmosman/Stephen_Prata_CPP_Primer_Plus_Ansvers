#include <iostream>

int main() {
  using namespace std;
  const int Size = 12;
  const char* mounths[Size] = {"January",   "Febrary", "Marth",    "April",
                               "May",       "June",    "July",     "August",
                               "September", "October", "November", "December"};
  int mounthySale[Size] = {0};
  int sum = 0;
  for (int i = 0; i < Size; i++) {
    cout << "Enter your sale in " << mounths[i] << ": ";
    cin >> mounthySale[i];
  }
  for (int i = 0; i < Size; i++) sum += mounthySale[i];
  cout << "Your year sale is " << sum << " books\n";
  return 0;
}