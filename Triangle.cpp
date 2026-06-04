#include "Triangle.h"
#include "FigureException.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Figure("Треугольник"), a(a), b(b), c(c), A(A), B(B), C(C) {
    validate();
}

bool Triangle::check_sides() const {
    return (a + b > c) && (a + c > b) && (b + c > a) && a > 0 && b > 0 && c > 0;
}

bool Triangle::check_angles() const {
    return A > 0 && B > 0 && C > 0 && A < 180 && B < 180 && C < 180;
}

bool Triangle::check_sum_angles() const {
    return (A + B + C) == 180;
}

void Triangle::validate() const {
    if (!check_sides()) {
        throw FigureException(name, "Стороны не удовлетворяют неравенству треугольника или имеют неположительное значение");
    }
    if (!check_angles()) {
        throw FigureException(name, "Углы должны быть положительными и меньше 180 градусов");
    }
    if (!check_sum_angles()) {
        throw FigureException(name, "Сумма углов должна равняться 180 градусов (текущая сумма: " +
            std::to_string(A + B + C) + ")");
    }
}

void Triangle::print_info() const {
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}
