#include "RightTriangle.h"
#include "FigureException.h"
#include <iostream>

RightTriangle::RightTriangle(int a, int b, int c, int A, int B)
    : Triangle(a, b, c, A, B, 90) {
}

void RightTriangle::validate() const {
    Triangle::validate();
    if (C != 90) {
        throw FigureException("Прямоугольный треугольник", "Угол C должен быть 90 градусов");
    }
}

void RightTriangle::print_info() const {
    std::cout << "Прямоугольный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}
