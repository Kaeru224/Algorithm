#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  std::vector<int> numbers(n);

  for (int i{}; i < n; ++i) {
    std::cin >> numbers[i];
  }

  int v{};

  std::cin >> v;

  int foundCount{};

  for (int i{}; i < n; ++i) {
    if (numbers[i] == v) {
      foundCount++;
    }
  }

  std::cout << foundCount << '\n';

  return 0;
}