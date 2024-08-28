#include "player.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream> 

using namespace std; 

int main () {
    Player* wizard = new Player("Wizard", 100, 5);
    Player* warrior = new Player("Warrior", 100, 4);

    wizard->attack(warrior, 1);
    warrior->attack(wizard, 10);

    
    return 0; 
}

