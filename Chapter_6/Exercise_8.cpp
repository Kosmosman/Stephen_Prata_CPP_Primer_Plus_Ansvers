#include <fstream>
#include <iostream>

int main() {
  using namespace std;
  const int Size = 64;
  char filename[Size] = {0};
  char ch = 0;
  int count = 0;
  ifstream file;
  cout << "Enter fileanme: ";
  cin.getline(filename, Size);
  file.open(filename);
  while ((ch = file.get()) != EOF) ++count;
  cout << "Number of symbol - " << count - 1 << endl;
  if (file) file.close();
  return 0;
}