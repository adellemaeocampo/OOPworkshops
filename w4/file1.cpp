#include "Clinic.h"

// Default constructor
Clinic::Clinic() : clinic_name(""), max_size(0), current_size(0), cages(nullptr) {}

// Constructor with parameters
Clinic::Clinic(std::string name, int max_size) : clinic_name(name), max_size(max_size), current_size(0) {
    if (max_size > 0) {
        cages = new Cage[max_size];
    } else {
        cages = nullptr;
    }
}

// Destructor
Clinic::~Clinic() {
    delete[] cages;  // Free the allocated memory
}

// Returns the number of cages currently in the clinic
int Clinic::getNumber_of_cages() const {
    return current_size;
}

// Returns the name of the clinic
std::string Clinic::getName() const {
    return clinic_name;
}

// Returns the array of cages currently in the clinic
Cage* Clinic::getCages() const {
    return cages;
}

// Tries to add a cage to the clinic
bool Clinic::addCage(const Cage& new_cage) {
    if (current_size < max_size) {
        cages[current_size++] = new_cage;
        return true;
    }
    return false;
}
