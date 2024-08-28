#include "player.h"
#include <iostream> 

using namespace std; 

//defining player functions 
Player::Player(string name, int health, int damage) : name(name), health(health), damage(damage){}
 
void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    health -= damage; 
    cout << name << " takes " << damage << " damage. Remaining health: " << health <<endl;
}

string Player::setName(string name){
    this->name = name;
    return 0;
}

int Player::setHealth(int health){
    this->health = health;
    return 0;
}
        
int Player::setdamage(int damage){
    this->damage = damage;
    return 0;
}

string Player::getName(){
    return name; 
}

int Player::getHealth(){
    return health;
}
        
int Player::getDamage(){
    return damage;
}
