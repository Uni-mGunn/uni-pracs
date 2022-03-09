#include <iostream>
#include <string> 
using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3]) {
    unsigned int count = 0;
    for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 3; j++) {
            cout << to_string(array1[i][j] + array2[i][j]);
            if (j!=2){
                cout << " ";
            }
        }
        cout << "\n";
    }
}