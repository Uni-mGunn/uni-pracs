#include <iostream>
#include <string> 
using namespace std;

void print_scaled_matrix(int array[3][3],int scale) {
    int changeArray[3][3];

    for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 3; j++) {
            changeArray[i][j] = array[i][j] * scale;
        }
    }

    for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 3; j++) {
            cout << to_string(changeArray[i][j]) + " ";
        }
        cout << "\n";
    }
}