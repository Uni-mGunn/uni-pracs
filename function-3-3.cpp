#include <iostream>

double weightedaverage(int array[], int n) {
    if (n<=0 && n%2 == 0) {
        return 0.0;
    } 
    double weightAve = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if (array[i] == array[j]){
                sum++;
            }
        }
        weightAve += sum * array[i] / n;
    }
    return weightAve;
}