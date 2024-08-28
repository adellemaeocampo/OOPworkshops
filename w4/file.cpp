#include "Cage.h"

// Default constructor
Cage::Cage() : occupant_name(""), id_number(0) {}

// Constructor with parameters
Cage::Cage(std::string newName, int newNumber) : occupant_name(newName), id_number(newNumber) {}

// Returns the name of the cage occupant
std::string Cage::getName() const {
    return occupant_name;
}

// Returns the ID number of the cage
int Cage::getIDnum() const {
    return id_number;
}

// Destructor
Cage::~Cage() {
    // No dynamic memory to clean up, so the destructor is empty
}
