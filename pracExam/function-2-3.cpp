#include<stdio.h>

bool is_a_palindrome(int integers[], int length) {
    if(length <= 0) {
        return false;
    }

    for(int i = 0; i < length; i++) {
        if(integers[i] != integers[length-1-i]){
            return false;
        }
    }
    return true;
}

int sum_elements(int integers[], int length) {
    if(length <= 0) {
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += integers[i];
    }
    return sum;

}

int sum_if_a_palindrome(int integers[], int length) {
    if(length <= 0) {
        return -1;
    }

    if(is_a_palindrome(integers, length)){
        return sum_elements(integers,length);
    } else {
        return -2;
    }
}