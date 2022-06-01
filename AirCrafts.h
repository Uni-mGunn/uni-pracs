#ifndef AIRCRAFTS_H
#define AIRCRAFTS_H

#include <iostream>
#include <string.h>
#include "Helicopter.h"

using namespace std;
class AirCrafts {
    private:
        static int checkSort(Helicopter **craftt, int n);
        static void mixing(Helicopter **craft, int n);
    public:
        static void sort(Helicopter **craft, int n); 

};
#endif