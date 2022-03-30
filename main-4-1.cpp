#include<iostream>

// the keyword extern means the function hello is defined in another file. 
// in our case, it is defined in the file function-1-1.cpp
extern int* min_max(int **vals,int num_rows, int num_cols);

int main(){
    int row1[]={10,15,99};
    int row2[]={100,5,73};
    int row3[]={23,56,1};
    int row4[]={23,7,5};
    int *vals[]={row1,row2,row3,row4};

    int *mm = min_max(vals,4,3);

    std::cout << mm[0] << " " << mm[1] << std::endl;

    return 0;
}

// in linux, you can compile this program using g++
// g++ -Wall main-1-1.cpp function-1-1.cpp -o main.out
// -Wall means show all Warnings
// -o means you want the output to be named main.out