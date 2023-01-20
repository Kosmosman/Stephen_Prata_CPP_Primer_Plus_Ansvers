#include <iostream>

struct CandyBar {
  char name[20];
  double weight;
  int callories;
};

int main() {
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  std::cout << "Candy name - " << snack.name << std::endl;
  std::cout << "Candy weight - " << snack.weight << std::endl;
  std::cout << "Candy callories - " << snack.callories << std::endl;
  return 0;
}
