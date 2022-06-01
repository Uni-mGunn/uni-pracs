#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <iostream>
#include <string.h>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;
class Airplane : public Helicopter {
    private:
        int passengers;  // class attribute for passengers

    public:
        Airplane();        // inherit from base class default constructor
        Airplane(int p);  // number of passengers that can be transported
                        // calls the parent class constructor with weight==15000

        void reducePassengers(int x);  // reduce passenger list by x
        int get_passengers(); // returns the passenger attribute

};
#endif