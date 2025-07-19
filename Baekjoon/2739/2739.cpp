#include <iostream>

int main() {
  int n{};

  std::cin >> n;

  for (int i{1}; i <= 9; i++) {
    int result = n * i;

    std::cout << n << " * " << i << " = " << result << std::endl;
  }

  return 0;
}