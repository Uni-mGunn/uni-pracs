#include <iostream>

int sumtwo(int array[], int secondarray[], int n) {
    unsigned int sum = 0;
    if (n<1) {
        return sum;
    }
    for(int i = 0; i < n; i++) {
        sum += array[i];
        sum += secondarray[i];
    }
    return sum;
}