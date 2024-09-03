#include"Fridge.h"
#include"Appliance.h"

#include<iostream>

using namespace std; 

int main(){
    Fridge* fridge = new Fridge();

    cout << "Here is the Appliances power rating: " << fridge->get_powerRating() << " here is the volume: " << fridge->getVolume() <<endl;

    fridge->set_powerRating(4);
    fridge->setVolume(5.5);

    cout << "Here is the Appliances power rating: " << fridge->get_powerRating() << " here is the volume: " << fridge->getVolume() <<endl; 

    cout << "here is the power consumption: " << fridge->getPowerConsumption() <<endl;

    return 0;
}
