#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int score{};

  std::cin >> score;

  if (score >= 90) {
    std::cout << "A\n";
  } else if (score >= 80) {
    std::cout << "B\n";
  } else if (score >= 70) {
    std::cout << "C\n";
  } else if (score >= 60) {
    std::cout << "D\n";
  } else {
    std::cout << "F\n";
  }

  return 0;
}