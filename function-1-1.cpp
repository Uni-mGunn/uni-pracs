#include <iostream>

int sum_array(int array[], int n) {
    unsigned int sum = 0;
    if (n<1) {
        return sum;
    }
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}