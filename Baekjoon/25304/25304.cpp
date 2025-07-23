#include <iostream>

int main() {
  int x{};
  int n{};

  std::cin >> x >> n;

  int calculatedTotal{};

  for (int i{1}; i <= n; i++) {
    int a{};
    int b{};

    std::cin >> a >> b;

    calculatedTotal += a * b;
  }

  bool isTotalMatch = x == calculatedTotal;

  if (isTotalMatch) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}