#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};

  std::cin >> n;

  int numLongsToPrint = n / 4;

  for (int i{1}; i <= numLongsToPrint; ++i) {
    std::cout << "long ";
  }

  std::cout << "int\n";

  return 0;
}