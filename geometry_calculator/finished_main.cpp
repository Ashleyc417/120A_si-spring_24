#include "finished_geometry_calculator.h"
#include <iostream>

int main() {
  double length, width, radius, side1, side2, side3;
  int dividend, divisor;

  // Prompt for rectangle dimensions
  std::cout << "Enter length of the rectangle: ";
  std::cin >> length;
  std::cout << "Enter width of the rectangle: ";
  std::cin >> width;

  // Calculate and display rectangle area
  double areaRectangle = calculateRectangleArea(length, width);
  if (areaRectangle != -1) {
    std::cout << "Area of the rectangle: " << areaRectangle << "\n\n";
  }

  // Prompt for circle radius
  std::cout << "Enter radius of the circle: ";
  std::cin >> radius;

  // Calculate and display circle circumference
  double circumferenceCircle = calculateCircleCircumference(radius);
  if (circumferenceCircle != -1) {
    std::cout << "Circumference of the circle: " << circumferenceCircle
              << "\n\n";
  }

  // Prompt for triangle sides
  std::cout << "Enter length of side 1 of the triangle: ";
  std::cin >> side1;
  std::cout << "Enter length of side 2 of the triangle: ";
  std::cin >> side2;
  std::cout << "Enter length of side 3 of the triangle: ";
  std::cin >> side3;

  // Calculate and display triangle perimeter
  double perimeterTriangle = calculateTrianglePerimeter(side1, side2, side3);
  if (perimeterTriangle != -1) {
    std::cout << "Perimeter of the triangle: " << perimeterTriangle << "\n\n";
  }

  // Prompt for dividend and divisor
  std::cout << "Enter dividend: ";
  std::cin >> dividend;
  std::cout << "Enter divisor: ";
  std::cin >> divisor;

  // Calculate and display quotient and remainder
  calculateQuotientAndRemainder(dividend, divisor);

  // Exit code
  return 0;
}
