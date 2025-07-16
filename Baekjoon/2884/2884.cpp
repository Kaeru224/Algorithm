#include <iostream>

int main() {
  int h, m;

  std::cin >> h >> m;

  int totalMinutes = h * 60 + m;
  int adjustedTotalMinutes = totalMinutes - 45;

  if (adjustedTotalMinutes < 0) {
    adjustedTotalMinutes += 24 * 60;
  }

  int adjustedHours = adjustedTotalMinutes / 60;
  int adjustedMinutes = adjustedTotalMinutes % 60;

  std::cout << adjustedHours << " " << adjustedMinutes << std::endl;

  return 0;
}