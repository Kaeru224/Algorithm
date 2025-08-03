#include <iostream>
#include <utility>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};
  int m{};

  std::cin >> n >> m;

  std::vector<int> baskets(n + 1);

  for (int i{1}; i <= n; ++i) {
    baskets[i] = i;
  }

  for (int swapIndex{1}; swapIndex <= m; ++swapIndex) {
    int i{};
    int j{};

    std::cin >> i >> j;

    std::swap(baskets[i], baskets[j]);
  }

  for (int i{1}; i <= n; ++i) {
    std::cout << baskets[i] << ' ';
  }

  std::cout << '\n';

  return 0;
}