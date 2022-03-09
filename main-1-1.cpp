#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int diagonal(int array[4][4]);

int main() {
    int array[4][4] = { {4,5,6,7},{4,5,6,7},{4,5,6,7},{4,5,6,7} };
    std::cout << "The number is: " << diagonal(array) << std::endl;
    return 0;
}