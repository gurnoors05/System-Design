#ifndef DEBUG_LOGGER_HPP
#define DEBUG_LOGGER_HPP

#include "logger.hpp"

class DebugLogger : public ILogger {
public:
    void log(string message) override;
};

#endif