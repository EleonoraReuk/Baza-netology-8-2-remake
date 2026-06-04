#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C);

    void print_info() const override;
    void validate() const override;

protected:
    bool check_sides() const;
    bool check_angles() const;
    bool check_sum_angles() const;
};

#endif