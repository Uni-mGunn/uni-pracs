#include <iostream>
#include "person.h"

person::person(){
}

person::person(string _myName,int _salary){
    myName = _myName;
    salary = _salary;
}

void person::setName(string _myName) {
    myName = _myName;
}  

string person::getName(){
    return myName;
}

void person::setSalary(int _mySalary) {
    salary = _mySalary;
}


int person::getSalary(){
    return salary;
}

