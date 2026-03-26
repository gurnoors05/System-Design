#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
using namespace std;

class ILogger {
public:
    virtual void log(string message) = 0;
    virtual ~ILogger() {}
};

#endif