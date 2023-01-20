#include <iostream>
#include <string>

int main() {
  std::string first_name = {0};
  std::string full_name = {0};
  std::cout << "Enter your first name: ";
  std::getline(std::cin, first_name);
  std::cout << "Enter your last name: ";
  std::getline(std::cin, full_name);
  full_name += ", " + first_name;
  std::cout << "Here's the information in a single string: " << full_name
            << std::endl;
  return 0;
}