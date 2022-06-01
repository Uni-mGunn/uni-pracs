#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <iostream>
#include <string.h>
#include "AirCraft.h"

using namespace std;
class AirFleet {
    private:
        AirCraft **aircrafts;

    public:
        AirFleet();                          
        /* creates an air fleet containing pointers to  5 AirCraft objects as an array; 
        the first and the last elements of the array are pointers to AirPlane objects, 
        the rest of the elements are Helicopters
        */

        AirCraft **get_aircraft();      // returns the array of pointers to the five aircraft objects

};
#endif