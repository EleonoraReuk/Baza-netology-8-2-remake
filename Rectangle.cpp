#include "Rectangle.h"
#include "FigureException.h"

Rectangle::Rectangle(int a, int b)
    : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
}

void Rectangle::validate() const {
    Quadrilateral::validate();
    if (a != c || b != d) {
        throw FigureException("Прямоугольник", "Противоположные стороны должны быть равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureException("Прямоугольник", "Все углы должны быть 90 градусов");
    }
}

void Rectangle::print_info() const {
    std::cout << "Прямоугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}