#include <iostream>
using namespace std;

bool fanarray(int array[], int n) {
    if (n<=0) {
        return false;
    } 
    int order = array[0];
    for(int i = 1; i < n; i++) {
        if (i < n/2){
            if (array[i] > order){
                order = array[i];
            } else {
                return false;
            }
        } else {
            if (array[i] < order) {
                order = array[i];
            } else {
                return false;
            }
        }
    }
    return true;
}