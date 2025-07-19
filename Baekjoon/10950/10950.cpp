#include <iostream>

int main() {
  int t{};

  std::cin >> t;

  for (int i{1}; i <= t; i++) {
    int a{};
    int b{};

    std::cin >> a >> b;

    int sum = a + b;

    std::cout << sum << std::endl;
  }

  return 0;
}