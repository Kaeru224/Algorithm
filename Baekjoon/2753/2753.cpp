#include <iostream>
#include <string>

int main() {
  int year;

  std::cin >> year;

  int result;

  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    result = 1;
  } else {
    result = 0;
  }

  std::cout << result << std::endl;

  return 0;
}