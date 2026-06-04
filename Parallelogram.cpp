#include "Parallelogram.h"
#include "FigureException.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
}

void Parallelogram::validate() const {
    Quadrilateral::validate();
    if (a != c || b != d) {
        throw FigureException("Параллелограмм", "Противоположные стороны должны быть равны");
    }
    if (A != C || B != D) {
        throw FigureException("Параллелограмм", "Противоположные углы должны быть равны");
    }
    if (A + B != 180) {
        throw FigureException("Параллелограмм", "Сумма соседних углов должна быть 180 градусов");
    }
}

void Parallelogram::print_info() const {
    std::cout << "Параллелограмм:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
