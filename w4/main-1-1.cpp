#include <iostream> 
#include "Musician.h"

using namespace std;

int main () {
    Musician musician1;
    cout << "Musician 1: " << musician1.get_experience() << musician1.get_instrument() << endl; 

    Musician musician2("piano", 5);
    cout << "Musician 2: " << musician2.get_experience() << musician2.get_instrument() << endl; 

    return 0;
}
