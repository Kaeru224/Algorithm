#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};
  int x{};

  std::cin >> n >> x;

  for (int i{}; i < n; ++i) {
    int currentNum{};

    std::cin >> currentNum;

    if (currentNum < x) {
      std::cout << currentNum << ' ';
    }
  }

  std::cout << '\n';

  return 0;
}