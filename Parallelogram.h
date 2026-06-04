#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B);

    void print_info() const override;
    void validate() const override;
};

#endif