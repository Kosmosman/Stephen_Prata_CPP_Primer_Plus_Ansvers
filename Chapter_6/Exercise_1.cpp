#include <cctype>
#include <iostream>

int main() {
  using namespace std;
  cout << "Enter a line: ";
  char ch = ' ';
  while ((ch = cin.get()) != '@') {
    if (isupper(ch))
      cout << (char)tolower(ch);
    else if (islower(ch))
      cout << (char)toupper(ch);
    else
      cout << ch;
  }
  return 0;
}