#include <iostream>
#include <string>

int main() {
  using namespace std;
  struct car {
    string name;
    int year;
  };
  int count = 0;
  cout << "Enter a number of auto in catalog: ";
  (cin >> count).get();
  car *catalog = new car[count]{};
  if (catalog) {
    for (int i = 0; i < count; i++) {
      cout << "Enter a manufacter: ";
      getline(cin, catalog[i].name);
      cout << "Enter a year: ";
      (cin >> catalog[i].year).get();
    }
    cout << "Here your automobiles: " << endl;
    for (int i = 0; i < count; i++) {
      cout << catalog[i].year << " " << catalog[i].name << endl;
    }
    delete[] catalog;
  }
  return 0;
}
