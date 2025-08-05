#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::vector<bool> students(31);

  for (int i{}; i < 28; ++i) {
    int studentNum{};
    std::cin >> studentNum;
    students[studentNum] = true;
  }

  for (int i{1}; i <= 30; ++i) {
    if (students[i] == false) {
      std::cout << i << '\n';
    }
  }

  return 0;
}