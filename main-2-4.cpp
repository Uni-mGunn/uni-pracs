#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_min_and_max(int integers[], int length);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << sum_min_and_max(array, -1) << std::endl;
    return 0;
}