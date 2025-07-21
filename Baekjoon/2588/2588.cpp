#include <iostream>

int main() {
  int a{};
  int b{};

  std::cin >> a >> b;

  int unitDigit = b % 10;
  int tensDigit = (b / 10) % 10;
  int hundredsDigit = b / 100;

  int productByUnitDigit = a * unitDigit;
  int productByTensDigit = a * tensDigit;
  int productByHundredsDigit = a * hundredsDigit;
  int finalProduct = a * b;

  std::cout << productByUnitDigit << std::endl;
  std::cout << productByTensDigit << std::endl;
  std::cout << productByHundredsDigit << std::endl;
  std::cout << finalProduct << std::endl;

  return 0;
}