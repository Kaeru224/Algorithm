#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};
  int m{};

  std::cin >> n >> m;

  std::vector<int> baskets(n + 1);

  for (int operationIndex{1}; operationIndex <= m; ++operationIndex) {
    int i{};
    int j{};
    int k{};

    std::cin >> i >> j >> k;

    for (int basketIndex{i}; basketIndex <= j; ++basketIndex) {
      baskets[basketIndex] = k;
    }
  }

  for (int i{1}; i <= n; ++i) {
    std::cout << baskets[i] << ' ';
  }

  std::cout << '\n';

  return 0;
}