#include <iomanip>
#include <iostream>

int main() {
  double a{};
  double b{};

  std::cin >> a >> b;

  double divisionResult = a / b;

  std::cout << std::fixed << std::setprecision(10) << divisionResult
            << std::endl;

  return 0;
}