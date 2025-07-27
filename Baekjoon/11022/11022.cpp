#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t{};

  std::cin >> t;

  for (int i{1}; i <= t; i++) {
    int a{};
    int b{};

    std::cin >> a >> b;

    int c = a + b;

    std::cout << "Case #" << i << ": " << a << " + " << b << " = " << c << '\n';
  }

  return 0;
}