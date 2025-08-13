#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t{};

  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int a{};
    int b{};

    std::cin >> a >> b;

    std::cout << a + b << '\n';
  }

  return 0;
}