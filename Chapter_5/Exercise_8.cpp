#include <cstring>
#include <iostream>

int main() {
  using namespace std;
  char tmp[32] = {0};
  int count = -1;
  cout << "Enter a words for counting (done for exit):\n";
  while (strcmp(tmp, "done")) {
    cin >> tmp;
    ++count;
  }
  cout << "You entered " << count << " words.\n";
  return 0;
}