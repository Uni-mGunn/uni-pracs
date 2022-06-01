#include <string>
#include <iostream>
#include "Helicopter.h"
#include "AirCraft.h"


int Helicopter::numBirds = 0;

Helicopter::Helicopter() : AirCraft() {
    craftID = numBirds;
    numBirds += 1;
}


// Helicoptor::Helicopter(){
//     craftID = numBirds;
//     numBirds += 1;
// }
Helicopter::Helicopter(int w) : AirCraft("", w, 0) {
    craftID = numBirds;
    numBirds += 1;
}     // creates a Helicopter with weight w
                    // calls the parent class constructor with type=="Helicopter", weight==w
                    // and length of service, service==0

void Helicopter::set_craftID(int w){
    craftID = w;
}
int Helicopter::get_craftID(){
    return craftID;
}

int Helicopter::get_speed(){
    if (weight < 135){
        return 140;
    } else {
        return 120;
    }
} // returns speed of aircraft

int Helicopter::get_numBirds() {
    return numBirds;
}