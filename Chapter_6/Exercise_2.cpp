#include <iostream>

int main() {
  using namespace std;
  const int Size = 10;
  double sum[Size] = {0};
  double result = 0;
  int i = 0;
  cout << "Enter the 10 number of donation: ";
  for (i = 0; i < Size && cin >> sum[i]; ++i) {
    result += sum[i];
  }
  double mid = result / Size;
  result = 0;
  for (int j = 0; j <= i; ++j) {
    if (sum[j] > mid) ++result;
  }
  cout << "You made " << i << " donations, middle size is " << mid
       << ", the numbers of donations greater than mid - " << result << endl;
  return 0;
}