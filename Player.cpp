#include "Player.h"
#include <iostream> 

using namespace std; 

//defining player functions 
Player::Player(string name, int health, int damage) : name(name), health(health), damage(damage){}
 
void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    health -= damage; 
    cout << name << "takes" << damage << "damage. Remaining health: " << health <<endl;
}

string Player::setName(string name) : name(name){}

int Player::setHealth(int health) : health(health){}
        
int Player::setdamage(int damage) : damage(damage){}

string Player::getName(){
    return name; 
}

int Player::getHealth(){
    return health;
}
        
int Player::getDamage(){
    return damage;
}