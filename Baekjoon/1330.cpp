#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};

  std::cin >> a >> b;

  if (a > b) {
    std::cout << ">\n";
  } else if (a < b) {
    std::cout << "<\n";
  } else {
    std::cout << "==\n";
  }

  return 0;
}