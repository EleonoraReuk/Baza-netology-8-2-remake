#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "FigureException.h"
#include <iostream>


template<typename T, typename... Args>
void create_and_print(Args&&... args) {
    try {
        T figure(std::forward<Args>(args)...);
        figure.print_info();
        std::cout << std::endl;
    }
    catch (const FigureException& e) {
        std::cout << "Ошибка: " << e.what() << std::endl << std::endl;
    }
}

int main() {
    std::cout << "=== Создание фигур с проверкой корректности ===\n" << std::endl;

    create_and_print<Triangle>(10, 20, 30, 50, 60, 70);
    create_and_print<RightTriangle>(10, 20, 30, 50, 60);
    create_and_print<IsoscelesTriangle>(10, 20, 50, 60);
    create_and_print<EquilateralTriangle>(30);
    create_and_print<Quadrilateral>(10, 20, 30, 40, 50, 60, 70, 80);
    create_and_print<Rectangle>(10, 20);
    create_and_print<Square>(20);
    create_and_print<Parallelogram>(20, 30, 30, 40);
    create_and_print<Rhombus>(30, 30, 40);

    std::cout << "Демонстрация обработки ошибок\n" << std::endl;

    std::cout << "Попытка создать треугольник с неверной суммой углов:" << std::endl;
    create_and_print<Triangle>(10, 10, 10, 100, 100, 100);

    std::cout << "Попытка создать треугольник с нарушением неравенства:" << std::endl;
    create_and_print<Triangle>(1, 1, 10, 30, 60, 90);

    std::cout << "Попытка создать прямоугольный треугольник с неверным углом:" << std::endl;
    create_and_print<RightTriangle>(10, 20, 30, 50, 30);

    std::cout << "Попытка создать квадрат с разными сторонами:" << std::endl;
    create_and_print<Square>(15);
    create_and_print<Square>(10);

    std::cout << "Попытка создать прямоугольник с неверными углами:" << std::endl;
    create_and_print<Quadrilateral>(10, 20, 10, 20, 80, 100, 80, 100);

    std::cout << "Попытка создать параллелограмм с неверной суммой углов:" << std::endl;
    create_and_print<Parallelogram>(20, 30, 30, 50);

    std::cout << "Программа завершена" << std::endl;

    return 0;
}