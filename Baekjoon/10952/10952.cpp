#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  while (true) {
    int a{};
    int b{};

    std::cin >> a >> b;

    if (a == 0 && b == 0) {
      break;
    }

    int sum = a + b;

    std::cout << sum << '\n';
  }

  return 0;
}