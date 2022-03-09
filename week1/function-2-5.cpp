#include <iostream>
using namespace std;

bool descending(int array[], int n) {
    if (n<=0) {
        return false;
    } 
    int order = array[0];
    for(int i = 1; i < n; i++) {
        if (array[i] <= order){
            order = array[i];
        } else {
            return false;
        }
    }
    return true;
}