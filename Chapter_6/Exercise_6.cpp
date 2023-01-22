#include <iostream>
#include <string>

int main() {
  using namespace std;
  const int GrandDonation = 10000;

  struct mecenat {
    string name;
    double sum;
  };

  int count = 0, num_top_mecenates = 0, top_mecenat_index = 0,
      std_mecenat_index = 1;
  bool error = false;
  cout << "Enter the number of mecenatas: ";
  (cin >> count).get();
  mecenat* mecenates_list = new mecenat[count];
  int* top_mecenates = new int[count * 2]{-1};
  if (mecenates_list && top_mecenates) {
    for (int i = 0; i < count && !error; ++i) {
      cout << "Enter the mecenat's name: ";
      getline(cin, mecenates_list[i].name);
      cout << "Enter the mecenat's donation: ";
      (cin >> mecenates_list[i].sum).get();
      if (mecenates_list[i].sum < 0) {
        cout << "Error!";
        error = true;
      } else if (mecenates_list[i].sum >= GrandDonation) {
        top_mecenates[top_mecenat_index] = i;
        ++num_top_mecenates;
        top_mecenat_index += 2;
      } else {
        top_mecenates[std_mecenat_index] = i;
        std_mecenat_index += 2;
      }
    }
    if (top_mecenates[0] >= 0 && top_mecenates[1] >= 0) {
      cout << "Grand Patrons\n";
      for (int i = 0; i < count; i += 2) {
        cout << mecenates_list[top_mecenates[i]].name << endl;
      }
      cout << "\nPatrons\n";
      for (int i = 1; i < count; i += 2) {
        cout << mecenates_list[top_mecenates[i]].name << endl;
      }
    } else {
      cout << "none";
    }
  }
  delete[] mecenates_list;
  delete[] top_mecenates;
  return 0;
}