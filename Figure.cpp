#include "Figure.h"
#include <iostream>

Figure::Figure(const std::string& name) : name(name) {}

void Figure::print_info() const {
    std::cout << name << ":" << std::endl;
}

std::string Figure::get_name() const {
    return name;
}