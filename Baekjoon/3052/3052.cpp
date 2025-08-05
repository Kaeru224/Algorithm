#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::vector<bool> remainders(42);

  for (int i{}; i < 10; ++i) {
    int num{};

    std::cin >> num;

    int remainder = num % 42;

    remainders[remainder] = true;
  }

  int count{};

  for (int i{}; i < 42; ++i) {
    if (remainders[i] == true) {
      count++;
    }
  }

  std::cout << count << '\n';

  return 0;
}