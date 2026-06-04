#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
    std::string name;

public:
    Figure(const std::string& name);
    virtual ~Figure() = default;

    virtual void print_info() const;
    virtual std::string get_name() const;
    virtual void validate() const = 0;
};

#endif
