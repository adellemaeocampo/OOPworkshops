#include <iostream>
#include"Appliance.h"

using namespace std;

int main(){
    Appliance* fridge = new Appliance();

    fridge->set_powerRating(5);
    cout << "Power rating; " << fridge->get_powerRating() << endl;

    cout << "is the fridge on? " << fridge->get_isOn() <<endl;

    fridge->turnOn();
    cout << "is the fridge on now? " << fridge->get_isOn() <<endl;


}