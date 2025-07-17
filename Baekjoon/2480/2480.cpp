#include <algorithm>
#include <iostream>

int main() {
  int die1, die2, die3;

  std::cin >> die1 >> die2 >> die3;

  int prizeMoney{};

  if (die1 == die2 && die2 == die3) {
    prizeMoney = 10000 + die1 * 1000;
  } else if (die1 == die2 || die1 == die3) {
    prizeMoney = 1000 + die1 * 100;
  } else if (die2 == die3) {
    prizeMoney = 1000 + die2 * 100;
  } else {
    prizeMoney = std::max({die1, die2, die3}) * 100;
  }

  std::cout << prizeMoney << std::endl;

  return 0;
}