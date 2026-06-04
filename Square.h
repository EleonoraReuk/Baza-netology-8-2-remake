#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(int side);

    void print_info() const override;
    void validate() const override;
};

#endif