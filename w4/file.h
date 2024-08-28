#ifndef CAGE_H
#define CAGE_H

#include <string>

class Cage {
private:
    std::string occupant_name; // Name of the cage occupant
    int id_number;             // ID number of the cage

public:
    // Default constructor
    Cage();

    // Constructor with parameters
    Cage(std::string newName, int newNumber);

    // Returns the name of the cage occupant
    std::string getName() const;

    // Returns the ID number of the cage
    int getIDnum() const;

    // Destructor
    ~Cage();
};

#endif // CAGE_H
