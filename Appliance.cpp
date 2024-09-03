#include"Appliance.h"

Appliance::Appliance(){
    powerRating = 0;
    isOn = false; 
}

Appliance::Appliance(int powerRating) : powerRating(powerRating){
    isOn = false; 
}

void Appliance::turnOn(){
    if(isOn == false){
        isOn = true; 
    }
}

void Appliance::turnOff(){
    if(isOn == true){
        isOn = false;
    }
}

double Appliance::getPowerConsumption(){
    return 0;
}

int Appliance::get_powerRating(){
    return powerRating;
}

int Appliance::set_powerRating(int powerRating){
    this->powerRating = powerRating;
}

bool Appliance::get_isOn(){
    return isOn;
}


