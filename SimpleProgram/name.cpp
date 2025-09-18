#include "name.h"
#include "utils.h"

void print_name() {
    std::cout << "Please type your first name and press [Enter]... ";
    std::string name;
    std::cin >> name;
    std::cout << "\n";
    std::cout << name;
}