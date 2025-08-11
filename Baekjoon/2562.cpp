#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int maxValue{};
  int maxValueIndex{};

  for (int i{1}; i <= 9; ++i) {
    int n{};

    std::cin >> n;

    if (n > maxValue) {
      maxValue = n;
      maxValueIndex = i;
    }
  }

  std::cout << maxValue << '\n' << maxValueIndex << '\n';

  return 0;
}