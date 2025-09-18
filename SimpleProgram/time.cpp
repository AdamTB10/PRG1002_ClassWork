#include "time.h"
#include "utils.h"

void print_time() {
    std::time_t now = std::time(nullptr);
    std::cout << ", the time and date are " << std::ctime(&now) << std::endl;
}