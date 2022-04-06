#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string.h>

using namespace std;

class person {
    private:
        int salary;
        string myName;
    public:
        person();
        person(string myName,int salary); // a name and salary must be provided to create a person
        void setName(string myName);      // change the person's name
        string getName();
        void setSalary(int mySalary);     // change the person's salary
        int getSalary();
};


#endif 

