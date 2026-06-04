#include "FigureException.h"

FigureException::FigureException(const std::string& figure_name, const std::string& error_reason)
    : std::logic_error("Ошибка создания фигуры"),
    figure_name(figure_name),
    error_reason(error_reason) {
}

const char* FigureException::what() const noexcept {
    static std::string message = "Ошибка создания " + figure_name + ": " + error_reason;
    return message.c_str();
}

std::string FigureException::get_figure_name() const {
    return figure_name;
}

std::string FigureException::get_error_reason() const {
    return error_reason;
}