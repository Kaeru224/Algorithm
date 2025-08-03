#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int maxVal{};
  int maxIndex{};

  for (int i{1}; i <= 9; ++i) {
    int currentNum{};

    std::cin >> currentNum;

    if (currentNum > maxVal) {
      maxVal = currentNum;
      maxIndex = i;
    }
  }

  std::cout << maxVal << '\n' << maxIndex << '\n';

  return 0;
}