#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main() {
    int binary[] = {1,0,1,1,0};
    return binary_to_number(binary, 5);
}