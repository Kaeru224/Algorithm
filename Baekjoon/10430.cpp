#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  std::cout << (a + b) % c << '\n';
  std::cout << (a % c + b % c) % c << '\n';
  std::cout << a * b % c << '\n';
  std::cout << a % c * (b % c) % c << '\n';

  return 0;
}