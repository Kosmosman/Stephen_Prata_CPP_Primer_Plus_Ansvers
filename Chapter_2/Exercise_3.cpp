#include <iostream>

void first_output();
void second_output();

int main() {
  first_output();
  first_output();
  second_output();
  second_output();
  return 0;
}

void first_output() { std::cout << "Three blind mice" << std::endl; }

void second_output() { std::cout << "See how they run" << std::endl; }