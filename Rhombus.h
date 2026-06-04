#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
    Rhombus(int side, int A, int B);

    void print_info() const override;
    void validate() const override;
};

#endif