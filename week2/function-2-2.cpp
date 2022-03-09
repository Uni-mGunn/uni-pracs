#include <iostream>
#include <math.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits) {
    int count = 0;
    for(int i = 0; i < number_of_digits; i++) {
        count += pow(2, i) * binary_digits[number_of_digits-i-1];
    }

    return count;
}