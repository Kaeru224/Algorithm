#include <iostream>

int main() {
  int a{};
  int b{};
  int c{};

  std::cin >> a >> b >> c;

  int totalCurrentMinutes = a * 60 + b;
  int totalEndMinutes = totalCurrentMinutes + c;

  int endHours = (totalEndMinutes / 60) % 24;
  int endMinutes = totalEndMinutes % 60;

  std::cout << endHours << " " << endMinutes << std::endl;

  return 0;
}