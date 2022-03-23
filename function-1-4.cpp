#include <iostream>
#include <string>

using namespace std;

void cpyda(double *old_array,double *new_array,int length){
    double *ptr;
    ptr = old_array;
    for(int i = 0; i < length; i++){
        new_array[i] = ptr[i];
    }
}