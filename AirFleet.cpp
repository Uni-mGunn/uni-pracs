#include <string>
#include <iostream>

#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include "AirCraft.h"

AirFleet::AirFleet() {
    aircrafts = new AirCraft*[5];
    aircrafts[0] = new Airplane(20);
    aircrafts[1] = new Helicopter(10000);
    aircrafts[2] = new Helicopter(5000);
    aircrafts[3] = new Helicopter(100);
    aircrafts[4] = new Airplane(15);
}

AirCraft **AirFleet::get_aircraft() {
    return aircrafts;
}

