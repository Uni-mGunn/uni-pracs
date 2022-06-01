#include <iostream>
#include "AirFleet.h"
#include "Helicopter.h"
#include "AirCraft.h"

using namespace std;
int main() {
    AirFleet *fleet = new AirFleet();

    for (int i = 0; i < 5; i++) {
        std::cout << fleet->get_aircraft()[i]->get_weight() << std::endl;
    }

    return 0;
}