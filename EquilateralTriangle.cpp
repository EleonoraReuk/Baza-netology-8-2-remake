#include "EquilateralTriangle.h"
#include "FigureException.h"

EquilateralTriangle::EquilateralTriangle(int side)
    : Triangle(side, side, side, 60, 60, 60) {
}

void EquilateralTriangle::validate() const {
    Triangle::validate();
    if (a != b || b != c) {
        throw FigureException("Равносторонний треугольник", "Все стороны должны быть равны");
    }
    if (A != 60 || B != 60 || C != 60) {
        throw FigureException("Равносторонний треугольник", "Все углы должны быть равны 60 градусов");
    }
}

void EquilateralTriangle::print_info() const {
    std::cout << "Равносторонний треугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}
