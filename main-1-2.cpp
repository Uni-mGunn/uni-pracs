#include <iostream>
#include <string.h>
#include "person.h"

int main(){


    person jeof("jeof", 3);
    jeof.setName("bob");
    std::cout << jeof.getName() << std::endl;

    jeof.setSalary(42);

    std::cout << jeof.getSalary() << std::endl;

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out