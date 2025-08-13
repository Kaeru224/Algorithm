#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};

  std::cin >> a >> b;

  std::cout << a * b << '\n';

  return 0;
}