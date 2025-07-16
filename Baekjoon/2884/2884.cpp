#include <iostream>

int main() {
  int h, m;

  std::cin >> h >> m;

  int totalMinutes = h * 60 + m;

  int newTotalMinutes = totalMinutes - 45;

  if (newTotalMinutes < 0) {
    newTotalMinutes += 24 * 60;
  }

  int adjustedH = newTotalMinutes / 60;
  int adjustedM = newTotalMinutes % 60;

  std::cout << adjustedH << " " << adjustedM << std::endl;

  return 0;
}