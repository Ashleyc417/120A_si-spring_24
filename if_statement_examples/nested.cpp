#include <iostream>

int main() {
  int x = 10;

  // Condition 1
  if (x > 5) {
    std::cout << "x is greater than 5" << std::endl;
    // a.)
    if (x % 2 == 0) {
      std::cout << "x is even" << std::endl;
    }
    // b.)
    else {
      std::cout << "x is odd" << std::endl;
    }
    // Condition 2
  } else {
    std::cout << "x is not greater than 5" << std::endl;
  }
  // Everything ran okay
  return 0;
}
