#include <iostream>

struct CandyBar {
  char name[20];
  double weight;
  int callories;
};

int main() {
  CandyBar* snack = new CandyBar[3]{{"Mocha Munch", 2.3, 350},
                                    {"Ferrero Roshe", 2.5, 400},
                                    {"Barbariska", 3, 150}};
  std::cout << "Candy name - " << snack[0].name << std::endl;
  std::cout << "Candy weight - " << snack[0].weight << std::endl;
  std::cout << "Candy callories - " << snack[0].callories << std::endl
            << std::endl;
  std::cout << "Candy name - " << snack[1].name << std::endl;
  std::cout << "Candy weight - " << snack[1].weight << std::endl;
  std::cout << "Candy callories - " << snack[1].callories << std::endl
            << std::endl;
  std::cout << "Candy name - " << snack[2].name << std::endl;
  std::cout << "Candy weight - " << snack[2].weight << std::endl;
  std::cout << "Candy callories - " << snack[2].callories << std::endl;
  delete[] snack;
  return 0;
}
