#include <iostream>
#include <string> 
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern void count_numbers(int array[4][4]);

int main() {
    int array[4][4] = { {4,5,6,7},{4,5,6,7},{4,5,6,7},{4,5,6,7} };
    count_numbers(array);
    return 0;
}