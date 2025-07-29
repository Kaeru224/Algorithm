#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  while (true) {
    int numA{};
    int numB{};

    std::cin >> numA >> numB;

    if (numA == 0 && numB == 0) {
      break;
    }

    int sum = numA + numB;

    std::cout << sum << '\n';
  }

  return 0;
}