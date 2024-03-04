#include "finished_geometry_calculator.h"
#include <cmath> // Include cmath for mathematical functions
#include <iostream>

double calculateRectangleArea(double length, double width)
{
  /**
   * TODO: Add an if statement to check if length and width are greater than
   * zero If both are greater than zero, calculate and return the area
   * Otherwise, print an error message and return -1
   */
  if (length > 0 && width > 0)
  {
    return length * width;
  }
  else
  {
    std::cout << "Error: Length and width must be greater than zero.\n";
    return -1;
  }
}

double calculateCircleCircumference(double radius)
{
  /**
   * TODO: Add an if statement to check if radius is greater than zero
   * If it's greater than zero, calculate and return the circumference
   * Otherwise, print an error message and return -1
   */
  if (radius > 0)
  {
    return 2 * M_PI * radius; // M_PI is a constant representing pi
  }
  else
  {
    std::cout << "Error: Radius must be greater than zero.\n";
    return -1;
  }
}

double calculateTrianglePerimeter(double side1, double side2, double side3)
{
  /**
   * TODO: Add an if statement to check if all sides are greater than zero
   * and if the sum of any two sides is greater than the third side
   * If conditions are met, calculate and return the perimeter
   * Otherwise, print an error message and return -1
   */
  if (side1 > 0 && side2 > 0 && side3 > 0 && side1 + side2 > side3 &&
      side1 + side3 > side2 && side2 + side3 > side1)
  {
    return side1 + side2 + side3;
  }
  else
  {
    std::cout << "Error: Invalid triangle sides.\n";
    return -1;
  }
}

/**
 * Tips:
 * dividend = number
 * divisor = what dividend is being divided by
 * Think about when to use "/" or "%"
 */
void calculateQuotientAndRemainder(int dividend, int divisor)
{
  if (divisor != 0)
  {
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    std::cout << "Quotient: " << quotient << ", Remainder: " << remainder
              << "\n";
  }
  else
  {
    std::cout << "Error: Division by zero.\n";
  }
}
