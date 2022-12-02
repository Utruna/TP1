#include <iostream>
#include "date.h"

int main() {
    Date D1(1, 1, 2022);
    std::cout << D1.month() << "/" << D1.day() << "/" << D1.year() << std::endl;
    std::cout << "Hello, World!" << std::endl;  
    return 0;
}

