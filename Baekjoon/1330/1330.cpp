#include <iostream>
#include <string>

int main() {
  int a{};
  int b{};

  std::cin >> a >> b;

  std::string comparisonResult;

  if (a > b) {
    comparisonResult = ">";
  } else if (a < b) {
    comparisonResult = "<";
  } else {
    comparisonResult = "==";
  }

  std::cout << comparisonResult << std::endl;

  return 0;
}