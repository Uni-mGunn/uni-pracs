#include <iostream>

int sum_array(int array[], int n) {
    if (n<1) {
        return 0;
    }
    unsigned int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}