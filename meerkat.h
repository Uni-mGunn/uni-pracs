#ifndef MEERKAT_H
#define MEERKAT_H

#include <iostream>
#include <string.h>

using namespace std;

class meerkat {
    private:
        int age;
        string name;
    public:
        meerkat();                      // no name or age is required to create a meerkat
        void setName(string meerName);   // change the meerkat's name
        string getName();
        void setAge(int meerAge);        // change the meerkat's age
        int getAge(); 
};

#endif 
