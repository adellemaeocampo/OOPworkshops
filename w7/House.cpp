#include "House.h"

House::House(){
    numAppliances = 0;
    appliances = nullptr;
}

House::House(int numAppliances){
    this->maxAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
    for(int i=0; i<maxAppliances; i++){
        appliances[i] = nullptr; 
    }

}

bool House::addAppliance(Appliance* appliance){
    if(numAppliances < maxAppliances){
        appliances[numAppliances] = appliance;
        numAppliances ++;
        return true;
    } else {
        return false;
    }

}

double House::getTotalPowerConsumption(){
    double total = 0.0;
    for(int i=0; i<numAppliances; i++){
        if(appliances[i] != nullptr){
            total += appliances[i]->getPowerConsumption();
        }
    }
    return total; 
}

House::~House(){
    for(int i=0; i<maxAppliances; i++){
        delete appliances[i]; 
    }
    delete[] appliances; 
}

/*
#include "House.h"
#include "Appliance.h"

#include <iostream> 

using namespace std;

House::House(){
    numAppliances = 0; 
    trackAppliances = 0;
    appliances = nullptr;
}

House::House(int numAppliances){
    this->numAppliances = numAppliances; 
    trackAppliances = 0;
    appliances = new Appliance* [numAppliances]; 
    for (int i=0; i<numAppliances; i++){
        appliances[i] = nullptr; 
    }
}

bool House::addAppliance(Appliance* appliance){
    if(trackAppliances < numAppliances) {
        appliances[trackAppliances] = appliance;
        trackAppliances++;
        return true; 
    } else {
        return false; 
    }
}

double House::getTotalPowerConsumption(){
    double totalConsumption = 0; 
    for(int i=0; i < numAppliances; i++){
        if(appliances[i] != nullptr){
            totalConsumption += appliances[i]->getPowerConsumption();
        }
    }
    return totalConsumption; 
}

House::~House(){
    delete [] appliances; 
}*/