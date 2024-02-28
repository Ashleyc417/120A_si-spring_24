#include <iostream>
#include <cmath> // Include cmath for mathematical functions

using namespace std;

double calculateRectangleArea(double length, double width) {
    if (length > 0 && width > 0) {
        return length * width;
    } else {
        cout << "Error: Length and width must be greater than zero." << endl;
        return -1;
    }
}

double calculateCircleCircumference(double radius) {
    if (radius > 0) {
        return 2 * M_PI * radius; // M_PI is a constant representing pi
    } else {
        cout << "Error: Radius must be greater than zero." << endl;
        return -1;
    }
}

double calculateTrianglePerimeter(double side1, double side2, double side3) {
    if (side1 > 0 && side2 > 0 && side3 > 0 && side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        return side1 + side2 + side3;
    } else {
        cout << "Error: Invalid triangle sides." << endl;
        return -1;
    }
}

void calculateQuotientAndRemainder(int dividend, int divisor) {
    if (divisor != 0) {
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        cout << "Quotient: " << quotient << ", Remainder: " << remainder << endl;
    } else {
        cout << "Error: Division by zero." << endl;
    }
}

int main() {
    // Test the functions here
    // You can prompt the user for input and call the functions accordingly
    return 0;
}
