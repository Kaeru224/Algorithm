#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  int totalMinutes = a * 60 + b + c;

  int endHours = (totalMinutes / 60) % 24;
  int endMinutes = totalMinutes % 60;

  std::cout << endHours << " " << endMinutes << '\n';

  return 0;
}