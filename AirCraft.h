#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <iostream>
#include <string.h>

using namespace std;
class AirCraft {
    protected:
        string type;                 // the type of AirCraft
        int weight;                // the weight of AirCraft
        int service;                 // the years (length) in service l; takes only non-negative values
    public:
        AirCraft();
        AirCraft(string t, int w, int l);   // creates an Aircraft of type t, weight w, and length-in-service l

        void set_type(string s); 
        string get_type();      

        void set_weight(int s); 
        int get_weight();  

        void set_service(int s); 
        int get_service();

        virtual int get_speed(); // returns speed of aircraft
};
#endif