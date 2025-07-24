#include <iostream>

int main() {
  int n{};

  std::cin >> n;

  int numLongsToPrint = n / 4;

  for (int i{1}; i <= numLongsToPrint; i++) {
    std::cout << "long ";
  }

  std::cout << "int" << std::endl;

  return 0;
}