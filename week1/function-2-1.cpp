#include <iostream>

int minimum(int array[], int n) {
    if (n<1) {
        return 0;
    }
    int smallest = array[0]; 
    for(int i = 1; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}