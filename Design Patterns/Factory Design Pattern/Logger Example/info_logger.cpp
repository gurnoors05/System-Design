#include <iostream>
#include "info_logger.hpp"

using namespace std;

void InfoLogger::log(string message) {
    cout << "[INFO]: " << message << endl;
}