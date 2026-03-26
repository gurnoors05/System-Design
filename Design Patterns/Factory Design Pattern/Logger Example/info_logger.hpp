#ifndef INFO_LOGGER_HPP
#define INFO_LOGGER_HPP

#include "logger.hpp"

class InfoLogger : public ILogger {
public:
    void log(string message) override;
};

#endif