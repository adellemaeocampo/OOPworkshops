#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
    protected:
        int numAppliances;
        Appliance** appliances;
        int maxAppliances;
    public:
        House();
        House(int numAppliances);
        bool addAppliances(Appliance* appliance);
        double getTotalPowerConsumption();
        ~House();
};


#endif