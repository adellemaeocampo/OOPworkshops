#ifndef PLAYER_H
#define PLAYER_H

#include <string> 

using namespace std;

class Player {
    protected: 
        string name;
        int health;
        int damage;
    public: 
        Player(string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage); 
        string setName(string name);
        int setHealth(int health);
        int setdamage(int damage);
        string getName();
        int getHealth();
        int getDamage();
};

#endif
