#include <iostream>

int main() {
  int h, m;

  std::cin >> h >> m;

  if (m < 45) {
    m += 15;
    h -= 1;
    if (h < 0) {
      h = 23;
    }
  } else {
    m -= 45;
  }

  std::cout << h << " " << m << std::endl;

  return 0;
}