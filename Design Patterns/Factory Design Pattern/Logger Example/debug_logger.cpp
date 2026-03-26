#include <iostream>
#include "debug_logger.hpp"

using namespace std;

void DebugLogger::log(string message) {
    cout << "[DEBUG]: " << message << endl;
}