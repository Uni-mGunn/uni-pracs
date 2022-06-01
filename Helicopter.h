#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include <string.h>
#include "AirCraft.h"

using namespace std;
class Helicopter : public AirCraft {
    private:
        static int numBirds;

        int craftID;  // unique craft id attribute
    public:
        Helicopter();
        Helicopter(int w);     // creates a Helicopter with weight w
                            // calls the parent class constructor with type=="Helicopter", weight==w
                            // and length of service, service==0
        void set_craftID(int w);
        int get_craftID();
};
#endif