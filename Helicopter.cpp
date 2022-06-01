
#include "Helicopter.h"
#include "AirCraft.h"

int Helicoptor::numBirds = 0;


Helicoptor::Helicopter(){
    craftID = numBirds;
    numBirds += 1;
}
Helicoptor::Helicopter(int w) : AirCraft("", w, 0) {
    craftID = numBirds;
    numBirds += 1;
}     // creates a Helicopter with weight w
                    // calls the parent class constructor with type=="Helicopter", weight==w
                    // and length of service, service==0

void set_craftID(int w){
    craftID = w;
}
int get_craftID(){
    return craftID;
}