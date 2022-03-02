#include <iostream>

int count_even(int number) {
    unsigned int count = 0;
    if (number<1) {
        return count;
    }
    for(int i = 1; i <= number; i++) {
        if (i%2 == 0) {
            count ++;
        }
    }
    return count;
}