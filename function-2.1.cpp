#include <iostream>
#include <string>

using namespace std;

void print_sevens(int *nums,int length){
    int *p = nums;
    for(int i=0;i<length; i++) {
        cout << p << endl;
        *p += sizeof(p);
    }
}