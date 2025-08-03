#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};
  int m{};

  std::cin >> n >> m;

  std::vector<int> baskets(n + 1);

  for (int count{1}; count <= m; ++count) {
    int i{};
    int j{};
    int k{};

    std::cin >> i >> j >> k;

    for (int basketIndex{i}; basketIndex <= j; ++basketIndex) {
      baskets[basketIndex] = k;
    }
  }

  for (int index{1}; index <= n; ++index) {
    std::cout << baskets[index] << ' ';
  }

  std::cout << '\n';

  return 0;
}