#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>

extern int sum_if_a_palindrome(int integers[], int length);

int main() {
    int integers[] = {1,2,3,2,1};
    return sum_if_a_palindrome(integers, 5);
}