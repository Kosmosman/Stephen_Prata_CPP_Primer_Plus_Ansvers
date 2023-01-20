#include <iostream>

int main() {
  using namespace std;
  const double DafnaPercent = 0.1;
  const double CleoPercent = 1.05;
  const double DafnaStart = 100;
  double dafnaDeposite = 100;
  double cleoDeposite = 100;
  int age = 0;
  while (dafnaDeposite >= cleoDeposite) {
    dafnaDeposite += (DafnaStart * DafnaPercent);
    cleoDeposite *= CleoPercent;
    age++;
    cout << "After " << age << " years Dafna have " << dafnaDeposite
         << "$ and Cleo have " << cleoDeposite << "$\n";
  }
  return 0;
}