#include "wizard.h"

#include <iostream> 

using namespace std; 

// defining wizard functions
 Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana){}

void Wizard::castSpell(Player* opponent){
    opponent->takeDamage(mana); 
    cout << name << " casts spell on " << opponent->getName() << "for " << damage << " damage.\n" <<endl;
}

int Wizard::setMana(int mana){ 
    this->mana = mana; 
    return 0;
}

int Wizard::getMana(){
    return mana; 
}