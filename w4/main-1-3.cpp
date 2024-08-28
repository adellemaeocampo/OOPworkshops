#include <iostream>
#include "Cage.h"

int main() {
    // Test default constructor
    Cage cage1;
    std::cout << "Cage 1: Name = " << cage1.getName() << ", ID = " << cage1.getIDnum() << std::endl;

    // Test parameterized constructor
    Cage cage2("Fluffy", 123);
    std::cout << "Cage 2: Name = " << cage2.getName() << ", ID = " << cage2.getIDnum() << std::endl;

    // Test setting new values through constructor
    Cage cage3("Whiskers", 456);
    std::cout << "Cage 3: Name = " << cage3.getName() << ", ID = " << cage3.getIDnum() << std::endl;

    return 0;
}
