#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double weightedaverage(int[], int);

int main() {
    int array[6] = {1,2,1,4,1,3};
    std::cout << "The number is: " << weightedaverage(array, 6) << std::endl;
    return 0;
}