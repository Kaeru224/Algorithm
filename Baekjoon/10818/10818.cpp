#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  int firstNum{};

  std::cin >> firstNum;

  int minVal = firstNum;
  int maxVal = firstNum;

  for (int i{1}; i < n; ++i) {
    int currentNum{};

    std::cin >> currentNum;

    minVal = std::min(minVal, currentNum);
    maxVal = std::max(maxVal, currentNum);
  }

  std::cout << minVal << ' ' << maxVal << '\n';

  return 0;
}