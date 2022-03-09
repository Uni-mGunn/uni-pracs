#include <iostream>
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

    cout << changeArray;
}

int main() {
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled_matrix(threebythree, 3);
    return 0;
}