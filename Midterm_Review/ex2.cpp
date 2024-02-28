#include <iostream>

bool greaterThan8(double num) {
  if (num < 8) {
    return true;
  }
  return false;
}

// Our main function
int main() {
  int x = 20;
  int y = 12;
  std::cout << "Sum: " << x + y << "\n";

  if (greaterThan8(x + y)) {
    std::cout << "This sum is greater than 8";
  } else {
    std::cout << "This sum is less than or equal to 8";
  }
  return 0;
}
