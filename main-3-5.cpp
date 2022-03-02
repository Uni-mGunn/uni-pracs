#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sumeven(double[], int);

int main() {
    double array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << sumeven(array, 5) << std::endl;
    return 0;
}