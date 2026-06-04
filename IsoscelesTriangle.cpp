#include "IsoscelesTriangle.h"
#include "FigureException.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) {
}

void IsoscelesTriangle::validate() const {
    Triangle::validate();
    if (a != c) {
        throw FigureException("Равнобедренный треугольник", "Боковые стороны должны быть равны");
    }
    if (A != C) {
        throw FigureException("Равнобедренный треугольник", "Углы при основании должны быть равны");
    }
}

void IsoscelesTriangle::print_info() const {
    std::cout << "Равнобедренный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}