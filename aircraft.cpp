#include <iostream>
#include "aircraft.h"
#include "person.h"

using namespace std;

aircraft::aircraft(string _callsign,person _thePilot,person _theCoPilot){
    callsign = _callsign;
    thePilot = _thePilot;
    theCoPilot = _theCoPilot;
}

void aircraft::setPilot(person _thePilot){
    thePilot = _thePilot;
}

person aircraft::getPilot(){
    return thePilot;
}

void aircraft::setCoPilot(person _theCoPilot){
    theCoPilot = _theCoPilot;
}

person aircraft::getCoPilot(){
    return theCoPilot;
}

void aircraft::printDetails(){
    cout << callsign << endl;
    cout << thePilot.getName() << endl;
    cout << theCoPilot.getName() << endl;
}


