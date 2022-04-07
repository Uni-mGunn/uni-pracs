#include <iostream>
#include <string.h>
#include "meerkat.h"

int main(){



    meerkat jeofs[4];

    for(int i = 0; i < 4; i++){
        jeofs[i].setName("jeof");
        std::cout << jeofs[i].getName() << std::endl;

        jeofs[i].setAge(42 + i);

        std::cout << jeofs[i].getAge() << std::endl;
    }

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out