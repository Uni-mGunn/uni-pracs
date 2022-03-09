#include <iostream>
#include <string> 
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

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
    cout << ";\n";
}

int main() {
    int array[4][4] = { {4,5,6,7},{4,5,6,7},{4,5,6,7},{4,5,6,7} };
    count_numbers(array);
    return 0;
}