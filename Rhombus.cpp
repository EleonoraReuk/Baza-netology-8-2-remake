#include "Rhombus.h"
#include "FigureException.h"

Rhombus::Rhombus(int side, int A, int B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {
}

void Rhombus::validate() const {
    Quadrilateral::validate();
    if (a != b || b != c || c != d) {
        throw FigureException("Ромб", "Все стороны должны быть равны");
    }
    if (A != C || B != D) {
        throw FigureException("Ромб", "Противоположные углы должны быть равны");
    }
}

void Rhombus::print_info() const {
    std::cout << "Ромб:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
