#include "Quadrilateral.h"
#include "FigureException.h"
#include <iostream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
    : Figure("Четырёхугольник"), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    validate();
}

bool Quadrilateral::check_sides() const {
    return a > 0 && b > 0 && c > 0 && d > 0;
}

bool Quadrilateral::check_angles() const {
    return A > 0 && B > 0 && C > 0 && D > 0 && A < 360 && B < 360 && C < 360 && D < 360;
}

bool Quadrilateral::check_sum_angles() const {
    return (A + B + C + D) == 360;
}

void Quadrilateral::validate() const {
    if (!check_sides()) {
        throw FigureException(name, "Все стороны должны быть положительными числами");
    }
    if (!check_angles()) {
        throw FigureException(name, "Углы должны быть положительными и меньше 360 градусов");
    }
    if (!check_sum_angles()) {
        throw FigureException(name, "Сумма углов должна равняться 360 градусов (текущая сумма: " +
            std::to_string(A + B + C + D) + ")");
    }
}

void Quadrilateral::print_info() const {
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
