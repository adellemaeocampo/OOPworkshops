#include"TV.h"


#include<iostream> 

using namespace std; 

int main () {
    TV* LG = new TV(5, 4.5);

    cout << "here is tv power rating: " << LG->get_powerRating() << " its screen size: " << LG->getScreenSize() << endl;

    LG->setScreenSize(6.6);
    cout << "here is tv power rating: " << LG->get_powerRating() << " its screen size: " << LG->getScreenSize() << endl;

    cout << "here is the TV's power consumption: " << LG->getPowerConsumption() << endl; 

    return 0; 

}