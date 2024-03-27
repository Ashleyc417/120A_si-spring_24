#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  // Example 1: Calculate the sum of numbers from 1 to 100
  // Prompt: Write a program to sum numbers from 1 to 100.
  // TODO: Your code goes here!

  int sum = 0;

  for (int i = 1; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "Sum of numbers from 1 to 100: " << sum << "\n\n";

  // Example 2: Find the factorial of a number using a while loop
  // Prompt: Write a program to calculate the factorial of a given number.

  // Hint: In general, the factorial of a positive integer n, denoted as n!,
  // is calculated as follows: n! = n × (n - 1) × (n - 2) × ... × 2 × 1)
  // TODO: Your code goes here!

  int num;
  int factorial = 1;

  std::cout << "Let's find the factorial of a number.\n";
  std::cout << "Enter a positive integer: ";
  std::cin >> num;
  if (num < 0) {
    std::cout << "Factorial is not defined for negative numbers."
              << "\n\n";
  } else {
    int i = num;
    while (i > 0) {
      factorial *= i;
      i--;
    }
    std::cout << "Factorial of " << num << " is: " << factorial << "\n\n";
  }

  // Example 3: Guess the number game using a do-while loop
  // Prompt: Write a program that generates a random number between 1 and 100.
  // The user has to guess the number. Provide feedback after each guess
  // (too high, too low, or correct).
  // TODO: Your code goes here
  srand(time(0));                     // Initialize random seed
  int secretNumber = rand() % 10 + 1; // Generate random number between 1 and 10
  int guess;

  do {
    std::cout << "Guess the number (between 1 and 10): ";
    std::cin >> guess;
    if (guess < secretNumber) {
      std::cout << "Too low! Try again."
                << "\n";
    } else if (guess > secretNumber) {
      std::cout << "Too high! Try again."
                << "\n";
    } else {
      std::cout << "Congratulations! You guessed the number." << std::endl;
    }
  } while (guess != secretNumber);

  return 0;
}
