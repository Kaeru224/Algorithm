#include <iostream>

int main() {
  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  int sumModC = (a + b) % c;

  int sumOfMods = ((a % c) + (b % c)) % c;

  int productModC = (a * b) % c;

  int productOfMods = ((a % c) * (b % c)) % c;

  std::cout << sumModC << std::endl;
  std::cout << sumOfMods << std::endl;
  std::cout << productModC << std::endl;
  std::cout << productOfMods << std::endl;

  return 0;
}