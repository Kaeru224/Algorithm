#include <iomanip>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  double a{};
  double b{};

  std::cin >> a >> b;

  std::cout << std::fixed << std::setprecision(10) << a / b << '\n';

  return 0;
}