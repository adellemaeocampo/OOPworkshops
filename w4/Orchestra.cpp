#include <iostream> 
#include "Orchestra.h"

using namespace std; 

Orchestra::Orchestra() { 
    Musician* members = nullptr;
    int max = 50; 
    int size = 0; 
}

Orchestra::Orchestra(int size) {
    this->size = size; 
}

int Orchestra::get_current_number_of_members() {
    return size; 
}

bool Orchestra::has_instrument(string instrument){
    for(int i = 0; i <size; i++) {
        if(members[i].get_instrument() = instrument) {
            return true;
        } else {
            return false;
        }
    }
}

 Musician* Orchestra::get_members() {
    return members; 
 }

 bool Orchestra::add_musician(Musician new_musician) {
    if(size < max) {
        members[size++] = new_musician; 
        return true; 
    }
 }

 Orchestra:: ~Orchestra() {
    delete[] members;
 }