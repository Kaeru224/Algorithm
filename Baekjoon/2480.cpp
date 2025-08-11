#include <algorithm>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  if (a == b && b == c) {
    std::cout << 10000 + a * 1000 << '\n';
  } else if (a == b || a == c) {
    std::cout << 1000 + a * 100 << '\n';
  } else if (b == c) {
    std::cout << 1000 + b * 100 << '\n';
  } else {
    std::cout << std::max({a, b, c}) * 100 << '\n';
  }

  return 0;
}