#include <iostream>

int main() {
  using namespace std;
  const double ToInch = 12, ToMetr = 0.0254, ToKillo = 1 / 2.2;
  cout << "Enter your height in foot and inch: ";
  double heightFoot = 0, heightInch = 0, weight = 0;
  cin >> heightFoot >> heightInch;
  cout << "Enter your weight in inch: ";
  cin >> weight;
  double heightInMetrs = (heightFoot * ToInch + heightInch) * ToMetr;
  double weightInKillo = weight * ToKillo;
  double BMI = weightInKillo / (heightInMetrs * heightInMetrs);
  cout << "Your BMI is " << BMI << endl;
  return 0;
}