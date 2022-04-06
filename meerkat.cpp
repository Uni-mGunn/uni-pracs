#include <iostream>
#include "meerkat.h"

meerkat::meerkat(){
    
}

void meerkat::setName(string _name){
    name = _name;
}

void meerkat::setAge(int _age){
    age = _age;
}

string meerkat::getName(){
    return name;
}

int meerkat::getAge(){
    return age;
}
