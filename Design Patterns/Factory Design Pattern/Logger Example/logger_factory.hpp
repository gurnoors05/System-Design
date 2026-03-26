#ifndef LOGGER_FACTORY_HPP
#define LOGGER_FACTORY_HPP

#include "common.hpp"
#include "logger.hpp"

class LoggerFactory {
public:
    static ILogger* createLogger(LogLevel level);
};

#endif