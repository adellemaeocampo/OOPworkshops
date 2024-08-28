#include "warrior.h"
#include<iostream> 

using namespace std; 

// defining warrior functions 
void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage);
    cout << name << " swings their " << weapon << " at " << opponent->getName() << " for " << damage << "damage.\n"; 
}

string Warrior::setWeapon(string weapon){
    this->weapon = weapon; 
    return 0;
}

string Warrior::getWeapon(){
    return weapon; 
}
