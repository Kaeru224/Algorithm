#include <iostream>

int main() {
  int a{};
  int b{};

  std::cin >> a >> b;

  int difference = a - b;

  std::cout << difference << std::endl;

  return 0;
}