#ifndef CART_H
#define CART_H

#include <iostream>
#include <string.h>
#include "meerkat.h"

using namespace std;

class cart {
    private:
        meerkat cats[4];
        int catCount;
        string name;
    public:
        cart();                         // create an empty cart object
        bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
        void emptyCart();               // remove all meerkats from the cart
        void printMeerkats(); 
};

#endif 
