#include "Square.h"
#include "FigureException.h"

Square::Square(int side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {
}

void Square::validate() const {
    Quadrilateral::validate();
    if (a != b || b != c || c != d) {
        throw FigureException("Квадрат", "Все стороны должны быть равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureException("Квадрат", "Все углы должны быть 90 градусов");
    }
}

void Square::print_info() const {
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
