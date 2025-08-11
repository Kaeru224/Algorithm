#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  for (int i{1}; i <= n; ++i) {
    std::cout << std::string(i, '*') << '\n';
  }

  return 0;
}