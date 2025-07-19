#include <iostream>
#include <string>

int main() {
  int a{};
  int b{};

  std::cin >> a >> b;

  std::string result{};

  if (a > b) {
    result = ">";
  } else if (a < b) {
    result = "<";
  } else {
    result = "==";
  }

  std::cout << result << std::endl;

  return 0;
}