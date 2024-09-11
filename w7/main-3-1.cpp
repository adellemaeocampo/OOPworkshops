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

    mansion->addAppliance(twoDoor);
    mansion->addAppliance(miniFridge);
    mansion->addAppliance(samsung); 

    cout << "here is the power consumption: " << mansion->getTotalPowerConsumption() <<endl;

    return 0; 
}

/*
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

#include <iostream> 

using namespace std; 

int main() {
    House* house = new House(3); 

    Fridge* mini = new Fridge(10, 4.5);
    TV* LG = new TV(5, 3.5);
    TV* Samsung = new TV(5, 3.5);

    house->addAppliance(mini);
    house->addAppliance(LG);
    house->addAppliance(Samsung); 

    cout << "total power consumption: " << house->getTotalPowerConsumption() <<endl;

    return 0; 


}

*/