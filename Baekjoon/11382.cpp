#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  long long a{};
  long long b{};
  long long c{};

  std::cin >> a >> b >> c;

  std::cout << a + b + c << '\n';

  return 0;
}