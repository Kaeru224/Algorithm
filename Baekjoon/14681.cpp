#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x{};
  int y{};

  std::cin >> x >> y;

  if (x > 0 && y > 0) {
    std::cout << 1 << '\n';
  } else if (x < 0 && y > 0) {
    std::cout << 2 << '\n';
  } else if (x < 0 && y < 0) {
    std::cout << 3 << '\n';
  } else if (x > 0 && y < 0) {
    std::cout << 4 << '\n';
  }

  return 0;
}