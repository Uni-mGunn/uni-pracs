#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>

void printer(int array[10][10]) {
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            if(j == 10) {
                std::cout << array[i][j];
                std::cout << "\n";
            } else {
                std::cout << array[i][j] << " ";
            }
        }
    }
}