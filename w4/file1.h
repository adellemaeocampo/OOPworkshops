#ifndef CLINIC_H
#define CLINIC_H

#include <string>
#include "Cage.h"

class Clinic {
private:
    std::string clinic_name;  // Name of the clinic
    int max_size;             // Maximum number of cages the clinic can accommodate
    int current_size;         // Current number of cages in the clinic
    Cage* cages;              // Array of cages in the clinic

public:
    // Default constructor
    Clinic();

    // Constructor with parameters
    Clinic(std::string name, int max_size);

    // Destructor
    ~Clinic();

    // Returns the number of cages currently in the clinic
    int getNumber_of_cages() const;

    // Returns the name of the clinic
    std::string getName() const;

    // Returns the array of cages currently in the clinic
    Cage* getCages() const;

    // Tries to add a cage to the clinic
    bool addCage(const Cage& new_cage);

    // Additional methods, if needed, can be added here
};

#endif // CLINIC_H
