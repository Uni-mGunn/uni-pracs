#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << binary_to_number(array, 0) << std::endl;
    return 0;
}