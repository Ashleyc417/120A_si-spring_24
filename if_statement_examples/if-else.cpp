#include <iostream>

int main() {
  // Create a int variable x
  // Assign it a value of 3
  int x = 3;

  // If it is divisible by 2 without remainder,
  // (a.k.a. "Check if it's even"), print "x is even"
  if (x % 2 == 0) {
    std::cout << "x is even\n";
  }

  // ...else (not divisible by 2), print "x is odd"
  else {
    std::cout << "x is odd\n";
  }

  // return 0 shows everything ran okay.
  return 0;
}
