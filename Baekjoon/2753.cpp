#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
    std::cout << 1 << '\n';
  } else {
    std::cout << 0 << '\n';
  }

  return 0;
}