#include <cstring>
#include <iostream>

int main() {
  char first_name[20] = {0};
  char full_name[42] = {0};
  std::cout << "Enter your first name: ";
  std::cin >> first_name;
  std::cout << "Enter your last name: ";
  std::cin >> full_name;
  strcat(full_name, ", ");
  strncat(full_name, first_name, 20);
  std::cout << "Here's the information in a single string: " << full_name
            << std::endl;
  return 0;
}