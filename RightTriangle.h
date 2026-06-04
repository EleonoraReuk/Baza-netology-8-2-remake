#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B);

    void print_info() const override;
    void validate() const override;
};

#endif