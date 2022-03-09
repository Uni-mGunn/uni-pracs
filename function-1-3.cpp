#include <iostream>
#include <string> 
using namespace std;

void count_numbers(int array[4][4]) {
    int sums[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 4; i++) {
       for(int j = 0; j < 4; j++) {
            sums[ array[i][j] ] += 1;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << to_string(i) + ":" + to_string(sums[i]) + ";";
    }
    cout << "\n";
}