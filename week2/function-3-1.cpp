#include <iostream>
using namespace std;

bool fanarray(int array[], int n) {
    if (n<=0) {
        return false;
    } 
    int prev = array[0];
    for(int i = 1; i < n; i++) { // n = 4
    // n/2 == 2
    // 0, 1 wants bigger
    // 2, 3 wants smaller
        if (i*2 < n){ // wants to be be bigger than prev
            if (array[i] >= prev){
                prev = array[i];
            } else {
                return false;
            }
        } else { // wants to be be smaller than prev
            if (array[i] <= prev) {
                prev = array[i];
            } else {
                return false;
            }
        }
    }
    return true;
}