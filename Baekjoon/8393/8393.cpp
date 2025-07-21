#include <iostream>

int main() {
  int n{};

  std::cin >> n;

  int totalSum = n * (n + 1) / 2;

  std::cout << totalSum << std::endl;

  return 0;
}