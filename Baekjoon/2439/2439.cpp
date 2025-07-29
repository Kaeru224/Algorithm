#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  for (int line{1}; line <= n; ++line) {
    for (int spaceCount{1}; spaceCount <= n - line; ++spaceCount) {
      std::cout << ' ';
    }
    for (int starCount{1}; starCount <= line; ++starCount) {
      std::cout << '*';
    }
    std::cout << '\n';
  }

  return 0;
}