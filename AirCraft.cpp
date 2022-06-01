#include <iostream>
#include "AirCraft.h"

AirCraft::AirCraft(){

}
AirCraft::AirCraft(string t, int w, int l){
    type = t;
    weight = w;
    service = l;
}   // creates an Aircraft of type t, weight w, and length-in-service l

void AirCraft::set_type(string s){
    type = s;
} 
string AirCraft::get_type(){
    return type;
}    

void AirCraft::set_weight(int s){
    weight = s;
}
int AirCraft::get_weight(){
    return weight;
}  

void AirCraft::set_service(int s){
    service = s;
} 
int AirCraft::get_service(){
    return service;
}

int AirCraft::get_speed(){
    return 0;
}


