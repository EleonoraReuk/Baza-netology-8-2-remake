#ifndef FIGURE_EXCEPTION_H
#define FIGURE_EXCEPTION_H

#include <stdexcept>
#include <string>

class FigureException : public std::logic_error {
private:
    std::string figure_name;
    std::string error_reason;

public:
    FigureException(const std::string& figure_name, const std::string& error_reason);

    const char* what() const noexcept override;
    std::string get_figure_name() const;
    std::string get_error_reason() const;
};

#endif