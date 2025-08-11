#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int h{};
  int m{};

  std::cin >> h >> m;

  int alarmTimeInMinutes = h * 60 + m - 45;

  if (alarmTimeInMinutes < 0) {
    alarmTimeInMinutes += 24 * 60;
  }

  std::cout << alarmTimeInMinutes / 60 << ' ' << alarmTimeInMinutes % 60
            << '\n';

  return 0;
}