#include <iostream>

void print_until_down(int *vals, int len){

    int prev = vals[0];
    std::cout << prev << " ";
    for(int i=1; i<len; i++){
        if(vals[i] < prev){
            return;
        }
        if(i == len-1){
            std::cout << vals[i] << std::endl;
        } else {
            std::cout << vals[i] << " ";
        }
        prev = vals[i];
    }
} 
