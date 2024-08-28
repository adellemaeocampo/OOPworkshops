#include <iostream>
#include "Clinic.h"
#include "Cage.h"

int main() {
    // Create a Clinic with a maximum size of 3 cages
    Clinic clinic("Happy Pets Clinic", 3);

    // Test: Check clinic's name
    std::cout << "Clinic Name: " << clinic.getName() << std::endl;

    // Test: Check number of cages currently in the clinic
    std::cout << "Number of cages: " << clinic.getNumber_of_cages() << std::endl;

    // Create some Cage objects
    Cage cage1("Fluffy", 101);
    Cage cage2("Whiskers", 102);
    Cage cage3("Spike", 103);
    Cage cage4("Bella", 104);

    // Test: Add cages to the clinic
    std::cout << "Adding cage1: " << (clinic.addCage(cage1) ? "Success" : "Fail") << std::endl;
    std::cout << "Adding cage2: " << (clinic.addCage(cage2) ? "Success" : "Fail") << std::endl;
    std::cout << "Adding cage3: " << (clinic.addCage(cage3) ? "Success" : "Fail") << std::endl;
    std::cout << "Adding cage4: " << (clinic.addCage(cage4) ? "Success" : "Fail") << std::endl;

    // Test: Check number of cages after additions
    std::cout << "Number of cages: " << clinic.getNumber_of_cages() << std::endl;

    // Test: Retrieve and display all cages
    Cage* cages = clinic.getCages();
    for (int i = 0; i < clinic.getNumber_of_cages(); ++i) {
        std::cout << "Cage " << i + 1 << ": Name = " << cages[i].getName() << ", ID = " << cages[i].getIDnum() << std::endl;
    }

    return 0;
}
