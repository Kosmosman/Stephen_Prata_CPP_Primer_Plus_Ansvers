#include <iostream>

struct Pizza {
  char name[64];
  double diameter;
  double weight;
};

int main() {
  using namespace std;
  Pizza papperoni = {0};
  cout << "Hello,Sir! Please, choose pizza you want: ";
  cin >> papperoni.name;
  cout << "Ok, one " << papperoni.name << ". Pizza's diameters? ";
  cin >> papperoni.diameter;
  cout << "Accepted! And say about pizza's weight you need? ";
  cin >> papperoni.weight;
  cout << "Good. I repeate your order: one " << papperoni.name << ", diameters "
       << papperoni.diameter << " cm and weight " << papperoni.weight
       << " gramm." << endl;
  return 0;
}