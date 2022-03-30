#include <iostream>

int count_next_element_matches(int vals[], int length){
    int prev = vals[0];
    int count = 0;
    for(int i = 1; i < length; i++){
        if (vals[i] == prev){
            count += 1;
        }
        prev = vals[i];
    }
    return count;
} 
