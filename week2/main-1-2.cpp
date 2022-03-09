#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int identity(int array[10][10]);

int main() {
    int array[10][10] = {{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8},{4,5,6,7,8,4,5,6,7,8}};
    std::cout << "The number is: " << identity(array) << std::endl;
    return 0;
}