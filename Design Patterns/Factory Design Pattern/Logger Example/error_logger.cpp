#include <iostream>
#include "error_logger.hpp"

using namespace std;

void ErrorLogger::log(string message) {
    cout << "[ERROR]: " << message << endl;
}