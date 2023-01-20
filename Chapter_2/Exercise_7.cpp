#include <iostream>

void display_time(int hours, int minutes);

int main() {
  using namespace std;
  int hours = 0, minutes = 0;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  display_time(hours, minutes);
  return 0;
}

void display_time(int hours, int minutes) {
  std::cout << "Time: " << hours << ":" << minutes << std::endl;
}