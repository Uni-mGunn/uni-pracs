#include <string>
#include <iostream>
#include "Helicopter.h"
#include "AirCraft.h"
#include "Airplane.h"


Airplane::Airplane() : Helicopter(){
    passengers = 0;
}        // inherit from base class default constructor
Airplane::Airplane(int p) : Helicopter(15000) {
    passengers = p;
}  // number of passengers that can be transported
                // calls the parent class constructor with weight==15000

void Airplane::reducePassengers(int x){
    if (passengers > 0) {
        passengers -= x;
    }
    if (passengers < 0) {
        passengers = 0;
    }
}  // reduce passenger list by x

int Airplane::get_passengers(){
    return passengers;
} // returns the passenger attribute
