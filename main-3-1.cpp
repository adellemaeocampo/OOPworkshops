#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"

#include <iostream> 

using namespace std; 

int main () {
    House* mansion = new House(3);

    Fridge* twoDoor = new Fridge(4, 7.5);
    Fridge* miniFridge = new Fridge(5, 5.5);
    TV* samsung = new TV(5, 3.5);

    mansion->addAppliances(twoDoor);
    mansion->addAppliances(miniFridge);
    mansion->addAppliances(samsung); 

    cout << "here is the power consumption: " << mansion->getTotalPowerConsumption() <<endl;

    return 0; 
}