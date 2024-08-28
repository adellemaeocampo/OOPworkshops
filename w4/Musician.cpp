#include "Musician.h"

#include <string> 

using namespace std; 

Musician::Musician(){
    instrument = "null";
    experence = 0; 
}

Musician::Musician(string instrument, int experience){ 
    this->instrument = instrument; 
    this->experence = experience; 
}

string Musician::get_instrument() {
    return instrument; 
}

int Musician::get_experience() {
    return experence; 
}