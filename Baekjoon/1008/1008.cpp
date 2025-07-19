#include <iomanip>
#include <iostream>

int main() {
  double a{};
  double b{};

  std::cin >> a >> b;

  double result = a / b;

  std::cout << std::fixed << std::setprecision(10) << result << std::endl;

  return 0;
}