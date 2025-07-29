#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  for (int line{1}; line <= n; ++line) {
    for (int col{1}; col <= n; ++col) {
      std::cout << (col <= n - line ? ' ' : '*');
    }
    std::cout << '\n';
  }

  return 0;
}