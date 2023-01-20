#include <iostream>

int main() {
  using namespace std;
  long long second = 0;
  const int SecondInDay = 60 * 60 * 24, SecondInHour = 60 * 60,
            SecondInMinute = 60;
  cout << "Enter the number of seconds: ";
  cin >> second;
  cout << second << " seconds = ";
  int days = 0, hours = 0, minutes = 0;
  days = second / SecondInDay;
  second %= SecondInDay;
  hours = second / SecondInHour;
  second %= SecondInHour;
  minutes = second / SecondInMinute;
  second %= SecondInMinute;
  cout << days << " days, " << hours << " hours, " << minutes << " minutes, "
       << second << " seconds\n";
  return 0;
}