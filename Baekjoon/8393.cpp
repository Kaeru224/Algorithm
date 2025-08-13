#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  std::cout << n * (n + 1) / 2 << '\n';

  return 0;
}