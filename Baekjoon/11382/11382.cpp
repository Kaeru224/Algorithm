#include <iostream>

int main() {
  long a{};
  long b{};
  long c{};

  std::cin >> a >> b >> c;

  int sum = a + b + c;

  std::cout << sum << std::endl;

  return 0;
}