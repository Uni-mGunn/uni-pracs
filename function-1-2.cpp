#include <iostream>

double average(int array[], int n) {
    double sum = 0.0;
    if (n<1) {
        return sum;
    }
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum/n;
}