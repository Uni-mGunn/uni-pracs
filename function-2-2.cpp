#include <iostream>
#include <string>

using namespace std;

int maximum_sum(int *nums,int length){
    int max = 0;
    for(int i = 0; i < length; i++){
        int sum = 0;
        for (int j = i; j < length; j++){
            sum += nums[j];
            if(sum > max){
                max = sum
            }
        }
    }
    return max;
}