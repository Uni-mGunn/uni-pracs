#include <iostream>

int median(int array[], int n) {
    if (n<=0 || n%2 == 0) {
        return false;
    } 
    int orderedArray[n];
    std::copy(array, array + n, orderedArray);
    for(int i = 0; i < n/2; i++) {
        int min = array[i];
        for(int j = i+1; j < n; i++) {
            if (min < array[j]){
                min = array[j];
            }
        }
        orderedArray[i] = min;
    }
    return array[n/2];
}