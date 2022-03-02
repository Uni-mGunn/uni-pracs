#include <iostream>
using namespace std;

void twofivenine(int array[], int n) {
    int twos = 0;
    int fives = 0;
    int nines = 0;
    for(int i = 0; i < n; i++) {
        switch (array[i])
        {
        case 2:
            twos++;
            break;
        case 5:
            fives++;
            break;
        case 9:
            nines++;
            break;
        
        default:
            break;
        }
    }
    cout << "2:" + to_string(twos) + ";5:" + to_string(fives) + ";9:" + to_string(nines) + ";\n"

;
}