#include <iostream>
#include "cart.h"

cart::cart(){
    catCount = 0;
}

bool cart::addMeerkat(meerkat _cat){
    if (catCount < 4){
        cats[catCount++] = _cat;
        return true;
    }
    return false;
}

void cart::emptyCart(){
    catCount = 0;
}

void cart::printMeerkats(){
    for(int i = 0; i < catCount; i++){
        cout << cats[i].getName() << " " << cats[i].getAge() << endl;
    }
}
