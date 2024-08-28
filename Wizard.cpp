#include "Wizard.h"

#include <iostream> 

using namespace std; 

// defining wizard functions 
void Wizard::castSpell(Player* opponent){
    opponent->takeDamage(damage); 
    cout << name << "casts spell on " << opponent.getName() << "for " << damage << "damage.\n" <<endl;
}

int Wizard::setMana(int mana) : mana(mana){}

int Wizard::getMana(){
    return mana; 
}