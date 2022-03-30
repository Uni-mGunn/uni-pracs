#include<iostream>
#include<string>

// the keyword extern means the function hello is defined in another file. 
// in our case, it is defined in the file function-1-1.cpp
extern std::string lookup_month(int month);

int main(){

    for(int i=1; i<14; i++){
        std::cout << lookup_month(i) << std::endl;
    }

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out