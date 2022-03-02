#include <iostream>

int count(int array[], int n, int number) {
    unsigned int sum = 0;
    if (n<1) {
        return sum;
    }
    for(int i = 0; i < n; i++) {
            if (array[i] == number) {
                sum++;
            }
        }
    return sum;
}