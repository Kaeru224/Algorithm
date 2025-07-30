#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};

  while (std::cin >> a >> b) {
    int sum = a + b;

    std::cout << sum << '\n';
  }

  return 0;
}