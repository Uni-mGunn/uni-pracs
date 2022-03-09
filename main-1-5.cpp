#include <iostream>
#include <string> 
using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3]) {
    unsigned int count = 0;
    for(int i = 0; i < 3; i++) {
       for(int j = 0; j < 3; j++) {
            cout << to_string(array1[i][j] + array2[i][j]) + " ";
        }
        cout << "\n";
    }
}

int main() {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed_matrices(matrix1,matrix2) ;
    return 0;
}