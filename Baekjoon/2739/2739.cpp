#include <iostream>

int main() {
  int n{};

  std::cin >> n;

  for (int i{1}; i <= 9; i++) {
    int product = n * i;

    std::cout << n << " * " << i << " = " << product << std::endl;
  }

  return 0;
}