#include <iostream>

int main() {
  int x{};
  int y{};

  std::cin >> x >> y;

  int quadrant{};

  if (y > 0) {
    if (x > 0) {
      quadrant = 1;
    } else {
      quadrant = 2;
    }
  } else {
    if (x < 0) {
      quadrant = 3;
    } else {
      quadrant = 4;
    }
  }

  std::cout << quadrant << std::endl;

  return 0;
}