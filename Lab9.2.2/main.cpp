#include <iostream>
#include <cmath> // Для функції sqrt
#include "geometry_macros.h"

int main() {
    double a, b, c;
    std::cout << "Enter three sides or bases (a, b, c): ";
    std::cin >> a >> b >> c;

    if (IS_TRIANGLE(a, b, c)) {
        double areaTriangle = AREA_TRIANGLE(a, b, c);
        std::cout << "The area of the triangle is: " << areaTriangle << std::endl;
    }
    else if (IS_TRAPEZOID(a, b, c)) {
        double areaTrapezoid = AREA_TRAPEZOID(a, b, c);
        std::cout << "The area of the trapezoid is: " << areaTrapezoid << std::endl;
    }
    else {
        std::cout << "The given dimensions do not form a valid triangle or trapezoid." << std::endl;
    }

    return 0;
}
