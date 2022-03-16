#include<stdio.h>

int binary_to_number(int binary_digits[], int number_of_digits) {
    int pow = 1;
    int sum = 0;
    for(int i = 0; i < number_of_digits; i++){
        sum = pow * binary_digits[i];
        pow = pow * 2;
    }
    return sum;
}