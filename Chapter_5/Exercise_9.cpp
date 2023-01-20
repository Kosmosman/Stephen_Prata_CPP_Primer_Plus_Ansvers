#include <iostream>
#include <string>

int main() {
  using namespace std;
  string tmp;
  int count = -1;
  cout << "Enter a words for counting (done for exit):\n";
  while (tmp != "done") {
    cin >> tmp;
    ++count;
  }
  cout << "You entered " << count << " words.\n";
  return 0;
}