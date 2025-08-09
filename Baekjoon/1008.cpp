#include <iomanip>
#include <iostream>

int main() {
  double a{};
  double b{};

  std::cin >> a >> b;

  std::cout << std::fixed << std::setprecision(10) << a / b << '\n';

  return 0;
}