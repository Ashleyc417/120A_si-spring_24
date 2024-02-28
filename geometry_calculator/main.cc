#include <iostream>
#include "geometry_calculator.h"
#include "geometry_calculator.cc"

using namespace std;

int main() {
    double length, width, radius, side1, side2, side3;
    int dividend, divisor;

    // Prompt for rectangle dimensions
    std::cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Calculate and display rectangle area
    double areaRectangle = calculateRectangleArea(length, width);
    if (areaRectangle != -1) {
        cout << "Area of the rectangle: " << areaRectangle << endl;
    }

    // Prompt for circle radius
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Calculate and display circle circumference
    double circumferenceCircle = calculateCircleCircumference(radius);
    if (circumferenceCircle != -1) {
        cout << "Circumference of the circle: " << circumferenceCircle << endl;
    }

    // Prompt for triangle sides
    cout << "Enter length of side 1 of the triangle: ";
    cin >> side1;
    cout << "Enter length of side 2 of the triangle: ";
    cin >> side2;
    cout << "Enter length of side 3 of the triangle: ";
    cin >> side3;

    // Calculate and display triangle perimeter
    double perimeterTriangle = calculateTrianglePerimeter(side1, side2, side3);
    if (perimeterTriangle != -1) {
        cout << "Perimeter of the triangle: " << perimeterTriangle << endl;
    }

    // Prompt for dividend and divisor
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    // Calculate and display quotient and remainder
    calculateQuotientAndRemainder(dividend, divisor);

    return 0;
}
