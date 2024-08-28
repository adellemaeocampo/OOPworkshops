#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
#include <string>

class Warrior : public Player { 
    private: 
        string weapon;
    public: 
        void swingWeapon(Player* opponent); 
        string setWeapon(string weapon);
        string getWeapon();
}

#endif 