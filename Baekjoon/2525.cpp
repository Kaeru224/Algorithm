#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  std::cout << (a * 60 + b + c) / 60 % 24 << ' ' << (a * 60 + b + c) % 60
            << '\n';

  return 0;
}