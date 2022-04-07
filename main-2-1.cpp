#include <iostream>
#include <string.h>
#include "cart.h"
#include "meerkat.h"

int main(){

    cart vroom;

    for(int i = 0; i < 5; i++){
        meerkat jeof;
        jeof.setAge(42+i);
        jeof.setName("Jeof");
        vroom.addMeerkat(jeof);
    }

    vroom.printMeerkats();

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out