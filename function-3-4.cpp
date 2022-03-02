#include <iostream>

void passorfail(char grade) {
    switch (grade) {
    case 'A', 'B', 'C':
        std::cout << "Pass\n";
        break;
    case 'D', 'E':
        std::cout << "Fail\n";
        break;
    default:
        std::cout << "Nothing\n";
        break;
    }
}