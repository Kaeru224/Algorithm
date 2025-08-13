#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  for (int i{}; i < n / 4; ++i) {
    std::cout << "long ";
  }

  std::cout << "int\n";

  return 0;
}