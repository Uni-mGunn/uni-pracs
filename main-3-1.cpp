#include<iostream>

// the keyword extern means the function hello is defined in another file. 
// in our case, it is defined in the file function-1-1.cpp
extern int count_next_element_matches(int vals[], int length);

int main(){
    int vals[]={1,2,2,2,3,1,1,5,2,2};
    int vals_length=10;
    std::cout << count_next_element_matches(vals, 10) << std::endl;

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out