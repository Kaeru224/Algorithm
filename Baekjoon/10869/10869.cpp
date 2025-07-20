#include <iostream>

int main() {
  int a{};
  int b{};

  std::cin >> a >> b;

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int quotient = a / b;
  int remainder = a % b;

  std::cout << sum << std::endl;
  std::cout << difference << std::endl;
  std::cout << product << std::endl;
  std::cout << quotient << std::endl;
  std::cout << remainder << std::endl;

  return 0;
}