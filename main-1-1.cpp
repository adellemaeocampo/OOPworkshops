#include "player.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream> 

using namespace std; 

int main () {
    Wizard wizard("Wizard", 100, 5, 15);
    Warrior warrior ("Warrior", 100, 4, "sword");

    wizard.castSpell(&warrior);
    warrior.swingWeapon(&wizard);

    
    return 0; 
}

