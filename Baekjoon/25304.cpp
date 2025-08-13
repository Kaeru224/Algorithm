#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x{};
  int n{};

  std::cin >> x >> n;

  int totalAmount{};

  for (int i{}; i < n; ++i) {
    int a{};
    int b{};

    std::cin >> a >> b;

    totalAmount += a * b;
  }

  if (x == totalAmount) {
    std::cout << "Yes\n";
  } else {
    std::cout << "No\n";
  }

  return 0;
}