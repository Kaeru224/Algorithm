#include <iostream>
#include <vector>
#include <algorithm>

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

  int foundCount = std::count(numbers.begin(), numbers.end(), v);

  std::cout << foundCount << '\n';

  return 0;
}