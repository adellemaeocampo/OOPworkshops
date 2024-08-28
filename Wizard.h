#ifndef WIZARD_H 
#define WIZARD_H  

#include"Player.h"

class Wizard : public Player {
    private:
        int mana; 
    public: 
        void castSpell(Player* opponent); 
        int setMana(int mana);
        int getMana();
};

#endif