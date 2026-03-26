#ifndef ERROR_LOGGER_HPP
#define ERROR_LOGGER_HPP

#include "logger.hpp"

class ErrorLogger : public ILogger {
public:
    void log(string message) override;
};

#endif